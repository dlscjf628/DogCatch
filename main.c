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
					printf("클리어!! 축하드립니다.\n");
					xy(35,13);
					printf("사용한 턴수 = %d",count);
					xy(35,14);
					printf("5초후에 종료합니다.");
					printf("\n\n\n\n\n\n\n\n\n");
					sleep(5);
					break;
				}
				if(ea == 2) {
					system("cls");
					xy(35,12);
					printf("클리어에 실패했습니다.\n");
					xy(35,13);
					printf("사용한 턴수 = %d",count);
					xy(35,14);
					printf("5초후에 종료합니다.");
					printf("\n\n\n\n\n\n\n\n\n");
					sleep(5);
					break;
				}
			}
			else if (n == 1) {
				printf("어려움 선택");
				system("cls");
				int ha = hard(); 
				if (ha == 1) {
					system("cls");
					xy(35,12);
					printf("클리어!! 축하드립니다.\n");
					xy(35,13);
					printf("사용한 턴수 = %d",count);
					xy(35,14);
					printf("5초후에 종료합니다.");
					printf("\n\n\n\n\n\n\n\n\n");
					sleep(5);
					break;
				}
				if(ha == 2) {
					system("cls");
					xy(35,12);
					printf("클리어에 실패했습니다.\n");
					xy(35,13);
					printf("사용한 턴수 = %d",count);
					xy(35,14);
					printf("5초후에 종료합니다.");
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

