#include<iostream>
using namespace std;

float Addition(int No1 ,int No2)
{
    float Ans = 0.0f;
    Ans =  No1 +  No2;
    return Ans;
}
int main()
{
    float A =10.f,B = 11.f;

    cout<<Addition(A,B)<<"\n";

    return 0;
}