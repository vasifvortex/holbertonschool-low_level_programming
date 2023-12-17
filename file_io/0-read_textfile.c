#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 *
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytesWritten;
int fd;
ssize_t bytesRead;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytesRead = read(fd, buffer, letters);
if (bytesRead == -1)
{
free(buffer);
close(fd);
return (0);
}
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
free(buffer);
close(fd);
if (bytesWritten == -1 || bytesWritten != bytesRead)
return (0);
return (bytesRead);
}
