#ifndef SHELL_H
#define SHELL_H

/*#define INPUT_NUM_OF_COMMANDS 15*/

#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

void fork_process(char **av, char **envp);
char prompt_info(char *inputs);

#endif
