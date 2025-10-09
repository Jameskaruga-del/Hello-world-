/*
Name:JAMES KARUGA
Reg No:CT101/G/26449/25
Date:6/10/2025

Description:a simple c program using while loop 

*/

#include<stdio.h>

int main () {

    float balance =20000,amount;
    

    printf("your balance is %.2f\n",balance);
    
        while ( balance>0) {
        
        
    printf("enter amount to withdraw \n");
    
    scanf("%f" ,&amount);
    
        balance-=amount;
        
    printf("current balance is %.2f\n",balance);
    
    
    }
    printf("insufficient balance");
 
    
    
    return 0;
    
}