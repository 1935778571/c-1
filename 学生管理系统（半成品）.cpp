#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3   //��ǰ����SIZE �������Ժ��޸�
struct stu
{
    char name[20];  //����
    int number;     //ѧ��
    int cla;        //�༶
    double score[3];   //��������ѧ��Ӣ��������
    double average;    //ƽ����
}stu[SIZE];

void menu();        //���˵�
void write();       //����ѧ����Ϣ
void search();      //��ѯѧ����Ϣ���˵���������ѧ�ź�������
void search_num();  //����ѧ�Ų�ѯ
void search_name(); //����������ѯ
void modify();      //�޸�ѧ����Ϣ
void desc();       //����ѧ�ֺͼ����������
void tree_score_info();//��ʾ���Ƴɼ���ƽ���֣���߷֣���ͷ֣�������
void stuinfo();         //��ʾѧ����Ϣ

//-------------------------------������------------------------------
int main()
{
    system("color 2E");
	printf("���ڽ�ȥϵͳ��load......\n");
	Sleep(2000);
	menu();
    int i;
	Sleep(1000);	//˯�ߺ���
	while(1)
	{
        scanf("%d",&i);
		switch(i)		//���˵�ѡ����
		{
		case 1:
				system("CLS");		//��������
				printf("\t\t----------����ѧ����Ϣ-----------\n");
				write();
				int choice;
				scanf("%d",&choice);
				if(choice==0)
					break;
		case 2:
				system("CLS");
				printf("\t\t----------��ѯѧ����Ϣ-----------\n");
				search();
				int end;
				scanf("%d",&end);
				if(end==0)
					break;
		case 3:
				system("CLS");
				printf("\t\t----------�޸�ѧ����Ϣ------------\n");
				modify();
				int a;
				scanf("%d",&a);
				if(a==0)
					break;
		case 4:
				system("CLS");
				printf("\t\t----------�鿴��ѧ�ֺͼ��������----------\n");
				desc();
                int b;
				scanf("%d",&b);
				if(b==0)
					break;
		case 5:
				system("CLS");
				printf("\t\t-----------��ʾ���Ƴɼ���ƽ���֣���߷֣���ͷ֣�������---------\n");
				tree_score_info();
				int c;
				scanf("%d",&c);
				if(c==0)
					break;
		case 6:
				system("CLS");
				printf("\t\t\t----------�鿴ѧ����Ϣ----------\n");
				stuinfo();
				int d;
				scanf("%d",&d);
				if(d==0)
					break;
		case 7:
				system("CLS");
				system("color 6C");
				printf("\t\t****************��-��*************\n");
                Sleep(1000);
				printf("лл���е�ʹ�ã������Ƥ����\n");
				Sleep(1000);
				printf("    /��7������ �ϣ�/        \n");
				Sleep(1000);
				printf("�� /�������� ������         \n");
				Sleep(1000);
                printf("  ����Z ��,���������� /`�c  \n");
				Sleep(1000);
				printf("  ��           '     /    > \n");
				Sleep(1000);
                printf("  �� Y����������`�� /����/  \n");
				Sleep(1000);
				printf(" ��  ��   ��    '. <    /   \n");
				Sleep(1000);
                printf("  ()�� �ء�������|���� <    \n");
				Sleep(1000);
                printf("  ��>? ?_�� ���� �� ����    \n");
				Sleep(1000);
                printf("�� / �ء��� /��?��| �ܣ�    \n");
				Sleep(1000);
                printf("   �c_?����(_���� ������    \n");
				Sleep(1000);
                printf("  ��7��������������|��      \n");
				Sleep(1000);
                printf(" �������Dr����`?�D��        \n");
                exit(-1);
				break;
		}
		system("PAUSE");
	}
	return 0;
}

