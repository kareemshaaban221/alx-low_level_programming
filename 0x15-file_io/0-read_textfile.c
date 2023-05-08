#include "main.h"

/**
 * read_textfile - adgjioas
 * @filename: asjdpofg
 * @letters: dasigj
 * Return: adsoing
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, n, i = 0;
char buffer[letters];

if (!filename)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
return (0);

n = read(file, buffer, letters);

if (write(STDOUT_FILENO, buffer, letters) != letters)
return (0);

close(file);

return (n);
}
