#include<iostream>
#include<string>
using namespace std; 

/*

�ڵ��� ��ȣ ������

���� ����
���α׷��ӽ� ������� �������� ��ȣ�� ���� 
�������� ���� �������� ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, 
��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� 
���� *���� ���� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
s�� ���� 4 �̻�, 20������ ���ڿ��Դϴ�.

����� ��
phone_number	return
01033334444	*******4444
027778888	*****8888

*/

/*

<append �Լ�>

�� append �Լ� �������
<string>

�� append �Լ� ����
string& string::append(const string& str, size_type str_idx, size_type str_num)

str     : �߰� �� ���ڿ� 
str_idx : �߰� �� ���ڿ��� ���� ���� 
str_num : ���� �������κ��� �߰� �� ������ ũ�� 


�� append �Լ� �����ε�
string& string::append(size_type num, char c)

num : ���ڿ� �ڿ� ������ ������ ũ��(����) 
c   : ������ ���� 

ex) str.append(5, '.');		// ..... �� �����̶�� �ǹ� 

*/

// ������ Ǯ�� 
string solution(string phone_number)
{
	string answer = phone_number;

	for (int i = 0; i < phone_number.size() - 4; i++)
	{
		answer[i] = '*';
	}

	return answer;
}

// ������ Ǯ�� 
string solution(string phone_number)
{
	string answer = "";

	for (int i = 0; i < phone_number.size() - 4; i++)
	{
		answer += "*";
	}

	return answer.append(phone_number, phone_number.size() - 4, 4);
}

int main()
{
	return 0;
}