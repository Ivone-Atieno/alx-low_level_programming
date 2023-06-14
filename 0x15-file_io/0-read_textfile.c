#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: letters to be read
 * Return: actual number of bytes read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wrt;
	char *buff;
	ssize_t ffx;
	ssize_t ltr;

	fd = open(filename, O_RDONLY);
	if (ffx == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	wrt = read(ffx, buff, letters);
	w = write(STDOUT_FILENO, buff, ltr);
	free(buff);
	close(ffx);

	return (wrt);
}
