#include<stdio.h>
int main(){
    int n,m,product;
    printf("Enter the first number :");
    scanf("%d",&n);
    printf("Enter the second number :");
    scanf("%d",&m);
    product = 0;
    for(int i=1;i<=m;i++){
        product += n ;
    }
    printf("The product of two numbers is : %d",product);
    return 0;
}