//Write a C program to print all even or odd numbers in given range using recursion.
#include<stdio.h>
int printEvenOddNo(int start,int end);// Function prototype
int main(){
    int start,end;
    printf("Enter the Starting no: ");
    scanf("%d",&start);
    printf("Enter the Ending  no: ");
    scanf("%d",&end);
    
    if(start%2==0)
    printf("THE Even no from %d to %d are: \n",start,end);
    else
     printf("THE Odd no from %d to %d are: \n",start,end);
    printEvenOddNo(start,end);// Function call
    return 0;
    
}
int printEvenOddNo(int start,int end){
    
    if(start>end)
    return 0;
    else 
    printf("%d, ", start);
    //recursively calling the function
    printEvenOddNo(start+2,end);
}
