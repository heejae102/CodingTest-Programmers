#include<iostream>
#include<vector>
using namespace std; 

/*

<�ִ������� �ּҰ����>

���� ����
�� ���� �Է¹޾� �� ���� �ִ������� �ּҰ������ ��ȯ�ϴ� �Լ�, 
solution�� �ϼ��� ������. 
�迭�� �� �տ� �ִ�����, �״��� �ּҰ������ �־� ��ȯ�ϸ� �˴ϴ�. 
���� ��� �� �� 3, 12�� �ִ������� 3, �ּҰ������ 12�̹Ƿ� 
solution(3, 12)�� [3, 12]�� ��ȯ�ؾ� �մϴ�.

���� ����
�� ���� 1�̻� 1000000������ �ڿ����Դϴ�.

����� ��
n		m		return
3		12		[3, 12]
2		5		[1, 10]

����� �� ����
����� �� #1
���� ����� �����ϴ�.

����� �� #2
�ڿ��� 2�� 5�� �ִ������� 1, �ּҰ������ 10�̹Ƿ� [1, 10]�� �����ؾ� �մϴ�.

*/

/*

* �ִ�����(GCD : Greatest CommonDivisor)

* �ּҰ����(LCM : Lowesr Common Multiplier)

<��Ŭ���� ȣ����>

- �ִ������� ���ϱ� ���� �˰���
- ���� a, b�� �ִ������� ���ϱ�

r = a�� b�� ���� �������� �����ϰ� a, b�� ���� �̵���Ų��.

a    b    r

152	 68   20

68   20   8

20   8    4

8    4       -> ������ ������

--> 4�� �ִ�������


<�ִ����� ���ϴ� ����> (�� ���� : a > b) 

int r;

while (b != 0)
{
	r = a % b;
	a = b;
	b = r;
}

return a;


<�ּҰ���� ���ϴ� ����> 

return (a * b) / �ִ�����; 

*/

// ���ο� Ǯ�� 
vector<int> solution(int n, int m)
{
	vector<int> answer;

	int temp = n;
	if (n < m)
	{
		n = m;
		m = temp;
	}

	// �ִ������� �ݵ�� �Էµ� ���� ���� ���� �����ϹǷ�, 
	// ���� ū ������ �����ؼ� -1 �ϸ鼭 �� �� ��� ������ 0���� ���������� Ȯ�� 
	for (int i = n; i > 0; i--)
	{
		if (n % i == 0 && m % i == 0)
		{
			answer.push_back(i);
			answer.push_back(n * m / i);
			break;
		}
	}

	return answer;
}

// ������ Ǯ�� 
int gcd(int a, int b)	// �ִ����� ���ϴ� ���� 
{
	int temp;

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int lcm(int a, int b)	// �ּҰ���� ���ϴ� ���� 
{
	return (a * b) / gcd(a, b);
}

vector<int> solution(int n, int m)
{
	vector<int> answer;

	// ������ Ǯ�� 
	int temp = n;
	if (n < m)
	{
		n = m;
		m = temp;
	}

	answer.push_back(gcd(n, m));
	answer.push_back(lcm(n, m));

	//if (n > m)
	//{
	//	answer.push_back(gcd(n, m));
	//	answer.push_back(lcm(n, m));
	//}
	//else
	//{
	//	answer.push_back(gcd(m, n));
	//	answer.push_back(lcm(m, n));
	//}

	return answer;
}

int main()
{
	return 0;
}