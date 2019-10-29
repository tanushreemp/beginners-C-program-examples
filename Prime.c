//A c program to print prime numbers from 1 to n

#include<stdio.h>
#include<math.h>
void main(){
    int num, i, j,check;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Prime numbers are:\n");
    //traversing all numbers from 2 to entered integer num
    for(i=2; i<num; i++)
    {
        if((i == 2)||(i==3)||((i+1)%6==0)||((i-1)%6==0))
        {
            printf("%d\n", i);
        }
    }
}
