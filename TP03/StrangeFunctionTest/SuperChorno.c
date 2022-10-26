#include <strangeFunction.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
    float temps;
    int longeur;
    clock_t t1, t2, t3, t4;

    // CHAR RANDOM
    unsigned int size, i;
    char * word = NULL;
    size = 100 + rand()%((10000-100)+1);

    word = (char*)malloc((size+1)*sizeof(char));

    for(int i=0;i<size; i++)
        word[i] = (char) (100 + rand()%((10000-100)+1));
    
    word[size] = '\0';
    
    t1 = clock();

    strange_function(word);

    t2 = clock();
    printf("temps = %f\n", (float)(t2-t1)/CLOCKS_PER_SEC);

    for(int i=0;word[i]; i++)
        longeur++;

    t3 = clock();
    printf("temps = %f\n", (float)(t3-t2)/CLOCKS_PER_SEC);

    word.strlen();

    t4 = clock();
    printf("temps = %f\n", (float)(t4-t3)/CLOCKS_PER_SEC);


    return EXIT_SUCCESS;
    }