#include "game.h"
int easybossHP = 10000;
int hardbossHP = 100000;
int userHP = 10000;
int userMP = 2000;

void information() {
	system("cls");
	printf("\n\n\n\n");
	printf("				  	  [조작법]\n\n\n");
	printf("					이동 : W,A,S,D \n\n");
	printf("			 		선택 : 스페이스바 \n\n\n\n\n");
	printf("					개발자 : 유인철\n\n");
	printf("		   	   스페이스바를 누르면 메인화면으로 돌아갑니다.");
	while(1) {
		if(key() == choice) break;
	} 
}

int key() {
	char kb = _getch();
	if(kb == 'w' || kb == 'W') return UP;
	else if(kb == 'a' || kb == 'A') return LEFT;
	else if(kb == 's' || kb == 'S') return DOWN;
	else if(kb == 'd' || kb == 'D') return RIGHT;
	else if(kb == ' ') return choice;
}

void title() {
	printf("\n\n\n\n\n\n");
	printf("                         _                                  _            _     \n");
	printf("                        | |                                | |          | |    \n");
	printf("                      __| |   ___     __ _    ___    __ _  | |_    ___  | |__  \n");
	printf("                     / _` |  / _ \    / _` |  / __|  / _` | | __|  / __| | `_ \ \n");
	printf("                    | (_| | | (_) | | (_| | | (__  | (_| | | |_  | (__  | | | |\n");
	printf("                      \__,_|   \___/    \__, |   \___|   \__,_|   \__|   \___| |_| |_|\n");
	printf("                                      __/ |                                    \n");
	printf("                                     |___/     \n");
} 

int menu() {
	int x = 42 , y = 23;
	xy(x-3,y);
	printf("-> 게임시작");
	xy(x,y+1);
	printf("게임설명");
	xy(x,y+2);
	printf("게임종료");
	while(1) {
		int k = key();
		switch(k) {
			case UP : {
				if(y>23) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<25) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : {
				return y-23;
			}
		}
	}
}

int map() {
	int x = 40;
	int y = 20;
	system("cls");
	printf("\n\n\n\n");
	printf("					난이도 선택 \n\n\n");
	xy(x-3,y);
	printf("-> 쉬움");
	xy(x,y+1);
	printf("어려움");
	xy(x,y+2);
	printf("메인화면으로");
	while(1) {
		int k = key();
		switch (k) {
			case UP : {
				if(y>20) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<22) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : return y-20;
		}
	} 
}

int userchoice() {
	int x = 82;
	int y = 33; 
	system("cls");
	bossmap(0);
	xy(x-3,y);
	printf("-> 공격");
	xy(x,y+1);
	printf("방어"); 
	xy(x,y+2);
	printf("스킬");
	xy(x,y+3);
	printf("가방");
	while(1) {
		int k = key();
		switch(k) {
			case UP : {
				if(y>33) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<36) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : return y-33;
		}
	}
}

int buserchoice() {
	int x = 82;
	int y = 33; 
	system("cls");
	bossmap(1);
	xy(x-3,y);
	printf("-> 공격");
	xy(x,y+1);
	printf("방어"); 
	xy(x,y+2);
	printf("스킬");
	xy(x,y+3);
	printf("가방");
	while(1) {
		int k = key();
		switch(k) {
			case UP : {
				if(y>33) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<36) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : return y-33;
		}
	}
}

int userattack() {
	int i = rand()%5;
	int damage = 300 , critialdamage = 700; 
	system("cls");
	bossmap(0);
	if (i == 5) {
		xy(20,35);
		printf("유저 크리티컬!! : %d",critialdamage);
		return(critialdamage);
	}
	else {
		xy(20,35);
		printf("유저 기본 공격 : %d",damage);
		return(damage);
	}
}

int buserattack() {
	int i = rand()%5;
	int damage = 300 , critialdamage = 700; 
	system("cls");
	bossmap(1);
	if (i == 5) {
		xy(20,35);
		printf("유저 크리티컬!! : %d",critialdamage);
		return(critialdamage);
	}
	else {
		xy(20,35);
		printf("유저 기본 공격 : %d",damage);
		return(damage);
	}
}

