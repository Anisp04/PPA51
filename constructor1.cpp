#include<iostream>
using namespace std;

class Marvellous
{
    public:
    int No1;
    int No2;

    Marvellous()
    {
        cout<<"Inside Default Constructor\n";
        No1=0;
        No2=0;
    }
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }
    Marvellous(int A, int B)
    {
        cout<<"Inside Parameterised Constructor\n";
        No1 = A;
        No2 = B;
    }

    void fun()
    {
        cout<<"Inside fun\n";
    }
};
int main ()
{
    Marvellous mobj1;
    Marvellous mobj2(11,22);
   

    
    
    
    return 0;
}