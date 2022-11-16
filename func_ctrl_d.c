#include "main.h"

int func_ctrl_d(char *string, ssize_t read, int *stad_exit)
{
	int i = 0;

	if (read == EOF && isatty(STDIN_FILENO) == 0)
	{
		free(string);
		exit(*stad_exit);
	}
	if (read == EOF && isatty(STDIN_FILENO) == 1)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(string);
		exit(*stad_exit);
	}
	if (_strcmp(string, "\n") == 0)
	{
		*stad_exit = 0;
		return (127);
	}
	while (string[i] != '\n')
	{
		if (string[i] != ' ' && string[i] != '\t')
			return (0);
		++i;
	}
	*stad_exit = 0;
	return (127);
}
