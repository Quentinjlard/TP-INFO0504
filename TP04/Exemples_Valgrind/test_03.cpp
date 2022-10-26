#include <iostream>
#include <cstdlib>

int
main(int argc, char** argv)
{
  // int* ivalue=(int*)malloc(sizeof(double)*10);
  int *value = (int*)malloc(sizeof(int)*10);

  // double* dvalue=(double*)malloc(sizeof(int)*10);
  double* dvalue=(double*)malloc(sizeof(double)*10);
  
  free(value);
  free(dvalue);

  return EXIT_SUCCESS;
}
