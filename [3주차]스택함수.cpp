#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>
int main (void)
{
	int num;
	int i;
	int stack[10]; //push에서 입력받은 수 저장하는 변수

	printf("==========메뉴==========");

	printf("PUSH : 1\n");
	printf("POP  : 2\n");
	printf("SHOW : 3\n");
	printf("(종료하려면 1,2,3 이외의 숫자 입력)\n\n\n");

	while (1) //메뉴 입력받기
	{
		i = 0;
		printf("메뉴를 선택하세요 : ");
		scanf("%d", &num);
			i++;
			if (num != 1 || num != 2 || num != 3)  //메뉴가 1,2,3이외의 수면 빠져나옴
			{
				break;
			}
	}
	

}