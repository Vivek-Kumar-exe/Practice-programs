#include<stdio.h>
int main (){
    float x;
    printf("Enter the value of x :\n");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x - y;
    printf("The fractional part of the real number is :%f",z);

    return 0;
}