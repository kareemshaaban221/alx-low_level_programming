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
 * append_text_to_file - sagjo
 * @filename: dpjao
 * @text_content: textdsajo[g]
 * Return: ajdfpoia
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f, n;

if (!filename)
return (FAILURE);

f = open(filename, O_WRONLY | O_APPEND);
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

return (SUCCESS);
}
