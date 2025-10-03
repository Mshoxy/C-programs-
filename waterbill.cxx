/*
name: maxwell gachoka 
reg no CT101/G/25371/24
subject:water bill calculator
year 1 sem1
*/
#include <stdio.h>
int main () {
	int units;
	float bill;
	
	printf("enter units");
	scanf("%d",&units);
	if (units >= 30)
	{
		bill = units * 20 ;
	}
		else  if (units >=60){
			bill = units * 25 ;
		}
			
			else (units >=60 ); 
			{
				bill =units * 30 ;
			}
				
				
				printf("Total water bill is KES %.2f\n",bill);
				
				return 0;
}
				
				
			