#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100];
   system("shutdown -s -t 30");
again:
	printf("�����룺������\n"); 
	printf("����30��ػ�\n");
		scanf("%s",a);
	if(strcmp(a,"������")==0)
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
	}
	return 0;
 } 
