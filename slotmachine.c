#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int seedmoney; //���ñݾ�
	int s1, s2, s3; // ���Ըӽſ� ������ ����
	int retry;
	srand((unsigned)time(NULL));

	
		printf("\n���Ӽ���");
		printf("\n���� 3���� ��� 7�� ������ ���ñݾ��� 4��");
		printf("\n���� 3���� ��� ������ ���ñݾ��� 3��");
		printf("\n���� 2���� 7�� ������ ���ñݾ��� 2��");
		printf("\n�� �ܴ� ��� ��");
		printf("\n");
		printf("\n");

     while (1) {

		printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");
		printf("\n ��         ����ñݾ��� �Է����ּ���         ��");
		printf("\n ��        (�ּұݾ��� 10000�� �Դϴ�)        ��");
		printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");
		printf("\n\n���Է����ּ��� : ");

		scanf("%d", &seedmoney);

		if (seedmoney < 10000) {
			printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");
			printf("\n ��      ����ñݾ��� �ٽ� �Է����ּ���       ��");
			printf("\n ��                                           ��");
			printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");
			printf("\n\n���Է����ּ��� : ");

			scanf("%d", &seedmoney);
		}
		
		s1 = rand() % 7 + 1;
		s2 = rand() % 7 + 1;
		s3 = rand() % 7 + 1;

		printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");
		printf("\n ��                %d %d %d                   ��", s1, s2, s3);
		printf("\n ��                                           ��");
		printf("\n ��-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-��");


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
			printf("\n\n �ܵ��� �� �����̽��ϴ�\n");
			printf("\n ��[GAME OVER]��\n");
		}
		

		if (seedmoney == 0 || seedmoney != 0) {
			printf("\n������ �ٽ� �Ͻðڽ��ϱ�?\n");
			printf("�ٽ� �����Ͻ÷��� 1�� �����Ͻ÷��� 0�� �Է����ּ���.\n");
			printf("\n\n���Է����ּ��� : ");

			while (1) {
				
				scanf("%d", &retry);

				if (retry == 1) {
					break;
				}
				else if (retry == 0) {
					printf("������ ����Ǿ����ϴ�.");
					break;
				}
				else {
					printf("\n\n�ٽ��Է����ּ���. : ");
				}
			}

			if (retry == 0) {
				break;
			}

		}
	}
	 return 0;
}
