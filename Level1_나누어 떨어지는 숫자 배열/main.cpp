#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

/*

나누어 떨어지는 숫자 배열

문제 설명
array의 각 element 중 divisor로 나누어 떨어지는 값을
오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.
divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.

제한사항
arr은 자연수를 담은 배열입니다.
정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다.
divisor는 자연수입니다.
array는 길이 1 이상인 배열입니다.

입출력 예
arr				 divisor	return
[5, 9, 7, 10]		5		[5, 10]
[2, 36, 1, 3]		1		[1, 2, 3, 36]
[3,2,6]				10		[-1]

입출력 예 설명
입출력 예#1
arr의 원소 중 5로 나누어 떨어지는 원소는 5와 10입니다. 
따라서 [5, 10]을 리턴합니다.

입출력 예#2
arr의 모든 원소는 1으로 나누어 떨어집니다. 
원소를 오름차순으로 정렬해 [1, 2, 3, 36]을 리턴합니다.

입출력 예#3
3, 2, 6은 10으로 나누어 떨어지지 않습니다. 
나누어 떨어지는 원소가 없으므로 [-1]을 리턴합니다.

*/

/*

<vector 초기화 방법>

vector<int> vec;			// 비어있는 벡터 생성
vector<int> vec(5);			// 5개의 원소를 0으로 초기화 시켜 만듬
vector<int> vec(5, 3);		// 5개의 원소를 3으로 초기화 시켜 만듬
vector<int> vec2(vec);		// vec 을 복사하여 벡터 생성

*/

/*

<sort 함수>

▼ sort 함수 헤더파일
<algorithm>

▼ sort 함수 원형
void sort(RandomAccessIterator first, RandomAccessIterator last);

sort(arr, arr+n);
sort(v.begin(), v.end());
sort(v.begin(), v.end(), compare);              // 사용자 정의 함수 사용
sort(v.begin(), v.end(), greater<자료형>());		// 내림차순 (Descending order)
sort(v.begin(), v.end(), less<자료형>());		// 오름차순 (default = Ascending order)

sort 함수의 매개변수는 iterator, 즉 포인터이다.
첫번째 매개변수에는 시작주소, 두번째 매개변수에는 마지막주소를 받아서
시작주소부터 마지막주소까지의 데이터를 오름차순으로 정렬한다.


▶ 첫번째 매개변수 : 정렬하고자 하는 데이터 집합의 시작주소 

따라서 정렬하고 싶은 데이터 집합이 배열이라면 배열의 이름을 넘겨주고,
(배열의 이름은 배열의 시작주소)

벡터라면 vector.begin()을 넘겨주면 된다. 
(벡터에서 v.begin()은 벡터의 시작주소를 반환)


▶ 두번째 매개변수 : 정렬하고자 하는 데이터 집합의 마지막 주소

따라서 정렬하고 싶은 데이터 집합이 배열이라면 배열의 이름 + 배열의 크기를 넘겨주고,

벡터라면 vector.end()을 넘겨주면 된다.
(벡터에서 v.end()은 벡터의 마지막 주소를 반환)

*/

// 새로운 풀이 
vector<int> solution(vector<int> arr, int divisor)
{
	vector<int> answer;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % divisor == 0) answer.push_back(arr[i]);
	}

	sort(answer.begin(), answer.end());

	// answer 벡터 사이즈가 0일 경우
	// 1개의 원소를 -1로 초기화한 벡터를 리턴 
	// 벡터 사이즈가 0이 아닐 경우 answer 벡터 리턴 
	// ※ 삼항연산자 사용시에 (조건) ? a : b; => a와 b의 타입이 서로 일치해야 함. 
	return (!answer.size()) ? vector<int>(1, -1) : answer;
}

// 최초의 풀이 
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