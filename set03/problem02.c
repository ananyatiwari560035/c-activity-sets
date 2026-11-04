#include <stdio.h>
int start_of_free_bytes=0;
unsigned char memory[10000];

void *my_malloc(int no_of_bytes)
{
    int temp = start_of_free_bytes;
    start_of_free_bytes += no_of_bytes;
    return memory + temp;
}

void my_free(void *ptr)
{

}