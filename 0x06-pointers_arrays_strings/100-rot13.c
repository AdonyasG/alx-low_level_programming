#include "main.h"
/**
 * rot13 - encrypts code
 * @r: string to encrypt
 * Return: char value
 */
char *rot13(char *r)
{
	int i;
	int j;
	char encode1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encode2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; encode1[j]; j++)
		{
			if (r[i] == encode1[j])
			{
				r[i] = encode2[j];
				break;
			}
		}
	}
	return (r);
}
