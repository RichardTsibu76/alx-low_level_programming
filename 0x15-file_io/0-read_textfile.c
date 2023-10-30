#include "main.h"
/**
 *read_textfile - Reads textfils and prints it to the posix stdout
 *@letters: The file to print
 *@filename: The file pointer
 *Return: Actual numbers of letters
 *	if filename is NULL, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, r_byte, w_byte;
	char *str;

	file_d = open(filename, O_RDWR);

	if ((filename == NULL) || (file_d < 0))
		return (0);
	str = malloc((letters) * sizeof(char));
	if (str == NULL)
		return (0);
	r_byte = read(file_d, str, letters);
	w_byte = write(STDOUT_FILENO, str, r_byte);
	if (w_byte < 0)
		return (0);
	free(str);
	close(file_d);
	return (r_byte);


}
