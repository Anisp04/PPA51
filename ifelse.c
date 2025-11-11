#include<stdio.h>
int main()
{
    int no = 0,Result = 0;
    printf("Enter the number:\n");
    scanf("%d\n",&no);
    
    Result = no % 2;
    
    if(Result==0)
    {
        printf("It is even\n");
    }
    else
    {
        printf("It is odd\n");
        
       
    }
    
    return 0;
}