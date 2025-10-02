/*
Name:JAMES KARUGA
Reg No:CT101/G/26449/25
Date:1/10/2025

*/
#include<stdio.h>

int main () {
 
    float units ,charges;
    
    printf("enter number of units");
    scanf("%f" ,&units);
    
    if(units<30) {
    
      charges=units*20;
     }
     
     
     else if (units>=30 || units<=60) {
     
       charges=units *25;
       
     }
     
     else if (units>=60){
     
       charges=units *30;
       
     }  
     printf("charges is %.2KES",charges); 
     
    return 0;
    
}