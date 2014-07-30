#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int 
main(int i, char**v)
{
	int f;
	char c[20];
	ssize_t s;

	f = open(v[1], O_CREAT | O_APPEND | O_WRONLY, 0600);
	while((s = read(STDIN_FILENO, c, 20)) != 0)
		write(f, c, s);
	return 0;
}
