#include <stdio.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int num = -5;
printf("%d\n", num, ABS(num));
return (0);
}
