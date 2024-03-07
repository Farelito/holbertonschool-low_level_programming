#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strstr - locates a substring
*@haystack: the longer string to search
*@needle: the substring to search for
*Return: a pointer to the beginning of the located substring, or NULL if
*the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
if (haystack == NULL || needle == NULL)
{
fprintf(stderr, "Null pointer detected\n");
return (0);
}
while (*haystack != '\0')
{
const char *a = needle;
while (*a != '\0')
{
if (*haystack == *needle)
{
return (haystack);
}
a++;
}
haystack++;
}
return (NULL);
}
