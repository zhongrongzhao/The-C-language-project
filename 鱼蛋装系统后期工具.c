#include <stdio.h>
#include <stdlib.h>
#define WIDTH 120;
#define WIDTH2 20;
void fishball (void);
void zhongrongzhao (void);
int main (void)
{
	int a;
ComeBanck:
	printf("\n                                                     钟荣钊工作室1.0\n\n                                                      2017年2月14日\n                                                    情人节那天的发泄\n\n");
	zhongrongzhao();
	fishball();
	printf("                                                1...........查看激活情况 \n                                                2...........设置开机启动项\n                                                3...........换logo\n                                                4...........查IP地址\n                                                5...........win7强行去密码\n                                                6...........停止系统自动重启\n");
	printf("                                                7...........设置系统时间\n                                                999.........秒掉C:盘(慎重!!!!!真的是KO！不得后悔，没自动备份)\n\n");
	fishball();
	printf("请输入编号：");
	scanf("%d",&a);
	if (a==1)//1
	{
		system("slmgr.vbs -dlv ");
		system("slmgr.vbs -dli ");
		system("slmgr.vbs -xpr");
		printf("检查完毕\n");
		system("cls");
		goto ComeBanck;
	}
	
	if (a==2)//2
   {
	  system("start  msconfig");//失败
	  system("cls");
	  goto ComeBanck;
	}
	
	if(a==3)//3
	{
		system("md c:\\Setting");
		system("copy I:\\Mysetting c:\\Setting");
		system("copy E:\\Mysetting c:\\Setting");
		system("copy F:\\Mysetting c:\\Setting");
		system("copy G:\\Mysetting c:\\Setting");
		system("copy H:\\Mysetting c:\\Setting");
		system("copy J:\\Mysetting c:\\Setting");
		system("copy K:\\Mysetting c:\\Setting");
		system("copy L:\\Mysetting c:\\Setting");
	    system("regedit");
		system("cls");
		printf("\n\n打开这地址： HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OEMInformation\n           并创建一个字符串值\n");
	    zhongrongzhao();
		system("cls");
		goto ComeBanck;
		system("cls");
	}
	
	if(a==4)//4
	{
		system("ipconfig -all");
		zhongrongzhao();
		system("pause");
		system("cls");
		goto ComeBanck;
	}
	
	if(a==5)//5
	{
		system("net user AIbertWin7 """);
		zhongrongzhao();
		system("pause");
		system("cls");
		goto ComeBanck;
	}

	if(a==6)//6
	{
		system("shutdown -a");
		system("pause");
		system("cls");
		goto ComeBanck;
	}

	if(a==7)
	{
		system("DATE ");
		system("pause");
		system("cls");
		goto ComeBanck;
	}

	if(a==999)
	{
		system("format c://q//u");///q快速格式化/u选用参数，表示无条件格式化，即破坏原来磁盘上所有数据,不加/U，则为安全格式化，这时先建立一个镜象文件保存原来的FAT表和根目录，必要时可用UNFORRMAT恢复原来的数据。
	    system("pause");
	}
	return 0;
}
	
void fishball (void)
	{
		int count;
		for (count=1; count <= WIDTH count++)
		putchar ('*');
		putchar('\n');
	}
	
void zhongrongzhao(void)
	{
		int count;
		for (count=1; count <= WIDTH2 count++)
		printf("钟荣钊");
	}
