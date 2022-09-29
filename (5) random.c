//2022.09.29

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	//srand(time(NULL)); // 난수 초기화
	//int num = rand() % 3 + 1; // 컴퓨터에게 0부터 시작하는 3개의 경우의 수 중 1개의 숫자를 뽑아달라고 한다.

	printf("난수 초기화 이전.\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 10);
	
	srand(time(NULL));

	printf("\n\n난수 초기화 이후.\n");
	for (int i = 0; i < 10; i++)
	printf("%d ", rand() % 10);
	
	return 0;
}
