#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("enter the value of x1 :");
    scanf("%f",&x1);
    printf("enter the value of y1 :");
    scanf("%f",&y1);
    printf("enter the value of x2 :");
    scanf("%f",&x2);
    printf("enter the value of y2 :");
    scanf("%f",&y2);
    printf("enter the value of x3 :");
    scanf("%f",&x3);
    printf("enter the value of y3 :");
    scanf("%f",&y3);
     m1=(y2-y1)/(x2-x1);
     m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("The points fall on a straight line");
    }
    else{
        printf("The points does not fall on a straight line");
    }

    return 0;
}