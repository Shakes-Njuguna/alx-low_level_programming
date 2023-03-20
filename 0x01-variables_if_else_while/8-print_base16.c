#include <stdio.h>
/**
 * main - main function
 * Return: always (0) (success)
 */

int main(void)
{

	int i;
	char low;

	for (i = '0' ; i <= '9' ; i++)
	putchar(i);
	for (low = 'a' ; low <= 'f' ; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
