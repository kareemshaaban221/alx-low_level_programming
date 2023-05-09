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
 * closeFiles - asdfjago
 * @f1: apgjd
 * @f2: adfpjgja
 * Return: asgjdsa
*/
void closeFiles(int f1, int f2)
{
if (close(f1) == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f1);
exit(100);
}

if (close(f2) == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f2);
exit(100);
}
}

/**
 * openFileCreate - adgskaop
 * @filename: adsihfap
 * @f1: ajgois
 * Return: apgifhsda
*/
int openFileCreate(char *filename, int f1)
{
int f2;

f2 = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (f2 == -1)
{
close(f1);
dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}

return (f2);
}

/**
 * readWrite - adsgjiop
 * @f1: jgasdpog
 * @f2: ajdgip
 * @filename: adfjpoag
 * Return: adpgia
*/
int readWrite(int f1, int f2, char *filename)
{
int n, m;
char buffer[1024];

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
dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", filename);
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
dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
return (0);
}

/**
 * main - angdsak
 * @argc: ajdpig
 * @argv: adiag
 * Return: asdpgi
*/
int main(int argc, char **argv)
{
int f1, f2;

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
f2 = openFileCreate(argv[2], f1);
return (readWrite(f1, f2, argv[2]));
}
