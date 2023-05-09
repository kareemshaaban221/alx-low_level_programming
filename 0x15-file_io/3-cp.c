#include "main.h"
#include <stdio.h>

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
char *ss = s;
int len = 0;

if (s == NULL)
return (0);

while (*ss != '\0')
{
len++;
ss++;
}

return (len);
}

/**
 * str_concat - concate
 * @s1: the string to concatenate
 * @s2: the string to conc
 * Return: the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
int len1 = _strlen(s1);
int len2 = _strlen(s2);
char *res = malloc((len1 + len2 + 1) * sizeof(char));
int i;

if (res == NULL)
return (NULL);

for (i = 0; i < len1; i++)
res[i] = s1[i];

for (i = 0; i < len2; i++)
res[i + len1] = s2[i];

res[len1 + len2] = '\0';

return (res);
}

void closeFiles(int f1, int f2)
{
    if(close(f1) == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f1);
        exit(100);
    }
    
    if(close(f2) == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f2);
        exit(100);
    }
}

int main(int argc, char **argv)
{
    int f1, f2, n, m;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    f1 = open(argv[1], O_RDONLY);
    if (f1 == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (f2 == -1)
    {
        close(f1);
        dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    n = read(f1, buffer, sizeof(buffer));
    if (n == -1)
    {
        closeFiles(f1, f2);
        return (0);
    }

    m = write(f2, buffer, n);

    if (m == -1)
    {
        closeFiles(f1, f2);
        dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    
    while (buffer[n] != EOF && buffer[n])
    {
        n = read(f1, buffer, sizeof(buffer));
        if (n == 0)
        {
            closeFiles(f1, f2);
            return (0);
        }
        m = write(f2, buffer, n);

        if (m == -1)
        {
            closeFiles(f1, f2);
            dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    return (0);
}
