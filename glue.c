#include <stdio.h>

/* Import user configuration: */
#include <uk/config.h>

extern int duktape_main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
  return duktape_main(argc, argv);
}
