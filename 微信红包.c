#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(void)
{
	while(1)
	{
		int i,j,total;
		float min = 0.01;
		float max = 0;
		float sum = 0;
		float money = 0;
		float AllMoney [5000];
		float num, avg;
		
		printf("请输入红包数量：");
		while( scanf ( "%d", &total ) !=1 || total<1 || total > 5000 )
		{
			printf("输入的红包数量过大或过小啦！重新输入：");
			fflush(stdin);
		}
		
		
		printf("请输入红包金额：");
		scanf("%f", &num);
		
		srand((unsigned)time(NULL));
		
		for(i=1; i<total; i++)
		{
			avg = num / ( total - i + 1 );
			money = avg * 2;
			
			AllMoney[i] = (rand()%(int)(money*100)+(int)min*100 ) / 100.0 + min;
			num = num - AllMoney [i];
			sum = sum + AllMoney[i];
			
			printf("\t师兄领到第%d个红包,金额为：%0.2f元\n", i, AllMoney[i]);
			
			if( AllMoney[i] > max )
			{
				max = AllMoney[i];
				j = i;
			}
		}
		
		AllMoney[i] = num;
		printf("\t师兄领到第%d个红包,金额为：%0.2f元\n\n",i, AllMoney[i]);
		
		if(num > max)
		printf("\t第%d个大大的同学是吸金王,抢到了%0.2f元红包,哈哈哈,要请客喔.\n\n",total,num);
		else
		printf("\t第%d个大大的同学是吸金王,抢到了%0.2f元红包,哈哈哈,要请客喔.\n\n",j,max);
		
		system("pause");
		system("cls");
	}
	return 0;
}
