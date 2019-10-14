#include "get_next_line.h"
#include <fcntl.h>

int     main()
{
	char *line;
	int fd;
	int fd2;
	int fd3;
	int	diff_file_size;

	fd = open("sandbox/large_file.txt", O_RDONLY);
	fd2 = open("sandbox/large_file.txt.mine", O_CREAT | O_RDWR | O_TRUNC, 0755);

	while (get_next_line(fd, &line) == 1)
	{
	    write(fd2, line, strlen(line));
	    write(fd2, "\n", 1);
	}
	
	close(fd);
	close(fd2);

	system("diff large_file.txt large_file.txt.mine > large_file.diff");
	fd3 = open("sandbox/large_file.diff", O_RDONLY);
	diff_file_size = read(fd3, NULL, 10);
	close(fd3);
    return (0);
}

int				main(void)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	char		*filename;
	int			errors;

	filename = "gnl1_1.txt";
	fd = open(filename, O_RDONLY);
	if (fd > 2)
	{
		count_lines = 0;
		errors = 0;
		line = NULL;
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			if (count_lines == 0 && strcmp(line, "1234567") != 0)
				errors++;
			count_lines++;
			if (count_lines > 50)
				break;
		}
		close(fd);
		if (count_lines != 1)
			printf("-> must have returned '1' once instead of %d time(s)\n", count_lines);
		if (errors > 0)
			printf("-> must have read \"1234567\" instead of \"%s\"\n", line);
		if (count_lines == 1 && errors == 0)
			printf("OK\n");
	}
	else
		printf("An error occured while opening file %s\n", filename);
	return (0);
}
