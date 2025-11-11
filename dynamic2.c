#include<stdio.h>
#include<stdlib.h>//standard library
int main()
{
    int *ptr = NULL;

    //step 1 :Allocate the Memory

    //step 2 = Use the Memory

   
    ptr = (int *)malloc(5 * sizeof(int));
    
    //step 3 = Deallocate the memory
    free(ptr);
    
    
    return 0;
}