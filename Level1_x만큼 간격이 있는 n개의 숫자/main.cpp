#include<iostream>
#include<vector>
using namespace std; 

/*

x만큼 간격이 있는 n개의 숫자

문제 설명
함수 solution은 정수 x와 자연수 n을 입력 받아, 
x부터 시작해 x씩 증가하는 숫자를 n개 지니는 리스트를 리턴해야 합니다. 
다음 제한 조건을 보고, 조건을 만족하는 함수, solution을 완성해주세요.

제한 조건
x는 -10000000 이상, 10000000 이하인 정수입니다.
n은 1000 이하인 자연수입니다.

입출력 예
x		n		answer
2		5		[2,4,6,8,10]
4		3		[4,8,12]
-4		2		[-4, -8]

*/

// 개선된 풀이 
vector<long long> solution(int x, int n)
{
	// x의 값을 가진 n개의 원소로 초기화 
	vector<long long> answer(n, x);

	// 0번 인덱스는 값을 변경할 필요가 없으므로 건너뛰고, 
	// 1번 인덱스부터는 이전 인덱스 값을 더해주면 된다. 
	for (int i = 1; i < n; i++)
	{
		answer[i] += answer[i - 1];
	}

	return answer;
}

// 최초의 풀이 
vector<long long> solution(int x, int n)
{
	vector<long long> answer;
	long long element = x;

	while (n--)
	{
		answer.push_back(element);
		element += x;
	}

	return answer;
}

int main()
{
	return 0; 
}