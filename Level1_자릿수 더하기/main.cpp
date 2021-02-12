#include<iostream>
#include<string>
using namespace std; 

/*

<�ڸ��� ���ϱ�>

���� ����
�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� 
return �ϴ� solution �Լ��� ����� �ּ���.
������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.

���ѻ���
N�� ���� : 100,000,000 ������ �ڿ���

����� ��
N			answer
123			6
987			24

����� �� ����
����� �� #1
������ ���ÿ� �����ϴ�.

����� �� #2
9 + 8 + 7 = 24�̹Ƿ� 24�� return �ϸ� �˴ϴ�.

*/

// ���ο� Ǯ��1 (������ string Ÿ������ �ٲ� �� �� �ڸ����� int�� �ٲپ� ���ϱ�) 
int solution1(int n)
{
	int answer = 0;
	string str = to_string(n);

	for (int i = 0; i < str.size(); i++)
	{
		answer += (str[i] - '0');
	}

	return answer;
}

// ���ο� Ǯ��2
int solution2(int n)
{
	int answer = 0;

	while (n > 0)
	{
		answer += n % 10;
		n /= 10;
	}

	return answer;
}

// ������ Ǯ�� 
int solution(int n)
{
	int answer = 0;

	for (int i = 1; i <= n; i *= 10)
	{
		answer += (n / i) % 10;
	}

	return answer;
}

int main()
{
	return 0;
}