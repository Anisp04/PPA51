#include<iostream>
using namespace std;

class base 
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
    base()
    {
        i = 10;
        j = 20;
        k = 30;
    }
     void gun()
    {
      cout<<i<<"\n";//Allowed
      cout<<j<<"\n";//Allowed
      cout<<k<<"\n";//Allowed

    }

};
class derived:public base
{
    public:
    void fun()
    {
      cout<<i<<"\n";//Allowed
      cout<<j<<"\n";//not Allowed
      cout<<k<<"\n";//Allowed

    }
};
int main ()
{
    base bobj;
    cout<<bobj.i<<"\n";//Allowed
    cout<<bobj.j<<"\n";//Not Allowed
    cout<<bobj.k<<"\n";//Not Allowed


    
    
    return 0;
}