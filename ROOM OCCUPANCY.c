

#include <stdio.h>

int main()
{
	
	int i,j,k;
	
	int occupancy[3][5][10];
		int occupied,vacant;
		
		
			  printf("enter (i=occupied, 0=vacant):\n");
			  
			  for(i=0;i<3;i++){
			  	printf("branch %d\n",i+1);
			  for (j=0;j<5;j++)	{
				  printf("floor %d:\n",j+1);
			for (k=0;k<10;k++)	{
				printf("room %d:",k+1);
				scanf("%d",&occupancy[i][j][k]);
			}  
}	  
}	
			  
printf("\your data;\n");
for(i=0;i<3;i++){
for(j=0;j<5;j++){
	   occupied=0;
	   vacant=0;
for(k=0;k<10;k++){
	if(occupancy[i][j][k]=1)
		occupied++;
	else
		vacant++;
	
		
	}
	printf("branch %d;floor %d - occupied: %d,vacant: %d\n",i+1);
}	   	
}			  	
	
	return 0;
}