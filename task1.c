//program 1
#include <stdio.h>
int main()
{
//	printf("Hello World \n");
	for ( int i = 0; i<4 ; i++)
	{
		fork();
		printf("Hello\n");
	}
	
	printf("Exiting process\n");
}
