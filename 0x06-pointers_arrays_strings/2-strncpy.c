#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: bytes?
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;
	/*int length = 0;*/

	for (counter = 0 ; counter < n && src[counter] != '\0' ; counter++)
	{
		dest[counter] = src[counter];
		/*length++;*/
	}
	while (counter < n && dest[counter] != 0)
	{
		dest[counter] = '\0';
		counter++;
	}
	/*dest[length] = '\0';*/
	return (dest);
}
