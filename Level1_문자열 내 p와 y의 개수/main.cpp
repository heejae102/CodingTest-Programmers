#include<iostream>
#include<string>
using namespace std; 

/*

���ڿ� �� p�� y�� ����

���� ����
�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�. 
s�� 'p'�� ������ 'y'�� ������ ���� ������ True, 
�ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 
'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�. 
��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.

���� ��� s�� pPoooyY�� true�� return�ϰ� Pyy��� false�� return�մϴ�.

���ѻ���
���ڿ� s�� ���� : 50 ������ �ڿ���
���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.

����� ��
s			answer
pPoooyY		true
Pyy			false

����� �� ����
����� �� #1
'p'�� ���� 2��, 'y'�� ���� 2���� �����Ƿ� true�� return �մϴ�.

����� �� #2
'p'�� ���� 1��, 'y'�� ���� 2���� �ٸ��Ƿ� false�� return �մϴ�.

*/

// ������ Ǯ�� 
bool solution(string s)
{
	int pCount = 0;
	int yCount = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'p' || s[i] == 'P') pCount++;
		if (s[i] == 'y' || s[i] == 'Y') yCount++;
	}

	// p�� ����, y�� ������ ��� 0�� ���� true�� �����ϴµ� 
	// �� ��쵵 p�� ������ y�� ������ �����Ƿ� ���� ����ó���� �ʿ䰡 ����. 
	return (pCount == yCount);
}

// ������ Ǯ�� 
bool solution(string s)
{
	int pCount = 0;
	int yCount = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'p' || s[i] == 'P') pCount++;
		if (s[i] == 'y' || s[i] == 'Y') yCount++;
	}

	return (pCount == 0 && yCount == 0) ? true : (pCount == yCount);
}

int main()
{
	return 0;
}