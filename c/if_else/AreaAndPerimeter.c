#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("Enter the value of Length :");
    scanf("%d",&length);
    printf("Enter the value of Breadth :");
    scanf("%d",&breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if(area > perimeter){
        printf("Area is greater then Perimeter");
    }
    else if(area < perimeter){
        printf("Area is smaller then Perimeter");
    }
    else{
        printf("Area is equal to Perimeter");
    }

    return 0;
}