//-----------------------------���˵�����----------------------------
void menu( )
{
    printf("\t\t-------------------------------------------------\n");
    printf("\n\t\t\t��ѡ���Ӧ��������ʵ���书��\n\n");
    printf("\t\t-------------------------------------------------\n");
    printf("\t\t1,����ѧ����Ϣ\n");
    Sleep(500);
    printf("\t\t2,��ѯѧ����Ϣ\n");
    Sleep(500);
    printf("\t\t3,�޸�ѧ����Ϣ\n");
    Sleep(500);
    printf("\t\t4,�鿴������ֺ���ѧ�����а�\n");
    Sleep(500);
    printf("\t\t5,��ѯ���Ƶ�ƽ���֣���߷֣���ͷ֣�������\n");
    Sleep(500);
    printf("\t\t6,��ʾѧ����Ϣ\n");
    Sleep(500);
	printf("\t\t7,ĩβС�ʶ�\n");
	Sleep(500);
    printf("\t\t0,�˳�ϵͳ\n");
    printf("\t\t-------------------------------------------------\n");



}
//-----------------------------����ѧ����Ϣ����----------------------
void write()
{
    int i;      //������λ
    for(i=0;i<SIZE;i++)
    {
        printf("������");
        scanf("%s",&stu[i].name);
        printf("ѧ�ţ�");
        scanf("%d",&stu[i].number);
        printf("�༶��");
        scanf("%d",&stu[i].cla);
        printf("����������");
        scanf("%c",&stu[i].score[0]);
        printf("Ӣ�������");
        scanf("%c",&stu[i].score[1]);
        printf("�����������");
        scanf("%c",&stu[i].score[2]);
        stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;//����ƽ����
        printf("ƽ���֣�%c\n",stu[i].average);
    }
}
//-----------------------------��ѯѧ����Ϣ--------------------------
void search()
{
	system("color 3E");
    int select ;
    printf("\n\t**************<��ѡ���ѯ��ʽ>*****************\n");
    printf("\n\t\t\t1.ѧ�Ų�ѯ \n");
    printf("\n\t\t\t2.������ѯ \n");
    printf("\n\t*****************<(*^__^*)>*****************\n");

    while(!0)
    {
        scanf("%d",&select);
        switch(select)
        {
//--------------------------------------------��ѧ�Ų�ѯѧ����Ϣ------------------------------------------------
        case 1:														
            system("CLS");
            system("color 3C");
	int i,k;
	char l;
	printf("��������Ҫ��ѯ��ѧ�ţ�");
	scanf("%d",&l);
	getchar();
	for(i=0;i<SIZE;i++)
		if(stu[i].number==l)
		{
			k=i;
			stu[k].average=(stu[k].score[0]+stu[k].score[1]+stu[k].score[2])/3;
			printf("��ѯ���ѧԱ��ϢΪ��\n");
			printf("\t\t����\t\tѧ��\t\t�༶\t\t��ѧ\tӢ��\t�����\t\tƽ����\n");
			printf("\t\t%s\t\t%d\t\t%d\t\t%d\t%d\t%d\t\t%d",stu[k].name,stu[k].number,stu[k].cla,stu[k].score[0],stu[k].score[1],stu[k].score[2],stu[k].average);
		}
	   else
			printf("���޴��ˣ������r(���� ��)�q\n");
	   Sleep(2000);
		printf("\n\n\n\n\n�˳����棬�밴'n'��(�������������Ұ���.........\n......\n......\n.....\n....\n...\n..\n.\n����ڵ�  ���ˡ�(��T��T)��) \n");	
		if(getchar()=='n')
			{
            break;
			}
//---------------------------------------------��������ѯѧ����Ϣ---------------------------------------------------------
        case 2:													
			system("CLS");
			system("color 2B");

			printf("��������Ҫ��ѯ��ѧ��������");
			scanf("%s",&l);
			getchar();
			for(i=0;i<SIZE;i++)
				if(stu[i].name[20]==l)
		{
			k=i;
			printf("��ѯ���ѧԱ��ϢΪ��\n");
			printf("\t\t����\t\tѧ��\t\t�༶\t\t��ѧ\tӢ��\t�����\t\tƽ����\n");
			printf("\t\t%s\t\t%d\t\t%d\t\t%d\t%d\t%d\t\t%d",stu[k].name,stu[k].number,stu[k].cla,stu[k].score[0],stu[k].score[1],stu[k].score[2],stu[k].average);
		}
		else
			printf("���˻�û������������ �� ��\n");
		Sleep(2000);
		printf("\n\n\n\n\n��Ҫ��'n',��Ҫ�����ҩ�( T�nT )��\n");
		if(getchar()=='n')
			break;
		}
	}
}
//----------------------------------------�޸�ѧ����Ϣ---------------------------------------------
void modify()
{
	printf("\t\t*********�޸Ĳ˵�***********\n");
	printf("\n1.�޸�����\n");
	printf("\t2.�޸�ѧ��\n");
	printf("\t\t3.�޸İ༶\n");
	printf("\t\t\t4.�޸���ѧ�ɼ�\n");
	printf("\t\t\t\t5.�޸�Ӣ��ɼ�\n");
	printf("\t\t\t\t\t6.�޸ļ�����ɼ�\n");
	int i;
	char l;
	printf("\n\n\t|||��������Ҫ�޸ĵ�ѧԱ��");
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
					printf("�޸ĸ�ѧ����������");
					scanf("%s",&h);
					strcpy(stu[k].name,h);
					if(getchar()=='n')
					break;
				case 2:
					printf("\t\t2.�޸�ѧ��\n");
					scanf("%d",&j);
					stu[k].number=j;
					if(getchar()=='n')
					break;
				case 3:
					printf("\t\t3.�޸İ༶\n");
					scanf("%d",&q);
					stu[k].cla=q;
					if(getchar()=='n')
					break;
				case 4:
					printf("�޸���ѧ�ɼ�\n");
					scanf("%d",&w);
					stu[k].score[0]=w;
					if(getchar()=='n')
					break;
				case 5:
					printf("�޸�Ӣ��ɼ�\n");
					scanf("%d",&e);
					stu[k].score[1]=e;
					if(getchar()=='n')
					break;
				case 6:
					printf("�޸ļ�����ɼ�\n");
					scanf("%d",&c);
					stu[k].score[2]=c;
					if(getchar()=='n')
					break;
				else
					printf("���޴���!!!");
				}
			}
		}
}
//-------------------------------------------�ֱ�ƽ���ֺͼ������������---------------------------------------------
void desc()
{


	printf("��ս���");
}
//-------------------------------------------����ƽ���ɼ�����߷֣���ͷ֣�������-------------------------------------
void tree_score_info()
{
	printf("��ս���");
}
//---------------------------------------------ѧ����Ϣ��--------------------------------------------------------------
void stuinfo()
{
	system("color 0F");
	int i;
	printf("\t\t��������������������������������������������������������������\n");
	printf("\t\t��                      ѧ����Ϣ��                          ��\n");
	printf("\t\t�����������Щ������������Щ������Щ����Щ����Щ������Щ�������\n");
	printf("\t\t��  ����  ��    ѧ��    �� �༶ ����ѧ��Ӣ�辶�������ƽ���֩�\n");
	printf("\t\t�����������੤�����������੤�����੤���੤���੤�����੤������\n");
		for(i=0;i<SIZE;i++)
		{
			printf("\t\t��   %s   ��     %d     ��  %d  �� %d �� %d ��  %d  ��  %d  ��\n",stu[i].name,stu[i].number,stu[i].cla,stu[i].score[0],stu[i].score[1],stu[i].score[2],(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3);
			printf("\t\t�����������੤�����������੤�����੤���੤���੤�����੤������\n");
		}
			printf("\t\t�����������ة������������ة������ة����ة����ة������ة�������\n");
}
