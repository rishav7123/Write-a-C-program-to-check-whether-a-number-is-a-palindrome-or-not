// Write a C program to check whether a number is a palindrome or not
#include<stdio.h>   
int main(){
    int num, originalnum, reversed = 0,remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalnum = num;

    while (num != 0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (originalnum == reversed){
        printf("%d is a palindrome number.", originalnum);
    }
    else{
        printf("%d is not a palindrome number.", originalnum);
    }
    return 0;

}