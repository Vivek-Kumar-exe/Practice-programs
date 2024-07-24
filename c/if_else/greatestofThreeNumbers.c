#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the first number :");
    scanf("%d",&x);
    printf("Enter the second number :");
    scanf("%d",&y);
    printf("Enter the third number :");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("The greatest number is : %d",x);
    }
    else if(y>z && y>x){
        printf("The greatest number is : %d",y);
    }
    else{
        printf("The greatest number is : %d",z);
    }

    return 0;
}