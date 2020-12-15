//Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
#include<math.h>
int Sum( int num);
int main(){
    int num,sum;
    printf("Enter the Number : ");
    scanf("%d",&num);
    sum=Sum(num);
    printf("The sum of digits of %d is %d",num,sum);
    return 0;
}
int Sum(int num){
    if(num==0)
    return 0;
     return num%10+Sum(num/10);

}