int defense() {
	system("cls");
	bossmap(0);
	int i = rand()%5;
	if (i == 4) {
		xy(20,35);
		printf("보스 크리 방어! : %d",150);
		return(150);
	}
	else {
		xy(20,35);
		printf("보스 공격 방어! : %d",50);
		return(50);
	}
}

int bdefense() {
	system("cls");
	bossmap(1);
	int i = rand()%5;
	if (i == 4) {
		xy(20,35);
		printf("보스 크리 방어! : %d",200);
		return(150);
	}
	else {
		xy(20,35);
		printf("보스 공격 방어! : %d",100);
		return(50);
	}
}

int bossattack() {
	system("cls");
	bossmap(0);
	int i = rand()%5;
	if(i == 4) {
		xy(20,35);
		printf("보스 크리티컬!! : %d",300);
		return(300);
	}
	else {
		xy(20,35);
		printf("보스 기본 공격 : %d",100);
		return(100);
	}
}

int bbossattack() {
	system("cls");
	bossmap(1);
	int i = rand()%5;
	if(i == 4) {
		xy(20,35);
		printf("보스 크리티컬!! : %d",500);
		return(500);
	}
	else {
		xy(20,35);
		printf("보스 기본 공격 : %d",250);
		return(250);
	}
}

int bag() {
	int x = 80 , y = 35;
	system("cls");
	bossmap(0);
	xy(x-3,y);
	printf("-> HP물약");
	xy(x,y+1);
	printf("MP물약");
	while(1) {
		int k = key();
		switch(k) {
			case UP : {
				if(y>35) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<36) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : return y-35;
		}
	}
}

int bbag() {
	int x = 80 , y = 35;
	system("cls");
	bossmap(1);
	xy(x-3,y);
	printf("-> HP물약");
	xy(x,y+1);
	printf("MP물약");
	while(1) {
		int k = key();
		switch(k) {
			case UP : {
				if(y>35) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<36) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : return y-35;
		}
	}
}

int skill() {
	int x= 80 , y = 35;
	system("cls");
	bossmap(0);
	xy(x-3,y);
	printf("-> 방천격");
	xy(x,y+1);
	printf("고대의 창");
	xy(x,y+2);
	printf("절실한 구원");
	while(1) {
		int k = key();
		switch(k) {
			case UP : {
				if(y>35) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<37) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : return y-35;
		}
	}
}

int bskill() {
	int x= 80 , y = 35;
	system("cls");
	bossmap(1);
	xy(x-3,y);
	printf("-> 방천격");
	xy(x,y+1);
	printf("고대의 창");
	xy(x,y+2);
	printf("절실한 구원");
	while(1) {
		int k = key();
		switch(k) {
			case UP : {
				if(y>35) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,--y);
					printf("->");
				}
				break;
			}
			case DOWN : {
				if(y<37) {
					xy(x-3,y);
					printf("  ");
					xy(x-3,++y);
					printf("->");
				}
				break;
			}
			case choice : return y-35;
		}
	}
}

