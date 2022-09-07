#include<stdio.h>
int main()
{
    int n,i,d,b,a[51],c=0;
    scanf("%d",&n);    
        d=n+1;
        while(n)
    {   
        scanf("%d",&b);
          a[c]=b;
            c++;
            n--;           
    }
    int l;
    scanf("%d",&l);
    a[c]=l;
    for(i=d;i>1;i--)
    {
        if(a[i-2]>a[i-1])
        {
            c=a[i-2];
            a[i-2]=a[i-1];
            a[i-1]=c;
       } 
    }
    for(i=0;i<d;i++) 
     {
       	 printf("%d ",a[i]);
	}   
}
