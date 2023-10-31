#include "main.h"
#define BUFFER 1024

void copy_from_to(const char *file_from, const char *file_to);

/**
 *main - main entry
 *@argc: this counts the argument
 *argv: array of characters or pointers to array
 *Return: This returns 0 as return value
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_from_to(argv[1], argv[2]);
	return (0);
}
/**
 *copy_from_to - copies file content  to another file
 *@file_from: place of moving file
 *@file_to: where it's being recieved
 *Return: exit(98), if file_from does not exist
 *	exit(99), if file_to can not be written to
 *	exit(100), if file descriptor can not be closed
 */
void copy_from_to(const char *file_from, const char *file_to)
{
	int filedes, r_byte, w_byte, c1_byte, c2_byte;
	char *buff;

	filedes = open(file_from, O_RDONLY);
	if ((filedes < 0) || (file_from == NULL))
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buff = malloc(sizeof(char) * BUFFER);
	if (buff == NULL)
		exit(98);
	r_byte = read(filedes, buff, BUFFER);
	if (r_byte < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	filedes = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filedes < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	w_byte = write(filedes, buff, r_byte);
	if (w_byte < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	free(buff);
	c1_byte = close(filedes);
	if (c1_byte < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", filedes);
		exit(100);
	}
	c2_byte = close(filedes);
	if (c2_byte < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", filedes);
		exit(100);
	}
	chmod(file_to, 0664);
}
