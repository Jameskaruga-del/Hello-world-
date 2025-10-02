/*
Name:JAMES KARUGA
Reg No:CT101/G/26449/25
Date:1/10/2025

*/
#include<stdio.h>

int main () {
 
    int choice;
    
    printf("1.100MB  @50\n");
    printf("2. 500MB @200\n");
    printf("3. 1GB   @350\n");
    printf("4. 2GB   @600\n");
    
    printf("enter your choice (1-4");
    scanf("%d" ,&choice); 
    
    switch (choice) {
    
    break;
    case 1:
    printf("you selected 100MB.cost=50");
    
    break;
    case 2:
    printf("you selected 500MB.cost=100");
    
    break;
    case 3:
    printf("you selected 1GB.cost=350");
    
    break;
    case 4:
    printf("you selected 2GB.cost=600");
    
    break;
 default:
    printf("invalid choice");
    
    } 
    return 0;
    
}