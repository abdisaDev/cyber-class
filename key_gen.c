#include <stdio.h>
#include <stdlib.h>

#define KEYSIZE 16

void main()
{
    int i;
    long int start_time, end_time = 1524092929;


    for(start_time = 1523995729; start_time <= end_time; start_time++)
    {
        char key[KEYSIZE];
        srand(start_time);
        for(i = 0; i < KEYSIZE; i++)
        {
            key[i] = rand() % 256;

            printf("%.2x", (unsigned char) key[i]);
        }
        printf("\n");
    }

}