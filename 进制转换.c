#include<stdio.h>
unsigned int p,i,z,a,b,k=1;
int xunhuan(int a)
{
	for(i=1;i<100;i++)
	{
	     k=6*k;
	     if(k>a)
	     {
	     	z=i;
	     	break;
		 } 
	}
	return z;
}
int main()
{
	scanf("%d",&a);
     xunhuan(a);
     int arr[100];
    for( p=z;p>0;p--)
	{
		static i=0;
	 	b=a%6;
	    a=((a-(a%6))/6); 
	    arr[i]=b;
	    	if(i==z-1)
		{
		  for(i;i>=0;i--)
	     {
		   printf("%d",arr[i]);
       	  }	
	   }	   
		i++; 
      }		  	
		return 0;
}
   

