/*
NAME:JAMES KARUGA
REG NO:CT101/G/26449/25
DATE:22/10/2025

DESCRIPTION:A c fuction to convert degrees in fahrenheit into temperature degrees celsius
*/
#include <stdio.h>

float calculate_celsius(float F);


int main()
{
    float F;
	printf("enter temperature in fahrenheit\t");
	
	scanf("%f",&F);	
	
	F=calculate_celsius(F);
	
	printf("temperature is %.2f",F);
	
	
	return 0;
}

float calculate_celsius (float F){
	
	float c;
	
	c=(F-32)*5/9;
	
	return 0;
}	