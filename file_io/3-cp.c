#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * args_checker - checks if the number of arguments is correct
 * @cnt: number of arguments
 * Return: void
 */
void args_checker(int cnt)
{
if (cnt != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}
/**
 * file_from_checker - checks if the file_from can be readed
 * @checked_file: return value of write
 * @filename: name of the file
 * Return: void
 */
void file_from_checker(int checked_file, char *filename)
{
if (checked_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
close(checked_file);
exit(98);
}
}
/**
 * file_to_checker - checks if the file_to can be written
 * @checked_file: return value of write
 * @filename: name of the file
 * Return: void
 */
void file_to_checker(int checked_file, char *filename)
{
if (checked_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
close(checked_file);
exit(99);
}
}
/**
 * check_close - checks if the file descriptor can be closed
 * @closed_file: int
 * @fd: file descriptor
 * Return: void
 */
void check_close(int closed_file, int fd)
{
if (closed_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - linux cp command
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
mode_t mask;
ssize_t rlen, wlen;
int fd_from, fd_to, close_to, close_from;
char buffer[1024];
args_checker(ac);
mask = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
fd_from = open(av[1], O_RDONLY);
file_from_checker(fd_from, av[1]);
fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mask);
file_to_checker(fd_to, av[2]);
while ((rlen = read(fd_from, buffer, 1024)) > 0)
{
file_from_checker(fd_from, av[1]);
wlen = write(fd_to, buffer, rlen);
if (rlen != wlen)
fd_to = -1;
file_to_checker(fd_to, av[2]);
}
if (rlen == -1)
{
close(fd_from);
close(fd_to);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
close_from = close(fd_from);
close_to = close(fd_to);
check_close(close_from, fd_from);
check_close(close_to, fd_to);
return (0);
}
