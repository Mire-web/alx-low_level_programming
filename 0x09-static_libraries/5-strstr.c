#include <stddef.h>
#include "main.h"

/**
 * _strstr - search for a string
 * @haystack: Pointer to string
 * @needle: pointer to search  string
 * Return:char*
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *haypoint = haystack;
char *needlepoint = needle;
while (*haypoint == *needlepoint && *needlepoint != '\0')
{
haypoint++;
needlepoint++;
}
if (*needlepoint == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
