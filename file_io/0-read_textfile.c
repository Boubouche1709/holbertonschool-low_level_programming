#include "main.h"

/**
* read_textfile - read a file and print to stdout
* @filename: name of the file
* @letters: numbers of letter to read
* Return: number of letter to print and read or 0 for failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;
if (filename == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytes_written);
}
