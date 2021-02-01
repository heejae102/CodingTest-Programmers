#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

/*

���� ���ڴ� �Ⱦ�

���� ����
�迭 arr�� �־����ϴ�. �迭 arr�� �� ���Ҵ� ���� 0���� 9������ �̷���� �ֽ��ϴ�. 
�̶�, �迭 arr���� ���������� ��Ÿ���� ���ڴ� �ϳ��� ����� ���� �����Ϸ��� �մϴ�. 
��, ���ŵ� �� ���� ������ ��ȯ�� ���� �迭 arr�� ���ҵ��� ������ �����ؾ� �մϴ�. 
���� ���,

arr = [1, 1, 3, 3, 0, 1, 1] �̸� [1, 3, 0, 1] �� return �մϴ�.
arr = [4, 4, 4, 3, 3] �̸� [4, 3] �� return �մϴ�.

�迭 arr���� ���������� ��Ÿ���� ���ڴ� �����ϰ� 
���� ������ return �ϴ� solution �Լ��� �ϼ��� �ּ���.

���ѻ���
�迭 arr�� ũ�� : 1,000,000 ������ �ڿ���
�迭 arr�� ������ ũ�� : 0���� ũ�ų� ���� 9���� �۰ų� ���� ����

����� ��
arr	answer
[1,1,3,3,0,1,1]	[1,3,0,1]
[4,4,4,3,3]	[4,3]

����� �� ����
����� �� #1,2
������ ���ÿ� �����ϴ�.

*/

/*

<unique, erase �Լ�>

���Ϳ��� �ߺ����ڸ� �����ϱ� ���� unique�� erase �Լ��� ����� �� �ִ�.

unique �Լ��� ���ӵ� �ߺ� ���Ҹ� vector�� ���� �޺κп� �����Ⱚ���� ������.
unique �Լ��� return ���� ��ġ�� �ߺ����� ���� ���ҵ��� ��� �����ǰ�,
ù��° ������ ����(�ߺ��� ����)�� ������ ���� ��ġ�̴�. 

���� ��� 112335�� ������ ��, unique�Լ��� ����� �Ŀ� 1235.13�� �����µ� 
�̶� .���� ǥ�� �� ��ġ�� �����ϰ� �ȴ�. 
�׷��� erase �Լ��� ���� (���ϵ� ��ġ�� ���� - ������ ����)���� �����
�ߺ��� ���Ҹ� ���� ���� �� �ִ�. 

*/

// ���ο� Ǯ�� 1
// ��Ȯ��: 71.9
// ȿ����: 28.1
vector<int> solution1(vector<int> arr)
{
	vector<int> answer;

	answer.push_back(arr[0]);

	for (int i = 1; i < arr.size(); i++)
	{
		// i + 1�� ����Ͽ� ���� ���ҿ� ���� ���Ҹ� ���� ��� 
		// ������ ������ �ε����� 1�� ������ �� out of range ������ �߻��ϰ�,
		// ������ �ε����� ���Ҵ� �� �� ���� ���Ұ� �����Ƿ� ���� ���ҿ� ���� ���Ҹ� ���ؾ� ��.
		if (arr[i - 1] != arr[i])
		{
			answer.push_back(arr[i]);
		}
	}

	return answer;
}

// ���ο� Ǯ��2 (unique, erase �Լ� ���)
// ��Ȯ��: 71.9
// ȿ����: 28.1
vector<int> solution2(vector<int> arr)
{
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	return arr;
}

// ������ Ǯ�� 
// ��Ȯ��: 71.9
// ȿ����: 28.1
vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	int preNum = 1000001;

	for (int i = 0; i < arr.size(); i++)
	{
		if (preNum != arr[i])
		{
			answer.push_back(arr[i]);
		}

		preNum = arr[i];
	}

	return answer;
}


int main()
{
	vector<int> test = { 1,1,3,3,0,1,1 };

	vector<int> result = solution1(test);

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
}
