#include<iostream>
using namespace std;
class base
{
    public:
    int i,j;
    base()
    {
        cout<<"Inside base constructor\n";
        i = 10;
        j = 20;
    }
    ~base()
    {
        cout<<"Inside base destructor\n";
    }
    void fun()
    {
        cout<<"Inside base fun\n";
    }

};

class derived : public base
{
    public:
    int x,y;
    derived()
    {
        cout<<"Inside derived constructor\n";
        x = 30;
        y = 40;
        
    }
    ~ derived()
    {
        cout<<"Inside derived destructor\n";
    }
    void gun()
    {
        cout<< "inside derived gun\n";
    }

};

int main ()
{
    derived dobj;
    cout<<"Inside Main function\n";
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.fun();
    dobj.gun();

    
    
    return 0;
}