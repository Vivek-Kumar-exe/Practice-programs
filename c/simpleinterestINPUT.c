#include<stdio.h>
int main(){
    float p;
    printf("Enter the value of p:");
    scanf("%f",&p);
    float r;
    printf("Enter the value of r:");
    scanf("%f",&r);
    float t;
    printf("Enter the value of t:");
    scanf("%f",&t);
    float si;
    si=(p*r*t)/100;
    printf("The value of si is:%f",si);
    
    return 0;
}