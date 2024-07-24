#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the first integer :");
    scanf("%d",&a);
    printf("Enter the second integer :");
    scanf("%d",&b);
    printf("Emter the third integer :");
    scanf("%d",&c);
    printf("Enter the fourth integer :");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("The greatest integer is : %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest integer is : %d",b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest integer is : %d",c);
    }
    else{
        printf("The greatest integer is : %d",d);
    }

    return 0;
}