/*
NAME:JAMES KARUGA
REG NO:CT101/G/26449/25
DATE:22/10/2025

DESCRIPTION:A c to calculate fare
*/
#include <stdio.h>

float calculate_fare(float distance);

int main()
{
	
float fare,distance;


    printf("enter distance travelled\t");
    
    scanf("%f",&distance);
    
    fare=calculate_fare(distance);
    
printf("your tatal fare is %.2f",fare);

return 0;
}

float calculate_fare(float distance){
 
    float fare;
    
    fare=distance*50;
    
    return fare;
}