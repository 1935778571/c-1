#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3   //提前定义SIZE 有助于以后修改
struct stu
{
    char name[20];  //姓名
    int number;     //学号
    int cla;        //班级
    double score[3];   //分数【数学，英语，计算机】
    double average;    //平均分
}stu[SIZE];

void menu();        //主菜单
void write();       //输入学生信息
void search();      //查询学生信息主菜单函数【按学号和姓名】
void search_num();  //利用学号查询
void search_name(); //利用姓名查询
void modify();      //修改学生信息
void desc();       //按数学分和计算机分排序
void tree_score_info();//显示三科成绩的平均分，最高分，最低分，及格率
void stuinfo();         //显示学生信息

//-------------------------------主函数------------------------------
int main()
{
    system("color 2E");
	printf("正在进去系统中load......\n");
	Sleep(2000);
	menu();
    int i;
	Sleep(1000);	//睡眠函数
	while(1)
	{
        scanf("%d",&i);
		switch(i)		//主菜单选择函数
		{
		case 1:
				system("CLS");		//清屏函数
				printf("\t\t----------输入学生信息-----------\n");
				write();
				int choice;
				scanf("%d",&choice);
				if(choice==0)
					break;
		case 2:
				system("CLS");
				printf("\t\t----------查询学生信息-----------\n");
				search();
				int end;
				scanf("%d",&end);
				if(end==0)
					break;
		case 3:
				system("CLS");
				printf("\t\t----------修改学生信息------------\n");
				modify();
				int a;
				scanf("%d",&a);
				if(a==0)
					break;
		case 4:
				system("CLS");
				printf("\t\t----------查看数学分和计算机排序----------\n");
				desc();
                int b;
				scanf("%d",&b);
				if(b==0)
					break;
		case 5:
				system("CLS");
				printf("\t\t-----------显示三科成绩的平均分，最高分，最低分，及格率---------\n");
				tree_score_info();
				int c;
				scanf("%d",&c);
				if(c==0)
					break;
		case 6:
				system("CLS");
				printf("\t\t\t----------查看学生信息----------\n");
				stuinfo();
				int d;
				scanf("%d",&d);
				if(d==0)
					break;
		case 7:
				system("CLS");
				system("color 6C");
				printf("\t\t****************⊙-⊙*************\n");
                Sleep(1000);
				printf("谢谢大佬的使用，送你个皮卡丘\n");
				Sleep(1000);
				printf("    /＼7　　　 ∠＿/        \n");
				Sleep(1000);
				printf("　 /　│　　 ／　／         \n");
				Sleep(1000);
                printf("  ｜　Z ＿,＜　／　　 /`ヽ  \n");
				Sleep(1000);
				printf("  ｜           '     /    > \n");
				Sleep(1000);
                printf("  　 Y　　　　　`　 /　　/  \n");
				Sleep(1000);
				printf(" （  ●   ●    '. <    /   \n");
				Sleep(1000);
                printf("  ()　 へ　　　　|　＼ <    \n");
				Sleep(1000);
                printf("  　>? ?_　 ィ　 │ ／／    \n");
				Sleep(1000);
                printf("　 / へ　　 /　?＜| ＼＼    \n");
				Sleep(1000);
                printf("   ヽ_?　　(_／　 │／／    \n");
				Sleep(1000);
                printf("  　7　　　　　　　|／      \n");
				Sleep(1000);
                printf(" 　　＞―r￣￣`?―＿        \n");
                exit(-1);
				break;
		}
		system("PAUSE");
	}
	return 0;
}

