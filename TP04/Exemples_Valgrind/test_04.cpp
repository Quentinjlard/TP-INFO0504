#include <iostream>
#include <cstdlib>

int
main(int argc, char** argv)
{
  int* value=new int[10];
  
  // free(value);
  delete[] value;
  
  return EXIT_SUCCESS;
}