int easy() {
	int ba = 0 , ua = 0, df = 0, f = 0, s = 0, h = 0, b = 0, over = 0;
	while(1) {
		if (easybossHP<=0) break;
		if (userHP<=0) break;
		int uc = userchoice();
		
		switch (uc) {
			case 0 : {
				ua = userattack();
				sleep(2);
				easybossHP = easybossHP - ua;
				ba = bossattack();
				sleep(2);
				userHP = userHP - ba;
				break;
			}
			case 1 : {
				df = defense();
				sleep(2);
				userHP = userHP - df;
				break;
			}
			case 2 : {
				int sk = skill();
				switch (sk) {
					case 0 : {
						if (userMP >=200) {
							f = foot();
							sleep(2);
							easybossHP = easybossHP - f;
							ba = bossattack();
							sleep(2);
							userHP = userHP - ba;
							userMP = userMP - 200;
							break;
						}
						else {
							stop();
							break;
						}
					}
					case 1 : {
						if(userMP>=300) {
							s = spear();
							sleep(2);
							easybossHP = easybossHP - s;
							ba = bossattack();
							sleep(2);
							userHP = userHP - ba;
							userMP = userMP - 300;
							break;
						}
						else {
							stop();
							break;
						}
					}
					case 2 : {
						if(userMP>=100) {
							h = heal();
							sleep(2);
							ba = bossattack();
							sleep(2);
							userHP = userHP + h;
							userHP = userHP - ba;
							userMP = userMP - 100;
							break;
						}
						else {
							stop();
							break;
						}
					}
				} 
				break;
			}
			case 3 : {
				int p = bag();
				if (p == 0) {
					if (userHP >= 10000) {
						stop();
						break;
					}
					else{
						system("cls");
						bossmap(0);
						userHP = userHP + 300; 
						if (userHP <= 10000) {
							xy(20,35);
							printf("HP가 300 회복 되었습니다.");
							sleep(2);
							ba = bossattack();
							sleep(2);
							userHP = userHP - ba;
							break;
						}
						else {
							over = userHP - 10000;
							xy(20,35);
							printf("HP가 %d 회복 되었습니다.", 300 - over);
							sleep(2);
							userHP = userHP - over;
							ba = bossattack();
							sleep(2);
							userHP = userHP - ba;
							break;
						}
					}
				}
				else {
					if(userMP >= 2000) {
						stop();
						break;
					}
					else {
						system("cls");
						bossmap(0);
						xy(20,35);
						printf("MP가 200 회복 되었습니다.");
						sleep(2); 
						userMP = userMP + 200; 
						ba = bossattack();
						sleep(2);
						userHP = userHP - ba;
						break;
					}
				}
			} 
		}
		count++;
	}
	if (easybossHP<=0) return 1;
	if (userHP<=0) return 2;
}

int stop(){
	system("cls");
	bossmap(0);
	xy(20,35);
	printf("사용할 수 없습니다.");
	sleep(2);
	return 0; 
}

int bstop(){
	system("cls");
	bossmap(1);
	xy(20,35);
	printf("사용할 수 없습니다.");
	sleep(2);
	return 0; 
}

int foot() {
	int i = rand()%5;
	system("cls");
	bossmap(0);
	if (i == 3) {
		xy(20,35);
		printf("방천격 크리티컬!! 데미지 : %d",1000);
		return 1000;
	}
	else {
		xy(20,35);
		printf("방천격! 데미지 : %d",500);
		return 500;
	}
}

int bfoot() {
	int i = rand()%5;
	system("cls");
	bossmap(1);
	if (i == 3) {
		xy(20,35);
		printf("방천격 크리티컬!! 데미지 : %d",1000);
		return 1000;
	}
	else {
		xy(20,35);
		printf("방천격! 데미지 : %d",500);
		return 500;
	}
}

int spear() {
	int i = rand()%5;
	system("cls");
	bossmap(0);
	if (i==2) {
		xy(20,35);
		printf("고대의 창 크리티컬!! 데미지 : %d",1500);
		return 1500;
	}
	else {
		xy(20,35);
		printf("고대의 창! 데미지 : %d",300);
		return 300;
	}
}

int bspear() {
	int i = rand()%5;
	system("cls");
	bossmap(1);
	if (i==2) {
		xy(20,35);
		printf("고대의 창 크리티컬!! 데미지 : %d",1500);
		return 1500;
	}
	else {
		xy(20,35);
		printf("고대의 창! 데미지 : %d",300);
		return 300;
	}
}

int heal() {
	int easyover = 0 , bus = 0;
	system("cls");
	bossmap(0);
	if (userHP + 400 >= 10000) {
		easyover = userHP + 400 - 10000;
		bus = 400 - easyover;
		xy(20,35);
		printf("절실한 구원! 체력회복 : %d", bus);
		return(bus);
	}
	else {
		xy(20,35);
		printf("절실한 구원! 체력회복 : %d",400);
		return 400;
	}
}

int bheal() {
	int hardover = 0, bus = 0;
	system("cls");
	bossmap(1);
	if (userHP + 400 >= 10000) {
		hardover = userHP + 400 - 10000;
		bus = 400 - hardover;
		xy(20,35);
		printf("절실한 구원! 체력회복 : %d",bus);
		return(bus);
	}
	else {
		xy(20,35);
		printf("절실한 구원! 체력회복 : %d",400);
		return 400;
	}
}

