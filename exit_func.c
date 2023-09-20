#include "shell.h"

/**
 **_strncpy - cungf  bopies aye string
 *@dest: the destinatighdon string to be copied to
 *@src: the source  ggb string
 *@n: the amrguint of charfrracters to be copied
 *Return: the convvbccatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatgsb enates two strings
 *@dest: the ffggirst string
 *@src: the secoloom nd string
 *@n: the amoubb nt of bytes to be maximally used
 *Return: the concatenafted string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - function  locates a character in a string
 *@s:  storr the strigbg ng to be parsed
 *@c: holds the charactevfvr to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

