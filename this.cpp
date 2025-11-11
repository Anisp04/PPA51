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
    void display(int x)//void display(demo *this,int x)
    {
        cout<<"Value of No1 :"<<this->No1<<"\n";
        cout<<"Value of No2 :"<<this->No2<<"\n";
        cout<<"Value of x :"<<x<<"\n";

    }

};

int main()
{
    demo obj(11,21);
    obj.display(51);



    return 0;
}