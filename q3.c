    //Write a C program to find sum of all-natural numbers between 1 to n using recursion.
    #include<stdio.h>
    int Sum(int start,int end);// Function prototype
    int main(){
        int start,end,sum;
        printf("Enter the Starting no: ");
        scanf("%d",&start);
        printf("Enter the Ending  no: ");
        scanf("%d",&end);
    sum= Sum(start,end);
        printf("Sum of Natural numbers form %d to %d =%d",start,end,sum);
    return 0;
    }
    int Sum(int start, int end){
        if(start==end)
        return start;
        else
        return start+Sum(start+1,end);
       
    }