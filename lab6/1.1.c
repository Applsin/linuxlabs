#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **elem;
  int count = 0;
  for (elem = environ; *elem != NULL; elem++) 
    count++;
  printf("Number of environment variables: %d\n", count);
  return 0;
}
