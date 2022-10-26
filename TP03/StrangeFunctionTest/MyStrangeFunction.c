#include <stdio.h>
#include <stdlib.h>


main(int argc, char** argv)
{
    char* word=NULL;
    int longeur;

    if(argc != 2)
        {
            printf("Please give one (and only one) word maybe with \" \"\n");
            return EXIT_FAILURE;
        }

    word = argv[1];

    for(int i=0;word[i]; i++)
        longeur++;

    printf("%d",longeur);


    return EXIT_SUCCESS;
}