#include <stdio.h>
int main( void )
{
   unsigned int x,y;  

    x=0;
    
   while ( x <= 11 ) {
   	y=0;
   	while(y<=10)
   	{
   		if(y==x)
	   	printf(" ");
	   	else
	   	printf("*");
	y++;	      	
   }
   printf("\n");
   x++;
}
   system("pause");
} 
