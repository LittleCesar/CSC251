/*Cesar Oropeza
 * csc251
 * 2/10/2020
 * lab #6
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int x=0,y=0,z=0;
/*	//printf("Enter a seed \n");
	//scanf("%d", &y);
	srand(time(NULL));
	x = rand()%10;
	printf("z=%d y=%d x=%d \n" ,z,y,x);
*/
	int i = 0;
	for(;i < 10; i++)
	{
		x = rand()%31+50;
		printf("x=%d \n", x);
	}
	return  EXIT_SUCCESS;
}
