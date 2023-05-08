#include "main.h"

#define SUCCESS 1
#define FAILURE -1

/**
 * _strlen - adsgsdgad
 * @str: agsdgasdgads
 * Return: asdgasdgad
 */
int _strlen(char *str)
{
int len = 0;

while (str[len] != '\0')
len++;
return (len);
}

/**
 * create_file - cagsdgasd
 * @filename: agsdga
 * @text_content: gasdga
 * Return: agsdgasd
 */
int create_file(const char *filename, char *text_content)
{
int f, permissions = 0600, n;

if (!filename)
return (FAILURE);

f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (f == -1)
return (FAILURE);

if (text_content)
{
n = write(f, text_content, _strlen(text_content));
if (n == -1)
{
close(f);
return (FAILURE);
}
}

close(f);
return (SUCCESS);
}
