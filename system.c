#include "system.h"

void display() {  // ���� â ȭ�� + �����̴� Ŀ�� ���ֱ� 
	system("mode con cols=100 lines=40 | title dogcatch");
	
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle , &ConsoleCursor);
}



void xy(int x, int y) {  // Ŀ�� ��ġ �̵� 
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle,pos); 
} 
