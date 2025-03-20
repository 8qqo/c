#include<stdio.h>
int R;
double r,area;
int main(){
    scanf("%d",&R);
    r=(double)R/2;
    area=r*r*3.1415;
    printf("%-10d\n",R);
    printf("%-10.2lf\n",r);
    printf("%-10.4lf",area);

}