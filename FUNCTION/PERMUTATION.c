#include<stdio.h>
int factorial(int x){
   int fact = 1;
   for(int i=2;i<=x;i++)
    fact = fact*i;
    return fact;
}
int main(){
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
     printf("Enter the value of r:");
    scanf("%d",&r);
    int nfact = factorial(n); 
    int nrfact = factorial(n-r);
    int npr = nfact/nrfact;
    printf("%d",npr);
    return 0;
}