//-----------------------------主菜单函数----------------------------
void menu( )
{
    printf("\t\t-------------------------------------------------\n");
    printf("\n\t\t\t请选择对应的数字来实现其功能\n\n");
    printf("\t\t-------------------------------------------------\n");
    printf("\t\t1,输入学生信息\n");
    Sleep(500);
    printf("\t\t2,查询学生信息\n");
    Sleep(500);
    printf("\t\t3,修改学生信息\n");
    Sleep(500);
    printf("\t\t4,查看计算机分和数学分排行榜\n");
    Sleep(500);
    printf("\t\t5,查询三科的平均分，最高分，最低分，及格率\n");
    Sleep(500);
    printf("\t\t6,显示学生信息\n");
    Sleep(500);
	printf("\t\t7,末尾小彩段\n");
	Sleep(500);
    printf("\t\t0,退出系统\n");
    printf("\t\t-------------------------------------------------\n");



}
//-----------------------------输入学生信息函数----------------------
void write()
{
    int i;      //计数单位
    for(i=0;i<SIZE;i++)
    {
        printf("姓名：");
        scanf("%s",&stu[i].name);
        printf("学号：");
        scanf("%d",&stu[i].number);
        printf("班级：");
        scanf("%d",&stu[i].cla);
        printf("高数分数：");
        scanf("%c",&stu[i].score[0]);
        printf("英语分数：");
        scanf("%c",&stu[i].score[1]);
        printf("计算机分数：");
        scanf("%c",&stu[i].score[2]);
        stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;//计算平均分
        printf("平均分：%c\n",stu[i].average);
    }
}
//-----------------------------查询学生信息--------------------------
void search()
{
	system("color 3E");
    int select ;
    printf("\n\t**************<请选择查询方式>*****************\n");
    printf("\n\t\t\t1.学号查询 \n");
    printf("\n\t\t\t2.姓名查询 \n");
    printf("\n\t*****************<(*^__^*)>*****************\n");

    while(!0)
    {
        scanf("%d",&select);
        switch(select)
        {
//--------------------------------------------用学号查询学生信息------------------------------------------------
        case 1:														
            system("CLS");
            system("color 3C");
	int i,k;
	char l;
	printf("请输入需要查询的学号：");
	scanf("%d",&l);
	getchar();
	for(i=0;i<SIZE;i++)
		if(stu[i].number==l)
		{
			k=i;
			stu[k].average=(stu[k].score[0]+stu[k].score[1]+stu[k].score[2])/3;
			printf("查询结果学员信息为：\n");
			printf("\t\t姓名\t\t学号\t\t班级\t\t数学\t英语\t计算机\t\t平均分\n");
			printf("\t\t%s\t\t%d\t\t%d\t\t%d\t%d\t%d\t\t%d",stu[k].name,stu[k].number,stu[k].cla,stu[k].score[0],stu[k].score[1],stu[k].score[2],stu[k].average);
		}
	   else
			printf("查无此人！！！╮(￣▽ ￣)╭\n");
	   Sleep(2000);
		printf("\n\n\n\n\n退出界面，请按'n'，(给你这个胆，你敢按吗？.........\n......\n......\n.....\n....\n...\n..\n.\n你会后悔的  坏人～(　TロT)σ) \n");	
		if(getchar()=='n')
			{
            break;
			}
//---------------------------------------------用姓名查询学生信息---------------------------------------------------------
        case 2:													
			system("CLS");
			system("color 2B");

			printf("请输入需要查询的学生姓名：");
			scanf("%s",&l);
			getchar();
			for(i=0;i<SIZE;i++)
				if(stu[i].name[20]==l)
		{
			k=i;
			printf("查询结果学员信息为：\n");
			printf("\t\t姓名\t\t学号\t\t班级\t\t数学\t英语\t计算机\t\t平均分\n");
			printf("\t\t%s\t\t%d\t\t%d\t\t%d\t%d\t%d\t\t%d",stu[k].name,stu[k].number,stu[k].cla,stu[k].score[0],stu[k].score[1],stu[k].score[2],stu[k].average);
		}
		else
			printf("此人还没出生！！！囧 囧 囧\n");
		Sleep(2000);
		printf("\n\n\n\n\n不要按'n',不要抛弃我┗( T﹏T )┛\n");
		if(getchar()=='n')
			break;
		}
	}
}
//----------------------------------------修改学生信息---------------------------------------------
void modify()
{
	printf("\t\t*********修改菜单***********\n");
	printf("\n1.修改姓名\n");
	printf("\t2.修改学号\n");
	printf("\t\t3.修改班级\n");
	printf("\t\t\t4.修改数学成绩\n");
	printf("\t\t\t\t5.修改英语成绩\n");
	printf("\t\t\t\t\t6.修改计算机成绩\n");
	int i;
	char l;
	printf("\n\n\t|||请输入需要修改的学员：");
	scanf("%s",&l);
	for(i=0;i<SIZE;i++)
		if(stu[i].name[20]==l)
		{
			while(!0)
			{
				int j,k,q,w,e,c;
				char *h;
				k=i;
				switch(getchar())
				{
				case 1:
					printf("修改该学生的姓名：");
					scanf("%s",&h);
					strcpy(stu[k].name,h);
					if(getchar()=='n')
					break;
				case 2:
					printf("\t\t2.修改学号\n");
					scanf("%d",&j);
					stu[k].number=j;
					if(getchar()=='n')
					break;
				case 3:
					printf("\t\t3.修改班级\n");
					scanf("%d",&q);
					stu[k].cla=q;
					if(getchar()=='n')
					break;
				case 4:
					printf("修改数学成绩\n");
					scanf("%d",&w);
					stu[k].score[0]=w;
					if(getchar()=='n')
					break;
				case 5:
					printf("修改英语成绩\n");
					scanf("%d",&e);
					stu[k].score[1]=e;
					if(getchar()=='n')
					break;
				case 6:
					printf("修改计算机成绩\n");
					scanf("%d",&c);
					stu[k].score[2]=c;
					if(getchar()=='n')
					break;
				else
					printf("查无此人!!!");
				}
			}
		}
}
//-------------------------------------------分别按平均分和计算机降序排名---------------------------------------------
void desc()
{


	printf("先战歌空");
}
//-------------------------------------------各科平均成绩，最高分，最低分，及格率-------------------------------------
void tree_score_info()
{
	printf("先战歌空");
}
//---------------------------------------------学生信息表--------------------------------------------------------------
void stuinfo()
{
	system("color 0F");
	int i;
	printf("\t\t┌─────────────────────────────┐\n");
	printf("\t\t│                      学生信息表                          │\n");
	printf("\t\t├────┬──────┬───┬──┬──┬───┬───┤\n");
	printf("\t\t│  姓名  │    学号    │ 班级 │数学│英语│计算机│平均分│\n");
	printf("\t\t├────┼──────┼───┼──┼──┼───┼───┤\n");
		for(i=0;i<SIZE;i++)
		{
			printf("\t\t│   %s   │     %d     │  %d  │ %d │ %d │  %d  │  %d  │\n",stu[i].name,stu[i].number,stu[i].cla,stu[i].score[0],stu[i].score[1],stu[i].score[2],(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3);
			printf("\t\t├────┼──────┼───┼──┼──┼───┼───┤\n");
		}
			printf("\t\t└────┴──────┴───┴──┴──┴───┴───┘\n");
}
