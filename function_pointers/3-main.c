#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*res)(int, int);
char *get_op;
if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
get_op = argv[2];
if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
res = get_op_func(get_op);
result = res(num1, num2);
printf("%d\n", result);
return (0);
}
