//Write a C program to print all-natural numbers between 1 to n using function.
#include<stdio.h>
int printNo(int start,int end);// Function prototype
int main(){
    int start,end;
    printf("Enter the Starting no: ");
    scanf("%d",&start);
    printf("Enter the Ending  no: ");
    scanf("%d",&end);
    printf("All Natural no Starting from %d To %d are: \n",start,end);
    printNo(start,end);// Function call
    return 0;
    
}
int printNo(int start, int end)// function defination
{
    
    if (start>end)
    return 0; 
    else
    printf("%d, ", start);
    //recursively printing the no.
    printNo(start+1,end);   
}
     
