#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i = 0, j = 0;
	int secret[3]; // 정답

	int save_num[3]; // 사용자 입력 기록 저장
int strike = 0, ball = 0; // 스트라이크 볼 개수
	int count; // 시도 횟수
	

void main() {
	

	char yn;
	srand((unsigned int)time(NULL));

	while (1) {
		count = 0;
		setRand(&secret); // 난수 생성 함수
		
		while (1) {
			printf("수를 입력하세요(3자리수, 동일 숫자 중복 안됨) : ");
			for (int i = 0;i < 3;i++) {
				scanf("%d", &save_num);
			}
			(StrikeBall(&save_num,&secret) // strikeBall 함수가 3을 반환하면 루프 나감
			count++;
		}
		printf("%d번만에 성공 \n 한번더?", count);
		scanf("%c", &yn);
		if (yn == 'n') return;
	}

}

int setRand(int *secret)
{
	
		secret[0] = rand() % 10;
		while (1)
		{
			secret[0] = rand() % 10;
			if (secret[0] != secret[1])
				break;
		
	}
	while (1)
	{
		secret[2] = rand() % 10;
		if (secret[0] != secret[2] && secret[1] != secret[2])
			break;
	}
	return secret[3];
}

void StrikeBall(int *secret,int *save_num)
{
	for (int a = 0;a < 3;a++)
	{
		for (int b = 0;b < 3;b++)
		{
			if (secret[a] == save_num[b]) // 배열이 다 맞는 경우 (숫자야구에서 제시된 숫자가 다 있는 경우)
			{
				if (i == j)
				{
					strike++;
				}
				else if (i != j) 
					ball++;



			}
		}

	}
	printf("%d strike %d ball ", strike, ball);
}