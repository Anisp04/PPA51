#include<iostream>
using namespace std;

int main()
{
    int Arr [5];   //Static Memory
    
    int*ptr = NULL;

    //Allocate the Memory
    ptr = new int[5];
    
    //step 2 : use the Memory
    //Logic

    //Step 3:Deallocate the Memory
    delete []ptr;
    
    return 0;
}