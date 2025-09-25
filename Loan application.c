/*
Name:James Karuga 
Reg No:CT101/G/26449/25
Description:C program to implement loan requirements 
*/
#include<stdio.h>

int main(){
    int age;
    float income;
    
    printf("enter age");
    scanf("%d",&age);
    
    printf("enter income ");
    scanf("%f",&income);
    
    
    //Loan qualification
    
    if (age>=21&&income>=21000)
    printf("congratulations you qualify for the loan");
    else
    printf("unfortunately,we are unable to offer a loan at this time ");
    
    
    return 0;
}