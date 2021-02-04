#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

/*

������ �������� ���� �迭

���� ����
array�� �� element �� divisor�� ������ �������� ����
������������ ������ �迭�� ��ȯ�ϴ� �Լ�, solution�� �ۼ����ּ���.
divisor�� ������ �������� element�� �ϳ��� ���ٸ� �迭�� -1�� ��� ��ȯ�ϼ���.

���ѻ���
arr�� �ڿ����� ���� �迭�Դϴ�.
���� i, j�� ���� i �� j �̸� arr[i] �� arr[j] �Դϴ�.
divisor�� �ڿ����Դϴ�.
array�� ���� 1 �̻��� �迭�Դϴ�.

����� ��
arr				 divisor	return
[5, 9, 7, 10]		5		[5, 10]
[2, 36, 1, 3]		1		[1, 2, 3, 36]
[3,2,6]				10		[-1]

����� �� ����
����� ��#1
arr�� ���� �� 5�� ������ �������� ���Ҵ� 5�� 10�Դϴ�. 
���� [5, 10]�� �����մϴ�.

����� ��#2
arr�� ��� ���Ҵ� 1���� ������ �������ϴ�. 
���Ҹ� ������������ ������ [1, 2, 3, 36]�� �����մϴ�.

����� ��#3
3, 2, 6�� 10���� ������ �������� �ʽ��ϴ�. 
������ �������� ���Ұ� �����Ƿ� [-1]�� �����մϴ�.

*/

/*

<vector �ʱ�ȭ ���>

vector<int> vec;			// ����ִ� ���� ����
vector<int> vec(5);			// 5���� ���Ҹ� 0���� �ʱ�ȭ ���� ����
vector<int> vec(5, 3);		// 5���� ���Ҹ� 3���� �ʱ�ȭ ���� ����
vector<int> vec2(vec);		// vec �� �����Ͽ� ���� ����

*/

/*

<sort �Լ�>

�� sort �Լ� �������
<algorithm>

�� sort �Լ� ����
void sort(RandomAccessIterator first, RandomAccessIterator last);

sort(arr, arr+n);
sort(v.begin(), v.end());
sort(v.begin(), v.end(), compare);              // ����� ���� �Լ� ���
sort(v.begin(), v.end(), greater<�ڷ���>());		// �������� (Descending order)
sort(v.begin(), v.end(), less<�ڷ���>());		// �������� (default = Ascending order)

sort �Լ��� �Ű������� iterator, �� �������̴�.
ù��° �Ű��������� �����ּ�, �ι�° �Ű��������� �������ּҸ� �޾Ƽ�
�����ּҺ��� �������ּұ����� �����͸� ������������ �����Ѵ�.


�� ù��° �Ű����� : �����ϰ��� �ϴ� ������ ������ �����ּ� 

���� �����ϰ� ���� ������ ������ �迭�̶�� �迭�� �̸��� �Ѱ��ְ�,
(�迭�� �̸��� �迭�� �����ּ�)

���Ͷ�� vector.begin()�� �Ѱ��ָ� �ȴ�. 
(���Ϳ��� v.begin()�� ������ �����ּҸ� ��ȯ)


�� �ι�° �Ű����� : �����ϰ��� �ϴ� ������ ������ ������ �ּ�

���� �����ϰ� ���� ������ ������ �迭�̶�� �迭�� �̸� + �迭�� ũ�⸦ �Ѱ��ְ�,

���Ͷ�� vector.end()�� �Ѱ��ָ� �ȴ�.
(���Ϳ��� v.end()�� ������ ������ �ּҸ� ��ȯ)

*/

// ���ο� Ǯ�� 
vector<int> solution(vector<int> arr, int divisor)
{
	vector<int> answer;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % divisor == 0) answer.push_back(arr[i]);
	}

	sort(answer.begin(), answer.end());

	// answer ���� ����� 0�� ���
	// 1���� ���Ҹ� -1�� �ʱ�ȭ�� ���͸� ���� 
	// ���� ����� 0�� �ƴ� ��� answer ���� ���� 
	// �� ���׿����� ���ÿ� (����) ? a : b; => a�� b�� Ÿ���� ���� ��ġ�ؾ� ��. 
	return (!answer.size()) ? vector<int>(1, -1) : answer;
}

// ������ Ǯ�� 
vector<int> solution(vector<int> arr, int divisor)
{
	vector<int> answer;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % divisor == 0) answer.push_back(arr[i]);
	}

	if (answer.size() < 1) answer.push_back(-1);
	sort(answer.begin(), answer.end());

	return answer;
}

int main()
{
	return 0;
}