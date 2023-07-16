#include "shell.h"

/**
 * fork_process - executes arguments
 * @av:array of arguments
 * @envp: environment variables
 * Return: nothing
 */

void fork_process(char **av, char **envp)
{
	pid_t pid_of_child;
	int status;

	pid_of_child = fork();
	if (pid_of_child == -1)
	{
		perror("process can't be forked");
		return;
	}
	if (pid_of_child == 0)
	{
		if (execve(av[0], av, envp) == -1)
		perror("./hsh: No such file or directory exit");
	}
	wait(&status);
}
