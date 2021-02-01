#include <string>
#include <vector>
using namespace std;

/*

��� ���� ��������

���� ����
�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. 
�ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

���ѻ���
s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.

����� ��

s			return
abcde		c
qwer		we

*/

/*

<substr �Լ�>

str.substr(size_t index = 0, size_t len = npos) const;

string�� index �������� len��ŭ �߶� ��ȯ�ϴ� �Լ��Դϴ�. 

�ι�° ������ len�� ����Ʈ npos�� �ǹ��ϴ� ���� "-1". 
size_t�� Ÿ���� unsigned int Ÿ���Դϴ�.

unsigned int�� -1�� ������ "����÷ο�"�� �ǹ�.
unsigned�� Ÿ�Կ� ������ ������ ���� ū ������ ������ �˴ϴ�.

�׷��� ������ npos���� -1�� �־, 
�ƹ��͵� ���� �ʾ������� �׻� ���ڿ� ��ü�� ��ȯ.

str1 : BlockDMask 

�Լ� ���� : str1.substr();       //"BlockDMask" ���ڿ� ��ü�� ��ȯ.

�Լ� ���� : str1.substr(5);      // "DMask"�� ��ȯ. 5��° ���ں��� ���ڿ� �������� ��ȯ.

�Լ� ���� : str1.substr(5, 1);   // "D"�� ��ȯ. 5��° ���ں���, 1�� ���̸�ŭ ���ڿ��� ��ȯ.

*/


// ������ Ǯ��1 
// ��Ȯ��: 100.0
string solution1(string s)
{
	// �����ս� �� �����⸦ ����ϴ� �ͺ��� ���ϱ⸦ ����ϴ� ���� ���ɿ� ����
	int center = s.size()*0.5;
	return (s.size() % 2 == 0) ? s.substr(center - 1, 2) : s.substr(center, 1);
}

// ������ Ǯ��2
string solution1(string s)
{
	return (s.size() % 2 == 0) ? s.substr(s.size()*0.5 - 1, 2) : s.substr(s.size()*0.5, 1);
}

// ������ Ǯ�� 
// ��Ȯ��: 100.0
string solution(string s)
{
	string answer = "";

	int center = s.size() / 2;
	answer += (s.size() % 2 == 0) ? s.substr(center - 1, 2) : s.substr(center, 1);

	return answer;
}