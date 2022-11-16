#include "main.h"

void rm_new_line(char *string)
{
	int i = 0;

	while (string[i])
	{
		if (string[i] == '\n')
		{
			string[i] = '\0';
			return;
		}
		i++;
	}
}
