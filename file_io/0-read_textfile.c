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
if (filename == NULL)
return (0);
int fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

char *buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

ssize_t bytesRead = read(fd, buffer, letters);
if (bytesRead == -1)
{
free(buffer);
close(fd);
return (0);
}
ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
free(buffer);
close(fd);
if (bytesWritten == -1 || bytesWritten != bytesRead)
return (0);
return (bytesRead);
}
