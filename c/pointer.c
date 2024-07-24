#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a; //int* -> int ka address store karta hai
    // VVIP -> *x = 7; // a is changed.
    int** y = &x; // int** -> int* ka address store karta hai
    printf("%d\n",*x); 
    printf("%p",&y); //%p se address print hota hai 
    return 0;
}