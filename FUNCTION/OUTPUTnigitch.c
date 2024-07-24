#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the range :");
    scanf("%d",&a);
    printf("To :");
    scanf("%d",&b);
    if (a<b){
        for(int i=a;i<=b;i++){
            int flag = 1;
            for(int j=2;j<i;j++){
                if(i%j == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                printf("%d ",i);
            }
        }
    }
    else{
        printf("Invalid Range Entered...");
    }
    return 0;
}