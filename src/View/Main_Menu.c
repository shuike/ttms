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
		printf("**************** Theater Ticket Management System ****************\n");
		printf("[S]tudio Management.�ݳ�������\n");
		printf("[P]lay Management.�ݳ�����\n");
		printf("[T]icket Sale.����Ʊ\n");
		printf("[R]eturn Ticket.��Ʊ\n");
		printf("[Q]ueries��ѯ\n");
		printf("Ra[n]king and Statistics.ͳ��\n");
		printf("[A]ccount Management.�˻�����\n");
		printf("[E]xist.\n");
		printf("\n==================================================================\n");
		printf("Please input your choice:");
		fflush(stdin);
		choice = getchar();
		switch (choice) {
		case 'S':
		case 's':
			Studio_UI_MgtEntry();
			break;
//		case 'P':
//		case 'p':
//			Play_UI_MgtEntry(0);//
//			break;
//		case 'Q':
//		case 'q':
//			Queries_Menu();//����
//			break;
//		case 'T':
//		case 't':
//			Sale_UI_MgtEntry();//����
//			break;
//		case 'R':
//		case 'r':
//			Sale_UI_ReturnTicket();//
//			break;
//		case 'N':
//		case 'n':
//			SalesAanalysis_UI_MgtEntry();
//			break;
//		case 'A':
//		case 'a':
//			Account_UI_MgtEntry();
//			break;
		}
	} while ('E' != choice && 'e' != choice);
}

