#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
   // int q=a/b;
   // int r=a-(b*q);
   // printf("The value of remainder is:%d",r);
   int r = a % b;
   printf("The value of remainder is:%d",r);
    return 0;
}