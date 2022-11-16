#include "main.h"

int shell_loop(char **env)
{
	char *args = NULL;

	do {
		args = read_command(env);
	}
	while (1 == 1)
		;
	free(args);
	return (0);
}
