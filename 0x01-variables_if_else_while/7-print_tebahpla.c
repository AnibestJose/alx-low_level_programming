#include <stdio.h>

/**
 * main - Print the lowercase alphabeth is reverse.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
