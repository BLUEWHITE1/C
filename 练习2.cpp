#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int p,i,j,k=0;
	for(i=100;i<=999;i++)
	{	
	   for(j=2;j<999;j++) 
	   {
	   	if(i%j==0&&i!=j)
	   	{
	   		k++;
	   		break;
		   }
	   }
     } 
     p=900-k;
	  printf("%d\n",p);
   return 0;
}
