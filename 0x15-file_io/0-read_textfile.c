#include "main.h"

/**
 * read_textfile - adgjioas
 * @filename: asjdpofg
 * @letters: dasigj
 * Return: adsoing
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, n;
char *buffer;

if (!filename)
return (0);

buffer = malloc(letters + 1);

if (!buffer)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
return (0);

n = read(file, buffer, letters);

if (n == -1)
return (0);

buffer[n] = '\0';

if (write(STDOUT_FILENO, buffer, n) != (ssize_t) n)
return (0);

close(file);

return (n);
}
