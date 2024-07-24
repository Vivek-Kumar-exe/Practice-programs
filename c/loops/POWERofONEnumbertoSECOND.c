#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    int power = 1;
    for(int i=1;i<=b;i++){
        power = power * a;
    }
    printf("The required answer is : %d",power);

    return 0;
}