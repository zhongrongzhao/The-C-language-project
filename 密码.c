#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main(void)
{
	char a[50][50]={"######",
					"#0 #  ",
                    "# ## #",
                    "#  # #",
                    "##   #",
                    "######",
					};
    int i,x,y,p,q;
    char ch;
    printf("请输入密码：");
    x=1; y=1; p=1; q=5;
    for(i=0;i<=5;i++)
	/*
	i = 0;
	while(i <= 5)
	{
		i++;
	}
	*/
    //puts(a[i]);
	while(x!=p || y!=q)
    {
		ch=getchar();
       if(ch == 's')
       {
       if(a[x][y]!='#')
		{
        a[x][y]=' ';
        x++;
        a[x][y]='0';
        }       
       }
		if(ch=='w')
        {
			if(a[x-1][y]!='#')
			{
				a[x][y]=' ';
            x--;
            a[x][y]='0';
            }
       }
       if(ch=='a')
        {
			if(a[x][y-1]!='#')
			{
				a[x][y]=' ';
            y--;
            a[x][y]='0';
            }
       }
       if(ch=='d')
        {
			if(a[x][y+1]!='#')
			{
				a[x][y]=' ';
            y++;
            a[x][y]='0';
            }
       }
       system("cls");
       for(i=0;i<=5;i++)
		puts(a[i]);
}
    system("cls");
   system("cd ..bat");
	printf("you win!\n");
	system("pause");
	return 0;
}
