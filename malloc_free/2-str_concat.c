#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */
char *str_concat(char *s1, char *s2)
{
size_t len_s1, len_s2;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len_s1 = strlen(s1);
len_s2 = strlen(s2);
result = (char *)malloc(len_s1 + len_s2 + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}
