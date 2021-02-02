#include<iostream>
#include<string>
#include<vector>
using namespace std; 

/*

���￡�� �輭�� ã��

���� ����
String�� �迭 seoul�� element�� Kim�� ��ġ x�� ã��, 
�輭���� x�� �ִٴ� String�� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���. 
seoul�� Kim�� ���� �� ���� ��Ÿ���� �߸��� ���� �ԷµǴ� ���� �����ϴ�.

���� ����
seoul�� ���� 1 �̻�, 1000 ������ �迭�Դϴ�.
seoul�� ���Ҵ� ���� 1 �̻�, 20 ������ ���ڿ��Դϴ�.
Kim�� �ݵ�� seoul �ȿ� ���ԵǾ� �ֽ��ϴ�.

����� ��
seoul			return
[Jane, Kim]		�輭���� 1�� �ִ�

*/

/*

<to_string �Լ�> : int�� �����͸� string������ ��ȯ���ִ� �Լ�  

��std::to_string �������
<string>

�� std::to_string �Լ� ����

string to_string (int num);
string to_string (long num);
string to_string (long long num);
string to_string (unsigned num);
string to_string (unsigned long num);
string to_string (unsigned long long num);
string to_string (float num);
string to_string (double num);
string to_string (long double num);

�� std::to_string �Լ� ����

to_string �Լ��� ���� Ÿ���� �����͸� �����ϰ� string Ÿ������ �����ϵ��� �ϴ� �Լ� �Դϴ�.
to_string(����); �̷������� ����ϸ� �˴ϴ�.

*/

// ������ Ǯ�� 
string solution(vector<string> seoul)
{
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
		{
			return "�輭���� " + to_string(i) + "�� �ִ�";
		}
	}
}

int main()
{
	return 0;
}