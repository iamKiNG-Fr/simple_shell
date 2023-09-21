

#include "shell.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
    int index = 0;

    if (dest == src || src == NULL)
        return dest;

    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}

/**
 * _strdup - Duplicates a given string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
    int length = 0;
    char *duplicate;

    if (str == NULL)
        return NULL;

    while (*str++)
        length++;

    duplicate = malloc(sizeof(char) * (length + 1));
    if (!duplicate)
        return NULL;

    for (int i = 0; i <= length; i++)
        duplicate[i] = str[i - 1];

    return duplicate;
}

/**
 * _puts - Prints a string to the standard output.
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */
void _puts(const char *str)
{
    if (!str)
        return;

    int index = 0;
    while (str[index] != '\0')
    {
        _putchar(str[index]);
        index++;
    }
}

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to print.
 *
 * Return: On success, returns 1.
 * On error, returns -1, and sets errno appropriately.
 */
int _putchar(char c)
{
    static int index;
    static char buffer[WRITE_BUF_SIZE];

    if (c == BUF_FLUSH || index >= WRITE_BUF_SIZE)
    {
        write(1, buffer, index);
        index = 0;
    }
    if (c != BUF_FLUSH)
        buffer[index++] = c;

    return 1;
}


