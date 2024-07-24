#include<stdio.h>
int main(){
    int cp,sp,profit,loss;
    printf("Enter the value of Cost price :");
    scanf("%d",&cp);
    printf("Enter the value of Selling price :");
    scanf("%d",&sp);
    if(cp < sp){
        profit = sp - cp;
        printf("The profit incurred is : %d",profit);
    }
    if(cp > sp){
        loss = cp - sp;
        printf("The loss incurred is : %d",loss);
    }

    return 0;
}