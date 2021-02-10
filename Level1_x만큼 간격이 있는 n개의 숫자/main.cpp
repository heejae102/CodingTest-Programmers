#include<iostream>
#include<vector>
using namespace std; 

/*

x��ŭ ������ �ִ� n���� ����

���� ����
�Լ� solution�� ���� x�� �ڿ��� n�� �Է� �޾�, 
x���� ������ x�� �����ϴ� ���ڸ� n�� ���ϴ� ����Ʈ�� �����ؾ� �մϴ�. 
���� ���� ������ ����, ������ �����ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
x�� -10000000 �̻�, 10000000 ������ �����Դϴ�.
n�� 1000 ������ �ڿ����Դϴ�.

����� ��
x		n		answer
2		5		[2,4,6,8,10]
4		3		[4,8,12]
-4		2		[-4, -8]

*/

// ������ Ǯ�� 
vector<long long> solution(int x, int n)
{
	// x�� ���� ���� n���� ���ҷ� �ʱ�ȭ 
	vector<long long> answer(n, x);

	// 0�� �ε����� ���� ������ �ʿ䰡 �����Ƿ� �ǳʶٰ�, 
	// 1�� �ε������ʹ� ���� �ε��� ���� �����ָ� �ȴ�. 
	for (int i = 1; i < n; i++)
	{
		answer[i] += answer[i - 1];
	}

	return answer;
}

// ������ Ǯ�� 
vector<long long> solution(int x, int n)
{
	vector<long long> answer;
	long long element = x;

	while (n--)
	{
		answer.push_back(element);
		element += x;
	}

	return answer;
}

int main()
{
	return 0; 
}