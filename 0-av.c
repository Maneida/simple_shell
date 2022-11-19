#include <stdio.h>

/**
 * main - prints all arguments in av
 * @ac: number of items in av
 * @av: a NULL terminated array of strings
 *
 * Return: 0
*/

int main(int ac, char **av)
{
	int i = 0;

	while (*av[i] != '\0')
	{
		printf("%s ", av[i]);
		++i;
	}

	return (0);
}

