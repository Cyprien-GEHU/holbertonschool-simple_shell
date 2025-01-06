#include "shell.h"

/**
 * main - cree a simple shell
 *
 * Return: 0;
 */

int main(void)
{
	char *text, *splity, *command, *full_path;
	char **arg = NULL;
	unsigned int x = 0;

	text = input_read();
	splity = malloc(sizeof(char *) * 1024);
	arg = malloc(sizeof(char *) * 1024);
	full_path = malloc(sizeof(char *) * 1024);
	splity = strtok(text, " ");

	while (splity)
	{
		arg[x] = splity;
		splity = strtok(NULL, " ");
		x++;
	}

	command = arg[0];
	full_path = get_path(command);
	printf("%s\n", full_path);

	return (0);
}
