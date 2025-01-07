#include "shell.h"

/**
 * main - cree a simple shell
 *
 * Return: 0;
 */

int main(void)
{
	char *text, *full_path;
	char **arg = NULL;

	signal(SIGINT, handle);

	while (1)
	{
		prompt();
		text = input_read();
		arg = _string(text);
		
		full_path = get_path(arg[0]);
		printf("%s\n", full_path);
		/*execve(full_path, arg, environ);*/
	}
	return (0);
}
