/*
Name:James karuga
Reg no:CT101/G/26449/25
A SIMPLE C PROGRAM TO COMPUT FOR COMPOUND INEREST

*/

#include<stdio.h>
#include<math.h> //added because of use of poW
int main(){
	
	float principal,rate,time,amount,compound_interest;
	int n  ;//number of compoundings a year 
	
	printf("enter principal");
	scanf("%f",&principal);
	
	
	printf("enter rate");
	scanf("%f",&rate);
	
	printf("enter n");
	scanf("%d",&n);
	
	printf("enter time");
	scanf("%f",&time);
	
	
	//formula A=P(1+r/100n)^n*t
	
	amount=principal*pow((1+(rate/(100*n))),n*time);
	
	compound_interest=amount-principal;
 

	printf("*\ncompound_interest is %f",compound_interest);
	printf("*\namountis %f",amount );
	return 0;
	
}



