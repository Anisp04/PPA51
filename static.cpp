#include<iostream>
using namespace std;

class demo
{
    public:
    int i,j;
    static int k;

    demo()
    {
        i = 10;
        j = 20;
    }
    void fun()
    {
        cout<<"Inside non static function\n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<k<<"\n";
    }
    static void gun()
    {
        cout<<"Inside static gun\n";
        cout<<k<<"\n";
    }

};
int demo::k = 30;
int main()
{
    
    cout<<"Value of k is :"<<demo::k<<"\n";
    demo::gun();

    demo obj1;
    demo obj2;

    obj1.fun();
    obj2.fun();

    obj1.gun();
    obj2.gun();

    cout<<"Value of k using object : "<<obj1.k<<"\n";
    cout<<"Value of k using object : "<<obj2.k<<"\n";
    
    return 0;
}