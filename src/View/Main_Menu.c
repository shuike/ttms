/*
* Copyright(C), 2007-2008, XUPT Univ.	 
* File name: Main_Menu.c			 	 
* Description : TTMS 系统主菜单	
* Author:   XUPT  		 
* Version:  v.1 	 
* Da
*/

#include "../View/Main_Menu.h"

#include <stdio.h>

#include "../View/Studio_UI.h"

//系统主菜单 
void Main_Menu(void) {
	char choice;
	do { 
		printf("\n==================================================================\n");
		printf("**************** 剧院票务管理系统 ****************\n");
		printf("[S]演出厅管理.\n");     /*管理演出厅，设置座位，管理剧目*/
		printf("[P]演出管理.\n");       /*安排演出，生成演出票*/
		printf("[T]售票.\n");
		printf("[R]退票.\n");
		printf("[Q]查询\n");            /*查演出，查演出票*/
		printf("[n]排名和统计.\n");     /*统计销售额，统计票房*/
		printf("[A]账户管理.\n");       /*个人资料，管理系统用户*/
		printf("[E]退出.\n");
		printf("\n==================================================================\n");
		printf("请输入您的选择:");
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
