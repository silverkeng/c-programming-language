// 2022.09.22, 29 (2 days study)
// 사용 한 함수 if else break continue switch

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	//버스를 탄다고 가정, 학생 / 일반인으로 구분 (일반인 : 20세)
	/*int age = 25;
	if (age >= 20)
		printf("일반인 입니다.\n");
	else
		printf("학생입니다.\n");*/

	// 초등학생 8 - 13, 중학생 14 - 16, 고등학생 17 - 19으로 나누면?
	// if, else if , else

	//int age;
	//printf("당신은 몇살 인가요? \n");
	//scanf_s("%d", &age);
	//if (age >= 8 && age <= 13)
	//{
	//	printf("초등학생 입니다\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생 입니다.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생 입니다.\n");
	//}
	//else
	//{
	//	printf("학생이 아니군요!\n");
	//}

	// break / contiunue
	// 1번부터 30번 까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요 \n", i);
	}*/
	// 1번부터 30번 까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번 부터 10번까지 조별 발표를 하세요
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d번 학생은 결석입니다.\n", i);
	//			continue;
	//		}
	//		printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
	//	}
	//	
	//}

	// && ||
	/*int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;

	if (a == b || c == d)
	{
		printf("a 와 b 혹은 c 와 d 의 값이 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}*/

	//가위 0, 바위 1, 보 2
	//srand(time(NULL));
	//int i = rand() % 3; //0 ~ 2 반환 
	//printf("%d 를 컴퓨터가 골랐습니다.\n", i);

	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("몰라요\n");
	//}


	////스위치 case
	//
	//srand(time(NULL));
	//int i = rand() % 3; //0 ~ 2 반환 
	//printf("%d 를 컴퓨터가 골랐습니다.\n", i);

	//switch (i)
	//{
	//case 0:printf("가위\n"); break;
	//case 1:printf("바위\n"); break;
	//case 2:printf("보\n"); break;
	//default:printf("몰라요\n"); break;
	//}


	//나이에 따른 신분을 스위치 케이스로 변경해보기

	/*	int age = 9;
		switch (age)
		{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:printf("초등학생 입니다\n"); break;
		case 14:
		case 15:
		case 16:printf("중학생 입니다.\n"); break;
		case 17:
		case 18:
		case 19:printf("고등학생 입니다.\n"); break;
		default:printf("학생이 아니군요!\n"); break;
		}*/

	//프로젝트 Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100
	printf("뽑힌 숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0)
	{
		printf("남은 기회는 %d 번 입니다.\n", chance--);
		printf("숫자를 맞혀 보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("%d 보다 DOWN ↓ \n\n", answer);
		}
		else if (answer < num)
		{
			printf("%d 보다 UP ↑ \n\n", answer);
		}
		else if (answer = num)
		{
			printf("\n\n %d 번만에 맞췄습니다. \n %d 정답입니다!!!\n\n", 5 - chance ,answer);
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생 했습니다.\n\n");
		}

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨습니다. 실패!!!!!!!\n\n");
			break;
		}
	}
	return 0;
}
