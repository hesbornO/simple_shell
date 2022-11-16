#include "main.h"

int main(int argc, char **argv, char **env)
{
	(void)argc, (void)**argv;
	
	shell_loop(env);
	
	return (EXIT_SUCCESS);
}
