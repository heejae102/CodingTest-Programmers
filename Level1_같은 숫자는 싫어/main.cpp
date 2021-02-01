#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

/*

같은 숫자는 싫어

문제 설명
배열 arr가 주어집니다. 배열 arr의 각 원소는 숫자 0부터 9까지로 이루어져 있습니다. 
이때, 배열 arr에서 연속적으로 나타나는 숫자는 하나만 남기고 전부 제거하려고 합니다. 
단, 제거된 후 남은 수들을 반환할 때는 배열 arr의 원소들의 순서를 유지해야 합니다. 
예를 들면,

arr = [1, 1, 3, 3, 0, 1, 1] 이면 [1, 3, 0, 1] 을 return 합니다.
arr = [4, 4, 4, 3, 3] 이면 [4, 3] 을 return 합니다.

배열 arr에서 연속적으로 나타나는 숫자는 제거하고 
남은 수들을 return 하는 solution 함수를 완성해 주세요.

제한사항
배열 arr의 크기 : 1,000,000 이하의 자연수
배열 arr의 원소의 크기 : 0보다 크거나 같고 9보다 작거나 같은 정수

입출력 예
arr	answer
[1,1,3,3,0,1,1]	[1,3,0,1]
[4,4,4,3,3]	[4,3]

입출력 예 설명
입출력 예 #1,2
문제의 예시와 같습니다.

*/

/*

<unique, erase 함수>

벡터에서 중복문자를 제거하기 위해 unique와 erase 함수를 사용할 수 있다.

unique 함수는 연속된 중복 원소를 vector의 제일 뒷부분에 쓰레기값으로 보낸다.
unique 함수의 return 값의 위치는 중복되지 않은 원소들이 모두 나열되고,
첫번째 쓰레기 원소(중복된 원소)가 나오는 곳의 위치이다. 

예를 들어 112335가 존재할 때, unique함수를 사용한 후에 1235.13이 나오는데 
이때 .으로 표시 한 위치를 리턴하게 된다. 
그래서 erase 함수를 통해 (리턴된 위치의 원소 - 마지막 원소)까지 지우면
중복된 원소를 전부 지울 수 있다. 

*/

// 새로운 풀이 1
// 정확성: 71.9
// 효율성: 28.1
vector<int> solution1(vector<int> arr)
{
	vector<int> answer;

	answer.push_back(arr[0]);

	for (int i = 1; i < arr.size(); i++)
	{
		// i + 1을 사용하여 현재 원소와 다음 원소를 비교할 경우 
		// 마지막 원소의 인덱스에 1을 더했을 때 out of range 에러가 발생하고,
		// 마지막 인덱스의 원소는 비교 할 다음 원소가 없으므로 현재 원소와 이전 원소를 비교해야 함.
		if (arr[i - 1] != arr[i])
		{
			answer.push_back(arr[i]);
		}
	}

	return answer;
}

// 새로운 풀이2 (unique, erase 함수 사용)
// 정확성: 71.9
// 효율성: 28.1
vector<int> solution2(vector<int> arr)
{
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	return arr;
}

// 최초의 풀이 
// 정확성: 71.9
// 효율성: 28.1
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
