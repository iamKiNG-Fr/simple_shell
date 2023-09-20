#include "shell.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length to calculate.
 *
 * Return: The integer length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    if (!s)
        return (0);

    while (*s++)
        length++;
    return (length);
}

/**
 * _strcmp - Performs lexicographic comparison of two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A negative value if s1 < s2, a positive value if s1 > s2, or zero if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    if (*s1 == *s2)
        return (0);
    else
        return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks if a string starts with a specified substring.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: The address of the next character of haystack if found, or NULL if not found.
 */
char *starts_with(const char *haystack, const char *needle)
{
    while (*needle)
    {
        if (*needle++ != *haystack++)
            return (NULL);
    }
    return ((char *)haystack);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination buffer.
 * @src: The source buffer.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcat(char *dest, char *src)
{
    char *result = dest;

    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = *src;
    return (result);
}

