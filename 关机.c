#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100];
   system("shutdown -s -t 30");
again:
	printf("请输入：我是猪\n"); 
	printf("否则30秒关机\n");
		scanf("%s",a);
	if(strcmp(a,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
	}
	return 0;
 } 
