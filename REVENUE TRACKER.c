
#include <stdio.h>
int main()
{
int i,total;
float avarage;

int revenue[7];



printf("enter %d revenue\n",7);

for (i=0;i<7;i++){
	
	printf("revenue [%d]",i+1);
	scanf("%d",&revenue[i]);
	
}

printf("\n you entered \n");

for(i=0;i<7;i++){
	printf("%d\n",revenue[i]);
	total+=revenue[i];
	avarage=total/7;
	
}

printf("total revenue is :%d\n",total);

printf("avarage revenue is :%f",avarage);
	
	return 0;
}