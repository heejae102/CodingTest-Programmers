#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*

�� ���� ������ ��

���� ����
�� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

���� ����
a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
a�� b�� -10,000,000 �̻� 10,000,000 ������ �����Դϴ�.
a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.

����� ��
a	b	return
3	5	12
3	3	3
5	3	12

*/

long long solution(int a, int b)
{
	long long sum = 0;

	if (a > b)
	{
		int temp = b;
		b = a;
		a = temp;
	}

	//a�� b�� ���� ��� �ѹ� ����Ǹ鼭 �� ��� ���� ���ϹǷ� �� ��� ���� ���� 
	for (int i = a; i <= b; i++)
	{
		sum += i;
	}

	return sum;
}

//long long solution(int a, int b)
//{
//	long long sum = 0;
//	int min = 0, max = 0;
//
//	if (a == b)
//	{
//		sum = a;
//		return sum;
//	}
//
//	if (a > b)
//	{
//		max = a;
//		min = b;
//	}
//	else if (a < b)
//	{
//		max = b;
//		min = a;
//	}
//
//	for (int i = min; i <= max; i++)
//	{
//		sum += i;
//	}
//
//	return sum;
//}