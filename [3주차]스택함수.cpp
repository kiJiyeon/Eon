#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>
int main (void)
{
	int num;
	int i;
	int stack[10]; //push���� �Է¹��� �� �����ϴ� ����

	printf("==========�޴�==========");

	printf("PUSH : 1\n");
	printf("POP  : 2\n");
	printf("SHOW : 3\n");
	printf("(�����Ϸ��� 1,2,3 �̿��� ���� �Է�)\n\n\n");

	while (1) //�޴� �Է¹ޱ�
	{
		i = 0;
		printf("�޴��� �����ϼ��� : ");
		scanf("%d", &num);
			i++;
			if (num != 1 || num != 2 || num != 3)  //�޴��� 1,2,3�̿��� ���� ��������
			{
				break;
			}
	}
	

}