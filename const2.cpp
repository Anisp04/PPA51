#include<iostream>
using namespace std;


class demo
{
    public:
       int No1,No2;
       const int No3;  
       const int No4;

    demo() : No3(30), No4(40)
    {
        No1 = 10;
        No2 = 20;
       
    }
    demo(int A,int B,int C,int D): No3(C),No4(D)
    {
        No1 = A;
        No2 = B;
    }

};
int main()
{
    demo obj1;
    demo obj2;

    cout<<obj1.No1<<"\t" <<obj1.No2<< "\t"<<obj1.No3<<"\t"<<obj1.No4<<"\t";
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\t"<<obj2.No3<<"\t"<<obj2.No4<<"\t";

    obj1.No1++;
    obj1.No2++;
    //obj1.No3++;//
    //6obj1.No4++;


    return 0;
}