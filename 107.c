#include<stdio.h>
int num1,num2,num3,num4,num5,num6;
int main(){
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    scanf("%d",&num4);
    scanf("%d",&num5);
    scanf("%d",&num6);

    printf("%10d %10d %10d\n",num1,num2,num3);
    printf("%10d %10d %10d\n",num4,num5,num6);

    printf("%-10d %-10d %-10d\n",num1,num2,num3);
    printf("%-10d %-10d %-10d",num4,num5,num6);
}