#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
int a, b;
char *begin, *end = s;
for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
{
end++;
}
b = a + 1;
begin = s;
for (a = 0; a < b / 2; a++)
{
char x;
x = *end;
*end = *begin;
*begin = x;
begin++;
end--;
}
end[b + 1] = '\0';
}
