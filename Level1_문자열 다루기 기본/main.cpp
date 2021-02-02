#include <string>
#include <vector>
using namespace std;

/*

���ڿ� �ٷ�� �⺻

���� ����
���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���. 
���� ��� s�� a234�̸� False�� �����ϰ� 1234��� True�� �����ϸ� �˴ϴ�.

���� ����
s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.

����� ��
s		return
a234	false
1234	true

*/

/*

<isdigit �Լ�> C, C++ 

 int isdigit(int c);

�Ű������� ���� char Ÿ���� 10���� ���ڷ� ������ �����ϸ� 0�� �ƴ� ����(true),
�ƴϸ� 0(false)�� ��ȯ�ϴ� �Լ� �Դϴ�.

*/

bool solution(string s)
{
	bool answer = true;

	for (int i = 0; i < s.size(); i++)
	{
		if (isdigit(s[i]) == 0) answer = false;
	}

	return (s.size() == 4 || s.size() == 6) ? answer : false;
}