#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int w;
void game()
{
		int a,e;
		a=rand()%200+1;
		e=a;
	
	while(1)
	{
	
	scanf("%d",&w);
	if(a>w)
	{
		printf("����С��\n"); 
	}
	if(a<w)
	{
		printf("���ִ���\n"); 
	}
	if(a==w)
	{
		printf("С���Ӳ���Ŷ\n"); 
		break;
	}
	}	
}
void menu()
{
	char a[]="#######################",b[]="#1.��ʼ��Ϸ��0.�˳���Ϸ#",c[]="#######################";
	printf("%s\n%s\n%s\n",a,b,c);
    	printf("��ѡ��\n");
}

int main()
{
	
	int q;
	srand((unsigned int)time(NULL));
	do
    {
    	menu();	
    	scanf("%d",&q);
   	  if(q==1)
    	{
    		printf("������һ������0С��200����\n");
   		 game();
		}
		if(q==0)
		{
			break;
		}
		if(q!=0&&q!=1)
		{
			printf("���������� 0 or 1 ѡ��˵�\n");
		}
	}
	while(1);

	
	return 0;
}
