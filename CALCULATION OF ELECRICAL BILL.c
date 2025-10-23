/*
NAME:JAMES KARUGA
REG NO:CT101/G/26449/25
DATE:22/10/2025

DESCRIPTION:A c program for calculation of electrical bill
*/
#include <stdio.h>

float calculate_electrical_bill(float units);

int main(){
	  
	  float units,total_bill;
	  
	  printf("enter units consumed");
	  
	  scanf("%f",&units);
	  
	  
	  total_bill=calculate_electrical_bill(units);
	  
	  printf("total_bill is %.3f",total_bill);
	  
return 0;
}

float calculate_electrical_bill(float units){
	
	  float total_bill;
	  
	  if (units<=100){
		  total_bill=units*10;
	  }
	  else if(units<=200){
		  total_bill=100*10+((units-100)*15);
	  }
	  
	  else {
		  total_bill=100*10+100*15+((units-200)*20);
	  }
return total_bill;	  
}	  