/*
* Copyright(C), 2007-2008, XUPT Univ.	 
* File name: Main_Menu.c			 	 
* Description : TTMS ϵͳ���˵�	
* Author:   XUPT  		 
* Version:  v.1 	 
* Da
*/

#include "../View/Main_Menu.h"

#include <stdio.h>

#include "../View/Studio_UI.h"

//ϵͳ���˵� 
void Main_Menu(void) {
	char choice;
	do { 
		printf("\n==================================================================\n");
		printf("**************** ��ԺƱ�����ϵͳ ****************\n");
		printf("[S]�ݳ�������.\n");     /*�����ݳ�����������λ�������Ŀ*/
		printf("[P]�ݳ�����.\n");       /*�����ݳ��������ݳ�Ʊ*/
		printf("[T]��Ʊ.\n");
		printf("[R]��Ʊ.\n");
		printf("[Q]��ѯ\n");            /*���ݳ������ݳ�Ʊ*/
		printf("[n]������ͳ��.\n");     /*ͳ�����۶ͳ��Ʊ��*/
		printf("[A]�˻�����.\n");       /*�������ϣ�����ϵͳ�û�*/
		printf("[E]�˳�.\n");
		printf("\n==================================================================\n");
		printf("����������ѡ��:");
		fflush(stdin);
		choice = getchar();
		switch (choice) {
		case 'S':
		case 's':
			Studio_UI_MgtEntry();
			break;
/*		case 'P':
		case 'p':
			Play_UI_MgtEntry(0);
			break;
		case 'Q':
		case 'q':
			Queries_Menu();
			break;
		case 'T':
		case 't':
			Sale_UI_MgtEntry();
			break;
		case 'R':
		case 'r':
			Sale_UI_ReturnTicket();
			break;
		case 'N':
		case 'n':
			SalesAanalysis_UI_MgtEntry();
			break;
		case 'A':
		case 'a':
			Account_UI_MgtEntry();
			break;*/
		}
	} while ('E' != choice && 'e' != choice);
}
