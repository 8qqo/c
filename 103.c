#include<stdio.h>
int num1,num2,num3,total;
float average;
int main(){
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    total=num1+num2+num3;
    printf("%d+%d+%d=%d\n",num1,num2,num3,total);
    average=total/3.0;
    printf("%.2f",average);
    return 0;
}
