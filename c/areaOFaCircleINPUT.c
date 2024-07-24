#include<stdio.h>
int main(){
    float r;
    float pi = 3.14;
    printf("Enter the radius\n");
    scanf("%f",&r);
    float a= pi*r*r;
    printf("The area of circle is :%f",a);
    
    return 0;
}