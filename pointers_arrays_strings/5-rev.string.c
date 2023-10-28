#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
char t;
int i, j, k;
j = 0;
k = 0;
while (s[j] != '\0')
{
j++;
}
k = j - 1;
for (i = 0; i < j / 2; i++)
{
t = s[i];
s[i] = s[k];
s[k--] = t;
}
}
