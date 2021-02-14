#include<iostream>
#include<string>
using namespace std; 

/*

<���� ��ȣ>

���� ����
� ������ �� ���ĺ��� ������ �Ÿ���ŭ �о
�ٸ� ���ĺ����� �ٲٴ� ��ȣȭ ����� ���� ��ȣ��� �մϴ�. 

���� ��� AB�� 1��ŭ �и� BC�� �ǰ�, 3��ŭ �и� DE�� �˴ϴ�. 
z�� 1��ŭ �и� a�� �˴ϴ�. (�빮�� Z�� ��������)
���ڿ� s�� �Ÿ� n�� �Է¹޾� s�� n��ŭ �� ��ȣ���� ����� �Լ�, 
solution�� �ϼ��� ������.

���� ����
������ �ƹ��� �о �����Դϴ�.
s�� ���ĺ� �ҹ���, �빮��, �������θ� �̷���� �ֽ��ϴ�.
s�� ���̴� 8000�����Դϴ�.
n�� 1 �̻�, 25������ �ڿ����Դϴ�.

����� ��
s			n			result
AB			1			BC
z			1			a
a B z		4			e F d

*/

// ������ Ǯ�� 
string solution(string s, int n)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ') continue;

		// �빮���� ���� �ҹ����� �� ����� ��� 
		// (�о ��� ���� z�� �Ѿ�� �Ȱ��� ����)
		if (s[i] < 'a') s[i] = 'A' + (s[i] - 'A' + n) % 26;
		else s[i] = 'a' + (s[i] - 'a' + n) % 26;
	}

	return s;
}

// ������ Ǯ�� 
string solution(string s, int n)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ') continue;

		if (s[i] + n > 'z') s[i] = 'a' + (s[i] + n - 'z' - 1);
		else if (s[i] <= 'Z' && s[i] + n > 'Z') s[i] = 'A' + (s[i] + n - 'Z' - 1);
		else s[i] = s[i] + n;
	}

	return s;
}

int main()
{
	return 0;
}