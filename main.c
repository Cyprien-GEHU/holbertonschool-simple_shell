#include "shell.h"

/**
 * main - cree a simple shell
 *
 * Return: 0;
 */

int main(void)
{
	char *text, *splity, *full_path;
	char **arg = NULL;
	unsigned int x = 0;

	signal(SIGINT, handle);

	while (1)
	{
		x = 0;
		prompt();
		text = input_read();
		splity = malloc(sizeof(char *) * 1024);
		arg = malloc(sizeof(char *) * 1024);
		splity = strtok(text, " "); 
		while (splity)
		{
			arg[x] = splity;
			splity = strtok(NULL, " ");
			x++;
		}

		full_path = get_path(arg[0]);
		printf("%s\n", full_path);
		/*execve(full_path, arg, environ);*/
	}
	return (0);
}
