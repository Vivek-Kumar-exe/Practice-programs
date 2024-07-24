#include<stdio.h>
int main(){
    int n;
    float x,y=1;
    printf("Enter the base value :");
    scanf("%f",&x);
    printf("Enter the exponent value :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        y = y*x;
    }
    printf("%f to the power %d if %f",x,n,y);
    return 0;
}