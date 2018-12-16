#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **elem;
  int counter = 0;
  for (elem = environ; *elem != NULL; elem++) 
    counter++;
  printf("Number of environment variables: %d\n", counter);
  printf("Number of args: %d\n", argc);
  return 0;
}
