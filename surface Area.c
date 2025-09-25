/*
Name:James Karuga 
Reg No:CT101/G/26449/25
Description:C program to calculate the volume of a cylinder 
*/
#include<stdio.h>

int main(){
    float pi,radius,height,surface_area;
    
    printf("enter pi:");
    scanf("%f",&pi);
    
    printf("\nenter radius: ");
    scanf("%f",&height);
    
    printf("\nenter height:");
    scanf("%f",height);
    
    //volume 
    surface_area=(2*pi*radius)+(2*radius*height);
    printf("/n volume is %f,surface_area");
    
    
    return 0;
}