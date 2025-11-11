#include<stdio.h>
int main()
{
      int i =11;
      float f =23.34;
      char c ='D';
      double d =45.3456789;
      
      printf("%d\n",sizeof(c));//1
      printf("%d\n",sizeof(i));//4
      printf("%d\n",sizeof(d));//8
      printf("%d\n",sizeof(f));//4

      return 0;
}