
#include <stdio.h>
int main()
{
	int i,j;
	
	int occupancy [5][10];
	
		int occupied,vacant;
		printf("hotel revenue \n");
		
		//1=0ccupied and 0=vacant
		printf("enter occupacy (1 = occupied, 0 = vacant):\n");
		for(i=0;i<5;i++){
			printf("floor %d:\n",i+1);
			for(j=0;j<10;j++){
				printf("room %d:",j+1);
				scanf("%d",&occupancy[i][j]);
			}
		}
		
printf("\your data is :\n");
for(i=0;i<5;i++){
	occupied=0;
	vacant=0;
	for(j=0;j<10;j++){
		if( occupancy[i][j]=1){
			occupied++;
		}else{
			vacant++;
		}
	}
	printf("floor %d - occupied: %d, vacant :%d\n",i+1,occupied,vacant);
}		
	
	return 0;
}