#include<iostream>
using namespace std;

class demo
{
    public:
    int No1,No2;

    demo(int A,int B)
    {
        No1 = A;
        No2 = B;
    }
    void fun()
    {
        No1++;
        cout<<"the value is : \n";
        No2++;
        cout<<"the value is :\n";

    }
    void gun() const
    {
       // No1++; Not Allowed
        //No2++; NotAllowed

    }

};
int main()
{
    demo obj1(10,20);
    const demo obj2(11,22);

    obj1.fun();
    obj2.gun();

    //obj2.fun();
    obj1.gun();
    
    
    return 0;
}