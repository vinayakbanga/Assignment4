//Write a C program to find reverse of any number using recursion.
#include<stdio.h>
#include<math.h>
int reverse(int No);
int main(){
int n,ReversedNo;
printf("Enter The No. to be Reversed ");
scanf("%d",&n);
ReversedNo=reverse(n);
printf("The Reverse of no %d is %d ",n,ReversedNo);
return 0;

}
int reverse(int No){
   int digit = (int) log10(No);
    
    // Base condition
    if(No == 0)
        return 0;
    
    return ((No%10 * pow(10, digit)) + reverse(No/10));

}