/*
name maxwell gachoka
reg no CT101/G/25371/24
year 1 sem 1
*/
#include <stdio.h>
int main () {
	int num;
	printf("select data bundles\n");
	printf("1. 100mbs @ 50 KES\n");
	printf("2. 500mbs @ 200 KES\n");
	printf("3. 1gb @ 350 KES\n");
	printf("4. 2 gb @ 600 KES\n");
	printf("enter num 1-4\t");
	scanf("%d",&num);

    switch (num) {
        case 1:
            printf("You selected 100mbs @ 50 KES\n");
            break;
        case 2:
            printf("You selected 500mbs @ 200 KES\n");
            break;
        case 3:
            printf("You selected 1gb @ 350 KES\n");
            break;
        case 4:
            printf("You selected 2gb @ 600 KES\n");
            break;
        default:
            printf("Invalid selection\n");
            break;
    }
    return 0;
}