#include<iostream>
using namespace std;

int main()
{
    int No1 = 10;

    const int No2 = 10;

    No1++;
    No2++;

    No1 = 22;
    No2 = 22;
    
    
    return 0;
}