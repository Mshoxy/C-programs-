/*
name: maxwell gachoka
reg no CT101/G/25371/24
subject: write a program that finds the surface area and volume of a cylinder allowing the user to prompt the radius and height
unit intro to programming and problem solving
*/
#include  <stdio.h>
int main(){
float radius,height,surface_area,pi;
float volume;
printf("enter radius:");
scanf("%f",&radius);
printf("enter height");
scanf("%f",&height);
pi=3.142;
surface_area =2*pi*radius*(height + radius);
//,display the surface area
printf("the surface area is %fcm²\n",surface_area);
volume = pi *radius *radius *height;
// display volume of a cylinder
printf(" the volume of the cylinder is %fM³\n",volume);

	return 0;
}