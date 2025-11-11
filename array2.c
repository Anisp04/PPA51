#include<stdio.h>

int main()
{

    int price[] = {67,89,45,88,90,34};

    printf("%d\n",price[0]);
     printf("%d\n",price[2]);
      printf("%d\n",price[5]);

      printf("%lu \n",sizeof(price));
       printf("%lu \n",sizeof(price[1]));
        printf("%lu \n",sizeof(price[3]));



    return 0;
}