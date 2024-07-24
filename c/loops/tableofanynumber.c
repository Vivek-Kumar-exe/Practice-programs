#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=(n*10);i=i+n){
        if(i%n==0)
        printf("%d",n);
    }
    return 0;
}