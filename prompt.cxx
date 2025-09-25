/*
name: maxwell gachoka
reg no CT101/G/25371/24
subject: write a program tgat prompts a user to enter the height, bankbalance,phone number
unit intro to programming and problem solving
*/
#include  <stdio.h>
int main(){
	int height;
	double bankbalance;
	char phonenumber [20];
	//prompt user to enter his height
	printf ("enter your height:");
	scanf("%d",&height);
//prompt user to enter his bank balance	
	printf("enter your bank balance:");
	scanf("%lf",&bankbalance);
	//prompt user to enter his phone number
	printf("enter phone number");
	scanf("%s",&phonenumber);
	//print the output
	printf("your height is %dcm\n",height);
	printf("your bankbalance is %lf\n",bankbalance);
	printf("your phonenumber is %s\n",phonenumber);
	return 0;
}