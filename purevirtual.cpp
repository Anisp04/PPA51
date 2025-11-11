#include<iostream>
using namespace std;

class base 
{
    public:
    int A,B;

    //1000
    int Addition(int No1,int No2)//concrete method
    {
        return No1 + No2;
    }
    virtual int Subtraction(int No1,int No2) = 0;//Abstract method

} ;
class derived  : public base
{
    public:
    int X,Y;

     //2000
    int Multiplication (int No1, int No2)//concrete method
    {
        return No1*No2;
    }
    //3000
    int Subtraction(int No1,int No2)//concrete method
    {
        return No1-No2;
    }
    
    
    
    
};
int main()
{

    derived dobj;
    //base bobj; Not ALlowed

    cout<<"Addition is : "<<dobj.Addition(11,22)<<"\n";
     cout<<"Addition is : "<<dobj.Subtraction(11,10)<<"\n";
      cout<<"Addition is : "<<dobj.Multiplication(11,22)<<"\n";

      cout<<sizeof(base)<<"\n";
      cout<<sizeof(derived)<<"\n";

    return 0;
}