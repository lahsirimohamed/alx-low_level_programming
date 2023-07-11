#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char **strtow(char *str)
{
    int c = numberwords(str);
    int m = 0;
    int i, j;
    char **split;
    int **array;
    array = word(str, c);

    if (str == NULL || *str == '\0')
        return NULL;

    split = malloc((c + 1) * sizeof(char *));
    for (i = 0; i < c; i++)
    {
        split[i] = malloc((array[i][1] - array[i][0] + 2) * sizeof(char));
        for (j = array[i][0]; j <= array[i][1]; j++)
        {
            split[i][m] = str[j];
            m++;
        }
        split[i][array[i][1] - array[i][0] + 1] = '\0';
        m = 0;
    }
    split[c] = NULL;
    return split;
}

int numberwords(char *str)
{
    int c = 0;
    int i;

    if (str == NULL || *str == '\0')
        return 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            c++;
        }
    }
    return c;
}

int **word(char *str, int c)
{
    int **array;
    int t = 0;
    int i, j;
    int k;
    int l;

    if (str == NULL || *str == '\0')
        return NULL;

    array = malloc(c * sizeof(int *));
    for (i = 0; i < c; i++)
    {
        array[i] = malloc(2 * sizeof(int));
    }
    if (array == NULL)
        return NULL;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            k = 0;
            for (j = i - 1; j >= 0; j--)
            {
                if (str[j] == ' ')
                {
                    k = j + 1;
                    break;
                }
            }
            l = i;
            array[t][0] = k;
            array[t][1] = l;
            t++;
        }
    }
    return array;
}


