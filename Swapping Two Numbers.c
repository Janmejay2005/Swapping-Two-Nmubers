#include <stdio.h>
int main()
{

int a,b;
int res;
printf("Enter an number:");
scanf("%d %d",&a,&b);
printf("\nthe first number is=%d",a);
printf("\nthe second number is =%d",b);

res=a;
a=b;
b=res;

printf("\nafter swapping");
printf("\nthe first number is=%d",a);
printf("\nthe second number is=%d",b);
return 0;
}
