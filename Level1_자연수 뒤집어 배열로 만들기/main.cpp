#include<iostream>
#include<vector>
#include<string>
using namespace std; 

/*

<�ڿ��� ������ �迭�� �����>

���� ����
�ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �������ּ���. 
������� n�� 12345�̸� [5,4,3,2,1]�� �����մϴ�.

���� ����
n�� 10,000,000,000������ �ڿ����Դϴ�.

����� ��
n		return
12345	[5,4,3,2,1]

*/

// ���ο� Ǯ�� 
vector<int> solution(long long n)
{
	vector<int> answer;

	while (n > 0)
	{
		answer.push_back(n % 10);
		n /= 10;
	}

	return answer;
}

// ������ Ǯ�� 
vector<int> solution(long long n)
{
	vector<int> answer;
	string str = to_string(n);

	for (int i = str.size() - 1; i >= 0; i--)
	{
		answer.push_back(str[i] - '0');
	}

	return answer;
}

int main()
{
	return 0;
}