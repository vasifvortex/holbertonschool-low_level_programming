#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat
 *@s1: char
 *@s2: char
 *@n: unsigned int
 * Return: A pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len_s1, len_s2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len_s1 = strlen(s1);
len_s2 = strlen(s2);
if (n >= len_s2)
n = len_s2;
result = (char *)malloc(len_s1 + n + 1);
if (result == NULL)
return (NULL);
strcpy(result, s1);
strncat(result, s2, n);
result[len_s1 + n] = '\0';
return (result);
}
