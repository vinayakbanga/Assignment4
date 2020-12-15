//Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>
#include<math.h>
int reverse(int No);
int palindrome(int No);
int main(){
int n;
printf("Enter The No. to Check Palindrome ");
scanf("%d",&n);
if (palindrome(n)==1){
printf("The NUmber is palindromic Number");
}
else
{
printf("The Number is not palindromic Number");
}

return 0;

}
//Recursive Function to check palindrome
int palindrome(int No){
    if(No==reverse(No)){
    return 1;
    }
    else
    {
        return 0;
    }
    
}
//Recursive Function to reverse a no
int reverse(int No){
   int digit = (int) log10(No);
    
    // Base condition
    if(No == 0)
        return 0;
    
    return ((No%10 * pow(10, digit)) + reverse(No/10));

}