#include<iostream>
#include <string>
#include <numeric>
#include <vector>
using namespace std;

/*

평균 구하기

문제 설명
정수를 담고 있는 배열 arr의 
평균값을 return하는 함수, solution을 완성해보세요.

제한사항
arr은 길이 1 이상, 100 이하인 배열입니다.
arr의 원소는 -10,000 이상 10,000 이하인 정수입니다.

입출력 예
arr				return
[1,2,3,4]		2.5
[5,5]			5

*/

/*

<accumulate 함수>

template< class InputIt, class T >
constexpr T accumulate(InputIt first, InputIt last, T init);

accumulate 함수는 first ~ last 구간에 속한 값들의 총합을 구하는 함수이다.
세번째 인수 init은 'initial value of the sum'의 약자로 
누적 총합의 초기값을 의미하며, 0으로 지정하면  순수한 합을 구할 수 있다.


ex)
vector<int> v = { 1'000'000'000, 2'000'000'000 };
long long sum = accumulate(v.begin(), v.end(), 0);
cout << sum << '\n';	//출력: -1294967296

accumulate 함수 사용 시 주의해야 할 점은 
범위를 초과하는 값을 더할 때 초기값을 잘 설정해줘야 한다는 것이다.

위의 예제에서는 int형 범위를 초과하는 값을 더하기 위해 
long long sum이라는 변수를 만들었는데, 출력을 해보면 오버플로우가 발생한다.

이 문제는 accumulate의 반환값이 initial value의 타입을 따라가기 때문이다. 
initial value에 int값인 0을 넣었으니 accumulate의 반환값도 int로 정해지게 되는 것.
반환 타입도 long long 타입을 쓸 생각이라면 initial value에 0 대신 0LL을 넣어줘야 한다.


*/

// 새로운 풀이 
double solution(vector<int> arr) 
{
	double answer = accumulate(arr.begin(), arr.end(), 0);

	return answer / arr.size();
}

// 최초의 풀이 
double solution(vector<int> arr)
{
	double answer = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		answer += arr[i];
	}

	return answer / arr.size();
}