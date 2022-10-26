/**
 * @file simple_test.c
 *
 * @brief File with the implementation of the corresponding header*/

#include <strangeFunction.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
  char* word=(char*)malloc(sizeof(char)+1);
  for(int i=0; i<255; i++)
    word[i] = rand() % 26 + 'A';
  
  float temps;
  clock_t t1, t2;
  
  // if(argc != 2)
  //   {
  //     printf("Please give one (and only one) word maybe with \" \"\n");
  //     return EXIT_FAILURE;
  //   }

  // word = argv[1];

  t1 = clock();

  printf("Value of strange function with %s is %lu\n", word,(unsigned long)strange_function(word));

  t2 = clock();
  return EXIT_SUCCESS;
}
