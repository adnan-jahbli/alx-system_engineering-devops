#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * create_zombie_processes - function that creates multiple zombie processes.
 *
 * Return: 0
 */
int create_zombie_processes(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		if (fork() == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			return (0);
		}
	}

	return (1);
}

/**
 * infinite_while - function that contains an infinite loop.
 *
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0
 */
int main(void)
{
	if (create_zombie_processes() == 0)
		return (0);
	infinite_while();
	return (0);
}
