#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x; // temp = 2
    *x = *y; // *x = b
    *y = temp; // *y = a
    return;
}
int main(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}