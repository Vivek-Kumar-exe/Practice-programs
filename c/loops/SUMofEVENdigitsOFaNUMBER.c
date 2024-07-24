#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum = 0;
    int m;
    while(n>0){
        m = n%10;
        if(m%2==0){
        sum = sum + m;
        }
        n = n/10;    
    }
    printf("The sum of even digits is %d",sum);
    return 0;
}