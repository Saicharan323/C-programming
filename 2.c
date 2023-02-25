#include <stdio.h>
int main()
{
    int a ,b , c;
    
    printf("enter A:");
    scanf("%d",&a);
   printf("enter B:");
    scanf("%d",&b);
    printf("enter C:");
    scanf("%d",&c);
    c=a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
