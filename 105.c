#include<stdio.h>
#include<math.h>
int num1,num2;
float result;
int main(){
    scanf("%d",&num1);
    scanf("%d",&num2);
    result=sqrt(num1+num2);
    printf("result=%.2f",result);
}