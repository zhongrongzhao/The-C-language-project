#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(void)
{
	int b;
	int c;
	char a[100];
	char *hi = "hi";//1
	char *hi1 = "你好";
	char *IloveYou ="我爱你";//2
	char *IloveYou1 ="我很爱你";
	char *IloveYou2 ="你爱我吗";
	char *IloveYou3 ="你有多爱我啊";
	char *IloveYou4 ="你有多爱我";
	char *IMissYou ="我想你啊";//3
	char *IMissYou1 ="我很想你啊";//4
	char *IMissYou2="我想你";//5
	char *Whatlike="你喜欢什么";//6
	char *Whatlike1="不想猜";
	char *zhongzi="种子";
	char *gushi="讲个故事给我听";
	char *guanji="关机";
	char *guanji1="请关机";
	char *guanji2="帮我关机";
	char *chongqi="重启";
	char *chongqi1="请重启";
	char *chongqi2="帮我重启";
	char *makelove="做爱";//做爱
	char *makelove1="我们做爱";
	char *makelove2="我们做爱好吗";
	char *makelove3="我们做爱做的事情";
	char *game="游戏";
	char *game1="剪刀";
	char *game2="石头";
	char *game3="布";
	char *name="你叫什么名字";
	char *age="你几岁了";
	char *age1="你几岁";
	char *age2="你今年几岁啊";
	char *age3="你今年几岁呀";
	char *tall="你多高";
	char *tall1="你今年多高";
	char *tall2="你今年多高啊";
	char *tall3="你多高啊";

 a:
	printf("我说：");
	scanf("%s",&a);

	if (strcmp(a, IloveYou3) == 0 || strcmp(a, IloveYou4) == 0 )//1
	{
		printf("女友：怎么突然问这个问题啊？你知道答案的(*^__^*)\n");
	}
	
	if (strcmp(a, tall ) == 0 || strcmp(a, tall1 ) == 0 || strcmp(a, tall2 ) == 0 ||  strcmp(a, tall3 ) == 0 )//1
	{
		printf("女友：我刚好比你矮10厘米，我们是不是很配啊，萌萌哒^^\n");
	}

	if (strcmp(a, age) == 0 ||  strcmp(a, age1) == 0 || strcmp(a, age2) == 0  ||  strcmp(a, age3) == 0 )//1
	{
		printf("女友：比你小一岁\n");
	}

	if (strcmp(a, name) == 0 )//1
	{
		printf("女友：我叫Maymay,很高兴认识你\n");
	}
	
	if (strcmp(a, hi) == 0 || strcmp(a, hi1) == 0)//1
	{
		printf("女友：hi\n");
	}

		if (strcmp(a, IloveYou) == 0)//2
	{
		printf("女友：亲^v^!我也爱你\n");
	}

	if (strcmp(a, IloveYou1) == 0)
	{
		printf("女友：亲^v^!我也很爱你\n");
	}

	if (strcmp(a, IloveYou2) == 0)
	{
		printf("女友：我当然爱你啦！傻瓜\n");
	}

	if (strcmp(a,IMissYou) == 0)//3
	{
		printf("女友：我也好想你啊！\n");
	}

	if (strcmp(a,IMissYou1) == 0)//4
	{
		printf("女友：我也好想你啊！\n");
	}
	
	if (strcmp(a,IMissYou2) == 0)//5
	{
		printf("女友：我也好想你啊！\n");
	}
	
	if (strcmp(a,Whatlike) == 0)//6
	{
		printf("女友：你猜猜>.<\n");
	}

		if (strcmp(a,Whatlike1) == 0)//6
	{
		printf("女友：那好吧！我喜欢你\n");
	}
			
		if (strcmp(a,zhongzi) == 0)//6
	{
		printf("女友：你好坏啊，不理你了。。。自己百度找吧\n");
		system("start https://www.baidu.com/");
	}
			
		if (strcmp(a,gushi) == 0)//6
	{
		printf("女友：从前有座山，山里有座庙，庙里有个老和尚给小和尚讲故事.，讲的什么呢？从前有座山，山里有座庙，庙里有个老和尚给小和尚讲故事……\n");
	}

		if (strcmp(a,guanji) == 0)
	{
		printf("女友：886~_~立刻关机\n");
		system("shutdown -s -t 00");
	}
		
		if (strcmp(a,guanji1) == 0)
	{
		printf("女友：886~_~立刻关机\n");
		system("shutdown -s -t 00");
	}

		if (strcmp(a,guanji2) == 0)
	{
		printf("女友：886~_~立刻关机\n");
		system("shutdown -s -t 00");
	}

		if (strcmp(a,chongqi) == 0)
	{
		printf("女友：等会再见立刻重启\n");
		system("shutdown -r -t 00");
	}

		if (strcmp(a,chongqi1) == 0)
	{
		printf("女友：等会再见立刻重启\n");
		system("shutdown -r -t 00");
	}

		if (strcmp(a,chongqi2) == 0)
	{
		printf("女友：等会再见立刻重启\n");
		system("shutdown -r -t 00");
	}

		if (strcmp(a,makelove) == 0)
	{
		printf("女友：你好坏啊\n");
	}

		if (strcmp(a,makelove1) == 0)
	{
		printf("女友：你好坏啊\n");
	}

		if (strcmp(a,makelove2) == 0)
	{
		printf("女友：你好坏啊\n");
	}
		
		if (strcmp(a,makelove3) == 0)
	{
		printf("女友：你好坏啊\n");
	}

		if  (strcmp(a,game) == 0)
	{
		printf("女友：我们来个剪刀石头布吧^^\n输了怎样罚？\n");
		printf("1.关机       2.重启       \n3.亲我一下   4.我们做羞羞的事情\n你选择的是：");
		scanf("%d",&b);
		if(b==1)
			{
				printf("\n女友：游戏规则：输入（剪刀，石头，布）其中一个，然后按确定\n我说：");
				scanf("%s",&a);
					if(strcmp(a,game1) != 0)
					{
						if(strcmp(a,game2) == 0)
						  {
							printf("女友：剪刀\n你赢了\n");
					       }
						
					     else
						   {
							printf("女友：剪刀\n你输了\n接受惩罚吧！！！");
							system("shutdown -s -t 00");
						  }
					}
				   if(strcmp(a,game1) == 0)
						 {
							printf("女友：剪刀\n女友：我们平了\n女友：这次放过你！下次你没那好彩了,不玩了\n");
					      }
			}
		if(b==2)
			{
				printf("\n女友：游戏规则：输入（剪刀，石头，布）其中一个，然后按确定\n我说：");
				scanf("%s",&a);
					if(strcmp(a,game3) != 0)
					{
						if(strcmp(a,game1) == 0)
						  {
							printf("女友：布\n你赢了\n");
					       }
						
					     else
						   {
							printf("女友：布\n你输了\n");
							system("shutdown -r -t 00");
						  }
					}
				   if(strcmp(a,game3) == 0)
						 {
							printf("女友：布\n女友：我们平了\n这次放过你！下次你没那么好彩了，不玩了\n");
					      }
			}
		if(b==3)
			{
				printf("\n女友：游戏规则：输入（剪刀，石头，布）其中一个，然后按确定\n我说：");
				scanf("%s",&a);
					if(strcmp(a,game2) != 0)
					{
						if(strcmp(a,game3) == 0)
						  {
							printf("女友：石头\n女友：你赢了\n");
					       }
						
					     else
						   {
							   printf("女友：石头\n女友：你输了\n\n亲我一下>.<\n选择：\n1.亲我一下    2.才不亲你呢\n我说：");
							   scanf("%d",&c);
							   if(c==1)
							   {
								   printf("女友：死鬼^^算你吧\n");
							   }
							   if(c==2)
							   {
								   printf("女友：臭不要脸，愿赌不服输\n");
							   }
						  }
					}
				   if(strcmp(a,game2) == 0)
						 {
							printf("女友：石头\n女友：我们平了\n这次放过你！下次没那么好彩了");
					      }
			}
		if(b==4)
		{
			printf("女友：你这个老司机\n");
		}
	}
		

	goto a;
	system("pause");
	return 0;
}
