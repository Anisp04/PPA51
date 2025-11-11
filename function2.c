#include<stdio.h>
int Addition(int Value1,int Value2)
{
    int result = 0;
    
    result = Value1 + Value2;

    return result;
}
int main()
{
    int No1 = 0, No2 = 0,Ans = 0;

    printf("Enter The First Number : \n");
    scanf("%d",&No1);

    printf("Enter The Second Number : \n");
    scanf("%d",&No2);

    Ans  = Addition(No1,No2);

    printf("Addition is : %d\n",Ans);

    return 0;
}