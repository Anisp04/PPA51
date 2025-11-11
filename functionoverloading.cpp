#include<iostream>
using namespace std;

class  demo
{
    public:
    int Addition(int A,int B)
    {
        return A+B;
    }
    int Addition(double A,double B)
    {
        return A+B;
    }
    int Addition(int A,int B,int C)
    {
        return A+B+C;
    }
};
int main()
{
    demo obj;
    cout<<obj.Addition(10,11)<<"/n";
    cout<<obj.Addition(10.90,11.99)<<"\n";
    cout<<obj.Addition(10,11,89)<<"\n";
    

    
    
    return 0;
}