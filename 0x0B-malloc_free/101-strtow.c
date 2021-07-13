#include <stdlib.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: number of words
 * Return: int of number of words
 */
int count_word(char *s)
int wrdcnt(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	int i, n = 0;

	for (c = 0; s[c] != '\0'; c++)
	for (i = 0; s[i]; i++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		if (s[i] == ' ')
		{
			flag = 1;
			w++;
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}

	return (w);
	n++;
	return (n);
}

/**
 * **strtow - splits a string into words
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
	if (str == NULL || *str == '\0')
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);

	for (i = 0; i <= len; i++)
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\0')
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			if (c)
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else if (c++ == 0)
			start = i;
		else
			i++;
	}

	matrix[k] = NULL;

	return (matrix);
	return (w);
}
