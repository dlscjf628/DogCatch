#include "system.h"

void display() {  // 게임 창 화면 + 깜박이는 커서 없애기 
	system("mode con cols=100 lines=40 | title dogcatch");
	
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle , &ConsoleCursor);
}



void xy(int x, int y) {  // 커서 위치 이동 
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle,pos); 
} 
