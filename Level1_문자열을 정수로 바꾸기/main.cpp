#include <string>
#include <vector>
using namespace std;

/*

���ڿ��� ������ �ٲٱ�
���� ����
���ڿ� s�� ���ڷ� ��ȯ�� ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.

���� ����
s�� ���̴� 1 �̻� 5�����Դϴ�.
s�� �Ǿտ��� ��ȣ(+, -)�� �� �� �ֽ��ϴ�.
s�� ��ȣ�� ���ڷθ� �̷�����ֽ��ϴ�.
s�� 0���� �������� �ʽ��ϴ�.

����� ��
������� str�� 1234�̸� 1234�� ��ȯ�ϰ�, -1234�̸� -1234�� ��ȯ�ϸ� �˴ϴ�.
str�� ��ȣ(+,-)�� ���ڷθ� �����Ǿ� �ְ�, �߸��� ���� �ԷµǴ� ���� �����ϴ�.

*/

/*

<substr �Լ�>

���ڿ� �κк��� �Լ� 

���� ���ڿ�.substr(���������, ������ ���Ұ���)

string str="abcdefghijklmnop";
str.substr(startIndex, many);


���� ��� str.substr(2,4)���, "cdef"�� ����.
many ���� ���� str.substr(startIndex)�� ����Ѵٸ�, startIndex �������� ���ڿ� ������ ����.


<atoi �Լ�>

char�� ���ڿ��� ���� ���·� ������ִ� �Լ�.

char str[20] = "1234567789";
atoi(str);


<stoi �Լ�>

�Լ��� ���۹���� atoi()�� ����, stoi�� string�� ���ڿ��� �������·� ����.

string str = "1234567789";
stoi(str);

�� atoi, stoi�Լ� ��� +,- ��ȣ�� �ĺ��Ͽ� �������·� �����ϴ� �� �ݿ��Ѵ�. 

*/

//int solution(string s)
//{
//	int answer = stoi(s);
//
//	return answer; 
//}

// stoi �Լ��� ��ȣ���� �ĺ��ϴ��� ������ ���� �Լ� 
//int solution(string s)
//{
//	int answer;
//
//	if (isdigit(s[0])) answer = stoi(s);
//	else
//	{
//		string temp = s.substr(1, s.size() - 1);
//		answer = stoi(temp);
//		(s[0] == '+') ? answer : answer *= -1;
//	}
//
//	return answer;
//}

int solution(string s)
{
	int answer = 0;

	for (int i = 1, cnt = s.size() - 1; cnt >= 0; i *= 10, cnt--)
	{
		if (!isdigit(s[cnt])) { (s[cnt] == '-') ? answer *= -1 : answer; break; }
		answer += i * (s[cnt] - '0');
	}

	return answer;
}