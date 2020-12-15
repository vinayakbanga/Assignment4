#include <stdio.h>

/* Function declaration */
int hcf(int a, int b);
int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;
    
    /* Input two numbers from user */
    printf("Enter any two numbers to find GCD: ");
    scanf("%d%d", &num1, &num2);
    
    LCM = lcm(num1, num2);
    
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    
    return 0;
}



int hcf(int a, int b)
{
    if(b == 0)
        return a;
    else
        return hcf(b, a%b); 
}
/* The Concept used here is a*b=lcm*hcf */

int lcm(int a,int b){
    return (a*b)/hcf(a,b);
}