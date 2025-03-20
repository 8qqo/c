#include<stdio.h>
#include<math.h>
int X1,X2,Y1,Y2,num1,num2,num3,num4;
float l;
int main(){
    scanf("%d",&X1);scanf("%d",&Y1);
    scanf("%d",&X2);scanf("%d",&Y2);
    num1=X2-X1;
    num2=Y2-Y1;
    num3=pow(num1,2);
    num4=pow(num2,2);
    l=sqrt(num3+num4);
    printf("%.2f",l);
}
