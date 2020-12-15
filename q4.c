//Write a C program to find sum of all even or odd numbers in given range using recursion.
#include<stdio.h>
    int SumofEvenOdd(int start,int end);// Function prototype
    int main(){
        int start,end,sum;
        printf("Enter the Starting no: ");
        scanf("%d",&start);
        printf("Enter the Ending  no: ");
        scanf("%d",&end);
    sum= SumofEvenOdd(start,end);
        printf("Sum of Even/Odd number from %d to %d =%d",start,end,sum);
    return 0;
    }
    int SumofEvenOdd(int start,int end){
        if(start>end)
        return 0;
        else
        return start+SumofEvenOdd(start+2,end);
    }