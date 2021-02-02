#include<iostream>
#include <string>
#include <numeric>
#include <vector>
using namespace std;

/*

��� ���ϱ�

���� ����
������ ��� �ִ� �迭 arr�� 
��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.

���ѻ���
arr�� ���� 1 �̻�, 100 ������ �迭�Դϴ�.
arr�� ���Ҵ� -10,000 �̻� 10,000 ������ �����Դϴ�.

����� ��
arr				return
[1,2,3,4]		2.5
[5,5]			5

*/

/*

<accumulate �Լ�>

template< class InputIt, class T >
constexpr T accumulate(InputIt first, InputIt last, T init);

accumulate �Լ��� first ~ last ������ ���� ������ ������ ���ϴ� �Լ��̴�.
����° �μ� init�� 'initial value of the sum'�� ���ڷ� 
���� ������ �ʱⰪ�� �ǹ��ϸ�, 0���� �����ϸ�  ������ ���� ���� �� �ִ�.


ex)
vector<int> v = { 1'000'000'000, 2'000'000'000 };
long long sum = accumulate(v.begin(), v.end(), 0);
cout << sum << '\n';	//���: -1294967296

accumulate �Լ� ��� �� �����ؾ� �� ���� 
������ �ʰ��ϴ� ���� ���� �� �ʱⰪ�� �� ��������� �Ѵٴ� ���̴�.

���� ���������� int�� ������ �ʰ��ϴ� ���� ���ϱ� ���� 
long long sum�̶�� ������ ������µ�, ����� �غ��� �����÷ο찡 �߻��Ѵ�.

�� ������ accumulate�� ��ȯ���� initial value�� Ÿ���� ���󰡱� �����̴�. 
initial value�� int���� 0�� �־����� accumulate�� ��ȯ���� int�� �������� �Ǵ� ��.
��ȯ Ÿ�Ե� long long Ÿ���� �� �����̶�� initial value�� 0 ��� 0LL�� �־���� �Ѵ�.


*/

// ���ο� Ǯ�� 
double solution(vector<int> arr) 
{
	double answer = accumulate(arr.begin(), arr.end(), 0);

	return answer / arr.size();
}

// ������ Ǯ�� 
double solution(vector<int> arr)
{
	double answer = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		answer += arr[i];
	}

	return answer / arr.size();
}