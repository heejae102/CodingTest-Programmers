#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

/*

���ڿ� ������������ ��ġ�ϱ�

���� ����
���ڿ� s�� ��Ÿ���� ���ڸ� ū�ͺ��� ���� ������ ������
���ο� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
s�� ���� ��ҹ��ڷθ� �����Ǿ� ������, 
�빮�ڴ� �ҹ��ں��� ���� ������ �����մϴ�.

���� ����
str�� ���� 1 �̻��� ���ڿ��Դϴ�.

����� ��
s			return
Zbcdefg		gfedcbZ

*/

/*

<����Ǯ��>

�ƽ�Ű�ڵ� �� 

A : 65
a : 97

�빮���� �ƽ�Ű�ڵ� ���� �� �۱� ������,
�빮��, �ҹ��ڰ� �����ִ� ���ڿ��� ������������ �����ϸ�
�ڿ������� �빮�ڰ� �ҹ��ں��� �����ʿ� ��ġ�ϰ� �ȴ�.
(���������� �� ���� ���ڰ� ���ʿ� ��ġ)

string Ÿ�� �����ϱ� 
sort(str.begin(), str.end());					// ��������
sort(str.begin(), str.end(), less<char>());		// ��������
sort(str.begin(), str.end(), greater<char>());	// ��������

*/

// ������ Ǯ�� 
string solution(string s)
{
	sort(s.begin(), s.end(), greater<char>());

	return s;
}

int main()
{
	return 0;
}