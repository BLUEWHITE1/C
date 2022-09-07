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
		printf("数字小了\n"); 
	}
	if(a<w)
	{
		printf("数字大了\n"); 
	}
	if(a==w)
	{
		printf("小伙子不错哦\n"); 
		break;
	}
	}	
}
void menu()
{
	char a[]="#######################",b[]="#1.开始游戏；0.退出游戏#",c[]="#######################";
	printf("%s\n%s\n%s\n",a,b,c);
    	printf("请选择\n");
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
    		printf("请输入一个大于0小于200的数\n");
   		 game();
		}
		if(q==0)
		{
			break;
		}
		if(q!=0&&q!=1)
		{
			printf("请输入数字 0 or 1 选择菜单\n");
		}
	}
	while(1);

	
	return 0;
}
