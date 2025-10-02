/*
Name:JAMES KARUGA
Reg No:CT101/G/26449/25
Date:1/10/2025

*/
#include<stdio.h>

int main () {

    int attedance , average_marks;
    
    printf("enter attedance\t");
    scanf("n%d" ,attedance);
    
    printf("enter average_marks");
    scanf("\n%d" ,average_marks);
    
    
    if ( attedance>=75&& average_marks>=40){
    printf("eligible for final exam");
    }else{
    
    printf("not eligible for final exam");
    
    } 
    return 0;
    
}