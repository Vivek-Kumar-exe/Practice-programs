#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int r = 0;
    int sum;
    int m=n;
    while(n>0){
        r = r * 10 + (n%10);
        n = n/10;
    }
    sum = r + m;
    printf("The sum is : %d",sum);
    return 0;
}