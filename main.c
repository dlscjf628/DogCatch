#include "main.h"

extern int count;

int main() {
	display();
	while(1) {
		title();
		int mc = menu();
		if(mc==0) {
			int n = map();
			if (n == 0) {
				system("cls");
				int ea = easy();
				if(ea == 1) {
					system("cls");
					xy(35,12);
					printf("Ŭ����!! ���ϵ帳�ϴ�.\n");
					xy(35,13);
					printf("����� �ϼ� = %d",count);
					xy(35,14);
					printf("5���Ŀ� �����մϴ�.");
					printf("\n\n\n\n\n\n\n\n\n");
					sleep(5);
					break;
				}
				if(ea == 2) {
					system("cls");
					xy(35,12);
					printf("Ŭ��� �����߽��ϴ�.\n");
					xy(35,13);
					printf("����� �ϼ� = %d",count);
					xy(35,14);
					printf("5���Ŀ� �����մϴ�.");
					printf("\n\n\n\n\n\n\n\n\n");
					sleep(5);
					break;
				}
			}
			else if (n == 1) {
				printf("����� ����");
				system("cls");
				int ha = hard(); 
				if (ha == 1) {
					system("cls");
					xy(35,12);
					printf("Ŭ����!! ���ϵ帳�ϴ�.\n");
					xy(35,13);
					printf("����� �ϼ� = %d",count);
					xy(35,14);
					printf("5���Ŀ� �����մϴ�.");
					printf("\n\n\n\n\n\n\n\n\n");
					sleep(5);
					break;
				}
				if(ha == 2) {
					system("cls");
					xy(35,12);
					printf("Ŭ��� �����߽��ϴ�.\n");
					xy(35,13);
					printf("����� �ϼ� = %d",count);
					xy(35,14);
					printf("5���Ŀ� �����մϴ�.");
					printf("\n\n\n\n\n\n\n\n\n");
					sleep(5);
					break;
				}
			}
		}
		else if(mc==1) {
			information();
		} 
		else if(mc == 2) {
			return 0;
		}
		system("cls"); 
	}
	
	return 0;
}

