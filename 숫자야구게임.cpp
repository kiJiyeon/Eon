#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i = 0, j = 0;
	int secret[3]; // ����

	int save_num[3]; // ����� �Է� ��� ����
int strike = 0, ball = 0; // ��Ʈ����ũ �� ����
	int count; // �õ� Ƚ��
	

void main() {
	

	char yn;
	srand((unsigned int)time(NULL));

	while (1) {
		count = 0;
		setRand(&secret); // ���� ���� �Լ�
		
		while (1) {
			printf("���� �Է��ϼ���(3�ڸ���, ���� ���� �ߺ� �ȵ�) : ");
			for (int i = 0;i < 3;i++) {
				scanf("%d", &save_num);
			}
			(StrikeBall(&save_num,&secret) // strikeBall �Լ��� 3�� ��ȯ�ϸ� ���� ����
			count++;
		}
		printf("%d������ ���� \n �ѹ���?", count);
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
			if (secret[a] == save_num[b]) // �迭�� �� �´� ��� (���ھ߱����� ���õ� ���ڰ� �� �ִ� ���)
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