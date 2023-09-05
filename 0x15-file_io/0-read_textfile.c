#include "main.h"

/**
 * read_textfile - Reading of the text file and printing of the letters
 * @filename: The filename.
 * @letters: The numbers of letters printed
 *
 * Return: The numbers of letters printed. It fails, 0 for returns..
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}

