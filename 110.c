#include<stdio.h>
int num1,num2,num3;
int main(){
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1>=60&&num1<=100){
        printf("1\n");
    }else
    printf("0\n");
    printf("%.2f\n", (num2+1) / 10.0);
    if(num1>num3){
        printf("%d\n",num1);
    }else
    printf("%d\n",num3);

}