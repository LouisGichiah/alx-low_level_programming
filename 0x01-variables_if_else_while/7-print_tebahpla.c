#include <stdio.h>

/**
 *main - prints the lowecase alphabet in reverse,
 *followed by a new line
 *Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
