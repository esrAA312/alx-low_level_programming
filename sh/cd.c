#include "hsh.h"

int cd(char **arg)
{
	char cwd[1024];
	char *path;
	path = arg[1];

	if (path == NULL) {
		char *home = getenv("HOME");
		if (home == NULL) {
			fprintf(stderr, "HOME environment variable not set\n");
			return(-1);
		}
		if (chdir(home) == -1) {
			perror("chdir");
		}
	} else if (strcmp(path, "-") == 0) {
		char *oldpwd = getenv("OLDPWD");
		if (oldpwd == NULL) {
			fprintf(stderr, "OLDPWD environment variable not set\n");
			return(-1);
		}
		write(STDOUT_FILENO, "oldpwd", 6);
		write(STDOUT_FILENO, "\n", 1);

		if (chdir(oldpwd) == -1) {
			perror("chdir");
		}
	} else {
		if (chdir(path) == -1) {
			perror("chdir");
		}
	}
	if (getenv("PWD") != NULL) {
		putenv("PWD");
	}
	if (getcwd(cwd, sizeof(cwd)) != NULL) {
		setenv("PWD", cwd, 1);
	}
	  return(-1);
}
