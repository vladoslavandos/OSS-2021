#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
  int count = 0;
  char **p;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
	{
	count++;
	}
	 printf("Number of enviroment variables: %d\n", count);
	//pintenv | wc -l
return 0;
}
