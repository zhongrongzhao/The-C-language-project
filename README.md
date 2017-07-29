## 欢迎来到钟荣钊的c语言项目主页

在这里你可以浏览我C语言项目

### 项目内容

这个仓库里面的所有项目都是一些用C语言写的小项目

```markdown
例如：
/*
*趣味俄罗斯方块
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>//接收键盘输入输出
#include <time.h>//用于获得随机数

//宏定义 
#define FrameX 13
#define FrameY 3//定义游戏窗口的X和Y轴坐标
#define Frame_height 20
#define Frame_width 18//定义游戏窗口的长和宽

//定义全局变量
int i, j, Temp, Temp1, Temp2;//Temp, Temp1, Temp2是用于记住和转换方块变量的值
int a[80][80] = {0};
int b[4];//标记4个“口 ”方块：1表示有方块 ，0表示无方块

//结构体
struct Tetris//声明俄罗斯方块的结构体 
{
	int x;			
	int y;		//中心方块的x和y轴坐标	
	int flag;	//标记方块类型的序号 
	int next;	//下一个俄罗斯方块的类型的序号 
	int speed;	//俄罗斯方块移动的速度 
	int number;	//产生俄罗斯方块的个数 
	int score;	//游戏的分数 
	int level;  //游戏的等级 
} ;
HANDLE hOut;	//控制台句柄 

//函数声明
int color(int c);						
void gotoxy(int x,int y);				//光标移动到指定位置 
void DrwaGameframe();					//绘制游戏边框 
void Flag(struct Tetris *);			//随机产生方块类型的序号 
void MakeTeris(struct Tetris *);		//制作俄罗斯方块 
void PrintTeteris(struct Tetris *);	//打印俄罗斯方块 
void CleanTeteris(struct Tetris *);	//清除俄罗斯方块的痕迹 
int ifMove(struct Tetris *);			//判断是否能移动，返回值为1时能移动，否则不能移动 
void Del_Fullline(struct Tetris *);	//判断是否满行，并删除满行的俄罗斯方块 
void Gameplay();						//开始游戏 
void regulation();						//游戏规则 
void explation();						//按键说明 
void welcome();							//欢迎界面 
void Replay(struct Tetris * tetris);	//重新开始游戏 
void title();							//欢迎界面上方的标题 
void flower();							//欢迎界面上的字符装饰花 
void close();							//关闭游戏

/* 
*设置文字颜色
*/ 
int color(int c) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); 
	//SetConsoleTextAttribute是设置控制台窗口字体颜色和背景颜色的函数 
	return 0;
 } 
 
 /* 
*设置文字显示位置
*/ 
void gotoxy(int x,int y)
{
	COORD pos;//是一个结构体变量，x和y是它的成员 ，是Windows API中定义的一种结构，表示一个字符在控制台屏幕上的坐标 
	pos.X = x;//横坐标 
	pos.Y = y;//纵坐标 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//SetConsoleCursorPosition函数用来定位光标位置 
}
 
/* 
*欢迎界面上的标题
*/
void title()
{
	color(15);
	gotoxy(24, 3);
	printf("趣 味 俄 罗 斯 方 块\n"); 
	
	color(11);
	gotoxy(18, 5); 
	printf("■");
	gotoxy(18, 6);
	printf("■■");
	gotoxy(18, 7);
	printf("■");

	color(14);
	gotoxy(26, 6); 
	printf("■■");
	gotoxy(28, 7);
	printf("■■");
	
	color(10);
	gotoxy(36, 6);
	printf("■■");
	gotoxy(36, 7);
	printf("■■");
	
	color(13);
	gotoxy(45, 5);
	printf("■");
	gotoxy(45, 6);
	printf("■");
```

详细内容： [完整代码](https://github.com/zhongrongzhao/The-C-language-project/blob/master/趣味俄罗斯方块.c).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/zhongrongzhao/The-C-language-project/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
