#include "shell.h"

/**
 * _string - split the input and create a array with argument
 *
 * @input : the input
 *
 * Return: the array with argument
 */

char **_string(char *input)
{
	char **arg = malloc(sizeof(char *) * 1024);
	char *token;
	size_t x = 0, z;

	if (!arg)
		return (NULL);

	token = strtok(input, " \n\t");
	while (token)
	{
		arg[x] = strdup(token);

		if (!arg[x])
		{
			for (z = 0; z < x; z++)
				free(arg[x]);
			free(arg);
			return (NULL);
		}
		x++;
		token = strtok(NULL, " \n\t");
	}
	arg[x] = NULL;
	return (arg);
}
