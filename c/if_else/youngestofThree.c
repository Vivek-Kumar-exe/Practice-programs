#include<stdio.h>
int main(){
    int Ram,Shyam,Ajay;
    printf("Enter the age of Ram :");
    scanf("%d",&Ram);
    printf("Enter the age of Shyam :");
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay :");
    scanf("%d",&Ajay);
    if(Ram>Shyam && Shyam>Ajay){
        printf("Ajay is the youngest");
    }
    else if(Shyam>Ajay && Ajay>Ram){
        printf("Ram is the youngest");
    } 
    else{
        printf("Shyam is the youngest");
    }
    
    return 0;
}