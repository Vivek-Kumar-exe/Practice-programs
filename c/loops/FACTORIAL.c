#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    // 5! = 5 * 4 * 3 * 2 * 1
    int product = 1;
    for(int i=1;i<=n;i++){
        product = product * i;
    }
    printf("The factorial is : %d",product);
    return 0;
}