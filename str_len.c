#include "main.h"

/**
 * str_len - A function that returns the length of a string
 *@s: string
 * Return: always 0
 */

int str_len(char *s)
{
	int count;

	for (count = 0; *(s + count); count++)
		;
	return (count);
}