int bossmap(int j) {
	if (j == 0) {
		printf("\n");
		printf("                                 .:=::\n");
		printf("                                .=*%%%#%@@@+...                      보스HP : %d/10000\n",easybossHP);
		printf("                            :+#%#*+++*@@@@@@%#%#=\n");
		printf("                         *@@@@@@%@@@@@@@@@##**+@#:      .+:=\n");
		printf("                       .%@@@@@@@@@@@@@@@@+*@*+=:==       :. ::\n");
		printf("                       %#%+.%@@@@%%@@@@@..**=.   .=       :: .=\n");
		printf("                       +%@@=+*#%@*:@@@*:%@@++     +        =.  =\n");
		printf("                       .+++++===:::..:#@@@. +..   +         =  .=\n");
		printf("                          ..:=..+=  .@@@@@@%+*:.::  .=+++++===. +.\n");
		printf("                             =.=. =@@@@@@@@*+===:.+%%##*======::::.\n");
		printf("                              .  #@%@@@@@@+.=:..::::::::::::::.=:  .\n");
		printf("                                :+:%%%@@%* ....=..   .   .....=...::.\n");
		printf("                              .=#@@@@*  :... =   =+*+:.     ..  **+:..\n");
		printf("                              ::@%#%%+: +. ..:.  =  .... =+  :.  +*+:\n");
		printf("                             .:.=@@@@@@%:....:.  .:. .    %# .+ :%*+=\n");
		printf("                            ..::.:=+**=:::::::+ .:=:..     @:.*+@##**\n");
		printf("                            .::=+::+***+::=:::*+.*%.::.    *:=*@@%#*#. .\n");
		printf("                             :::@%*@@@@@@%*+===*%@@=:::.   =***= =%##:.:.\n");
		printf("                             :::@@@#=*#%@@@@@**#%%*:=::....        *@@+..\n");
		printf("                              #%=*=         .++==%# :+%+.         **@#=:%:\n");
		printf("                            .=@ .*@*        ==:+::..=@=..+=       +*=:= =.\n");
		printf("                            ..  .+#+        =+++=:::=#...*#       =+::=...\n");
		printf("                          .::::::=++        =+++=::......         :====:....\n");
		printf("                         ......:==+=         =%#*+==:::.           =====.....\n");
		printf("                             .:==++          @@@@:..:..  .         .*%#%#*:.:.\n");
		printf("                        *@%*=.:=++.            .: ....  ....        #@@@@@@+.\n");
		printf("                       +@@@@@@#+=.              =***=.  ...           .+**.\n");
		printf("                          .++=.                 #@@@@@%+:.\n");
		printf("                                                +++#@@%+.\n");
		printf("\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ"); 
		xy(20,32);
		printf("유저 HP : %d / 10000",userHP);
		xy(20,33);
		printf("유저 MP : %d / 2000",userMP);
		return 0;
	}
	else if (j == 1) {
		printf("\n");
		printf("                                 .:=::\n");
		printf("                                .=*%%%#%@@@+...                      보스HP : ???????/???????\n");
		printf("                            :+#%#*+++*@@@@@@%#%#=\n");
		printf("                         *@@@@@@%@@@@@@@@@##**+@#:      .+:=\n");
		printf("                       .%@@@@@@@@@@@@@@@@+*@*+=:==       :. ::\n");
		printf("                       %#%+.%@@@@%%@@@@@..**=.   .=       :: .=\n");
		printf("                       +%@@=+*#%@*:@@@*:%@@++     +        =.  =\n");
		printf("                       .+++++===:::..:#@@@. +..   +         =  .=\n");
		printf("                          ..:=..+=  .@@@@@@%+*:.::  .=+++++===. +.\n");
		printf("                             =.=. =@@@@@@@@*+===:.+%%##*======::::.\n");
		printf("                              .  #@%@@@@@@+.=:..::::::::::::::.=:  .\n");
		printf("                                :+:%%%@@%* ....=..   .   .....=...::.\n");
		printf("                              .=#@@@@*  :... =   =+*+:.     ..  **+:..\n");
		printf("                              ::@%#%%+: +. ..:.  =  .... =+  :.  +*+:\n");
		printf("                             .:.=@@@@@@%:....:.  .:. .    %# .+ :%*+=\n");
		printf("                            ..::.:=+**=:::::::+ .:=:..     @:.*+@##**\n");
		printf("                            .::=+::+***+::=:::*+.*%.::.    *:=*@@%#*#. .\n");
		printf("                             :::@%*@@@@@@%*+===*%@@=:::.   =***= =%##:.:.\n");
		printf("                             :::@@@#=*#%@@@@@**#%%*:=::....        *@@+..\n");
		printf("                              #%=*=         .++==%# :+%+.         **@#=:%:\n");
		printf("                            .=@ .*@*        ==:+::..=@=..+=       +*=:= =.\n");
		printf("                            ..  .+#+        =+++=:::=#...*#       =+::=...\n");
		printf("                          .::::::=++        =+++=::......         :====:....\n");
		printf("                         ......:==+=         =%#*+==:::.           =====.....\n");
		printf("                             .:==++          @@@@:..:..  .         .*%#%#*:.:.\n");
		printf("                        *@%*=.:=++.            .: ....  ....        #@@@@@@+.\n");
		printf("                       +@@@@@@#+=.              =***=.  ...           .+**.\n");
		printf("                          .++=.                 #@@@@@%+:.\n");
		printf("                                                +++#@@%+.\n");
		printf("\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ"); 
		xy(20,32);
		printf("유저 HP : %d / 10000",userHP);
		xy(20,33);
		printf("유저 MP : %d / 2000",userMP);
		return 0;
	}
}

