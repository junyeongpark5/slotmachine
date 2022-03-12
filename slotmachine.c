#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int seedmoney; //배팅금액
	int s1, s2, s3; // 슬롯머신에 나오는 숫자
	int retry;
	srand((unsigned)time(NULL));

	
		printf("\n게임설명");
		printf("\n숫자 3개가 모두 7이 나오면 배팅금액의 4배");
		printf("\n숫자 3개가 모두 같으면 배팅금액의 3배");
		printf("\n숫자 2개가 7이 나오면 배팅금액의 2배");
		printf("\n그 외는 모두 꽝");
		printf("\n");
		printf("\n");

     while (1) {

		printf("\n ┌-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┐");
		printf("\n ㅣ         ■배팅금액을 입력해주세요         ㅣ");
		printf("\n ㅣ        (최소금액은 10000원 입니다)        ㅣ");
		printf("\n └-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┘");
		printf("\n\n●입력해주세요 : ");

		scanf("%d", &seedmoney);

		if (seedmoney < 10000) {
			printf("\n ┌-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┐");
			printf("\n ㅣ      ■배팅금액을 다시 입력해주세요       ㅣ");
			printf("\n ㅣ                                           ㅣ");
			printf("\n └-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┘");
			printf("\n\n●입력해주세요 : ");

			scanf("%d", &seedmoney);
		}
		
		s1 = rand() % 7 + 1;
		s2 = rand() % 7 + 1;
		s3 = rand() % 7 + 1;

		printf("\n ┌-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┐");
		printf("\n ㅣ                %d %d %d                   ㅣ", s1, s2, s3);
		printf("\n ㅣ                                           ㅣ");
		printf("\n └-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-┘");


		if (s1 == 7 && s2 == 7 && s3 == 7) {
			seedmoney *= 4;
			printf("\n%d", seedmoney);
		}
		else if (s1 == s2 && s1== s3) {
			seedmoney *= 3;
			printf("\n%d", seedmoney);
		}
		else if ((s1 == s2 && s1 == 7 && s1 != s3) || (s1 == s3 && s1 == 7 && s1 != s2) || (s2 == s3 && s2 == 7 && s1 != s2) ) {
			seedmoney *= 2;
			printf("\n%d", seedmoney);
		}
		else {
			seedmoney *= 0;
			printf("\n\n ●돈을 다 잃으셨습니다\n");
			printf("\n ★[GAME OVER]★\n");
		}
		

		if (seedmoney == 0 || seedmoney != 0) {
			printf("\n게임을 다시 하시겠습니까?\n");
			printf("다시 시작하시려면 1을 종료하시려면 0을 입력해주세요.\n");
			printf("\n\n●입력해주세요 : ");

			while (1) {
				
				scanf("%d", &retry);

				if (retry == 1) {
					break;
				}
				else if (retry == 0) {
					printf("게임이 종료되었습니다.");
					break;
				}
				else {
					printf("\n\n다시입력해주세요. : ");
				}
			}

			if (retry == 0) {
				break;
			}

		}
	}
	 return 0;
}
