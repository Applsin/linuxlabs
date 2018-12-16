#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **elem;
  int counter = 0;
  for (elem = environ; *elem != NULL  && elem < 10; elem++) { 
    printf("%s\n", *elem);
    counter++;
  }
  return 0;
}
