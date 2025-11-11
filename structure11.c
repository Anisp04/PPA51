#include<stdio.h>
#pragma pack(1)
struct demo
{
    int i;
    float f;
    char ch;
    double d;

};

union Hello
{
    int i;
    float f;
    char ch;
    double d;

};
int main()
{
    struct demo dobj;
    printf("Size of Structure is : %d\n",sizeof(dobj));

    union Hello hobj;
     printf("Size of Union is : %d\n",sizeof(hobj));



    return 0;
}