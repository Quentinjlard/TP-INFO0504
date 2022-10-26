#include <iostream>
#include <cstdlib>

int
main(int argc, char** argv)
{
  int* value=(int*)malloc(sizeof(int)*10);

  free(value);

  return EXIT_SUCCESS;
}
