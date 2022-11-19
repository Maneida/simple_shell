#include <stdio.h>

/**
 * readLine - function to read a line of text from the terminal
 * @buffer: array of iinput characters in terminal
 *
 * Return: no return
*/

void readLine(char buffer[])
{
	char character;
	int i = 0;

	printf("$ ");

	do {
		character = getchar ();
		buffer[i] = character;
		++i;
	}

	while (character != '\n');

	buffer[i - 1] = '\0';
}

/**
 * main - Programme to read lines of data
 *
 * Return: 0
*/

int main(void)
{
	int i;
	char line[81];

	void readLine(char buffer[]);

	for (i = 0; i < 3; ++i)
	{
		readLine(line);
		printf("%s\n\n", line);
	}

	return (0);
}