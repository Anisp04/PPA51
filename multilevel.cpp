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
class derivedX:public derived
{
    public:
    int a,b;
    derivedX()
    {
        cout<<"Inside derivedX constructor\n";
        a = 50;
        b = 60;
    }
    ~derivedX()
    {
        cout<<"Inside derivedX destructor\n";
    }
    void sun()
    {
        cout<<"Inside derivedX sun\n";
    }

};

int main ()
{
    derivedX dobj;
//constructors : Base->derived->derivedx
    cout<<"Inside Main function\n";

    cout<<"size of base class\n"<<sizeof(base)<<"\n";//8
    cout<<"size of derived class\n"<<sizeof(derived)<<"\n";//16
    cout<<"size of derivedX class\n"<<sizeof(derivedX)<<"\n";//24

    cout<<dobj.i<<"\n";//10
    cout<<dobj.j<<"\n";//20
    cout<<dobj.x<<"\n";//30
    cout<<dobj.y<<"\n";//40
    cout<<dobj.a<<"\n";//50
    cout<<dobj.b<<"\n";//60


    dobj.fun();//Inside fun of base
    dobj.gun();//Inside gun of derived
    dobj.sun();//Inside sun of derivedx
    //destructora : derivedx ->derived ->Base

    
    
    return 0;
}