int hard() {
	int ba = 0 , ua = 0, df = 0, f = 0, s = 0, h = 0, b = 0, over = 0;
	while(1) {
		if (hardbossHP<=0) break;
		if (userHP<=0) break;
		int uc = buserchoice();
		switch (uc) {
			case 0 : {
				ua = buserattack();
				sleep(2);
				hardbossHP = hardbossHP - ua;
				ba = bbossattack();
				sleep(2);
				userHP = userHP - ba;
				break;
			}
			case 1 : {
				df = bdefense();
				sleep(2);
				userHP = userHP - df;
				break;
			}
			case 2 : {
				int sk = bskill();
				switch (sk) {
					case 0 : {
						if (userMP >=200) {
							f = bfoot();
							sleep(2);
							hardbossHP = hardbossHP - f;
							ba = bbossattack();
							sleep(2);
							userHP = userHP - ba;
							userMP = userMP - 200;
							break;
						}
						else {
							bstop();
							break;
						}
					}
					case 1 : {
						if(userMP>=300) {
							s = bspear();
							sleep(2);
							hardbossHP = hardbossHP - s;
							ba = bbossattack();
							sleep(2);
							userHP = userHP - ba;
							userMP = userMP - 300;
							break;
						}
						else {
							bstop();
							break;
						}
					}
					case 2 : {
						if(userMP>=100) {
							h = bheal();
							sleep(2);
							ba = bbossattack();
							sleep(2);
							userHP = userHP - ba;
							userHP = userHP + h;
							userMP = userMP - 100;
							break;
						}
						else {
							bstop();
							break;
						}
					}
				} 
				break;
			}
			case 3 : {
				int p = bbag();
				if (p == 0) {
					if (userHP >= 10000) {
						bstop();
						break;
					}
					else{
						system("cls");
						bossmap(1);
						userHP = userHP + 300;
						if (userHP <= 10000) {
							xy(20,35);
							printf("HP가 300 회복 되었습니다.");
							sleep(2);
							ba = bbossattack();
							sleep(2);
							userHP = userHP - ba;
							break;
						}
						else {
							over = userHP - 10000;
							xy(20,35);
							printf("HP가 %d 회복 되었습니다.",300 - over);
							sleep(2);
							userHP = userHP - over;
							ba = bbossattack();
							sleep(2);
							userHP = userHP - ba;
							break;
						}
					}
				}
				else {
					if(userMP >= 2000) {
						bstop();
						break;
					}
					else {
						system("cls");
						bossmap(1);
						xy(20,35);
						printf("MP가 200 회복 되었습니다.");
						sleep(2); 
						ba = bbossattack();
						sleep(2);
						userHP = userHP - ba;
						userMP = userMP + 200; 
						break;
					}
				}
			} 
		}
		count++;
	}
	if (hardbossHP<=0) return 1;
	if (userHP<=0) return 2;
}
