#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_stat(int stat, int fd, char *filename, char mode);
/**
 * main - jiagdospga
 * @argc: hdsoaighisa
 * @argv: gjsadpoijga
 *
 * Return: lgdpjasoigjapos
 */
int main(int argc, char *argv[])
{
int f1, f2, n = 1024, m;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
exit(97);
}
f1 = open(argv[1], O_RDONLY);
check_IO_stat(f1, -1, argv[1], 'O');
f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
check_IO_stat(f2, -1, argv[2], 'W');
while (n == 1024)
{
n = read(f1, buffer, sizeof(buffer));
if (n == -1)
check_IO_stat(-1, -1, argv[1], 'O');
m = write(f2, buffer, n);
if (m == -1)
check_IO_stat(-1, -1, argv[2], 'W');
}
n = close(f1);
check_IO_stat(n, f1, NULL, 'C');
m = close(f2);
check_IO_stat(m, f2, NULL, 'C');
return (0);
}

/**
 * check_IO_stat - jgapsodjgpaojds
 * @stat: gpjasdopgaj
 * @filename: gaosdjgpoaga
 * @mode: ghaoisdhiga
 * @fd: agsdo[gjapods]
 *
 * Return: void
 */
void check_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}