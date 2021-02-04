#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/*

정수 내림차순으로 배치하기

문제 설명
함수 solution은 정수 n을 매개변수로 입력받습니다. 
n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요. 
예를들어 n이 118372면 873211을 리턴하면 됩니다.

제한 조건
n은 1이상 8000000000 이하인 자연수입니다.

입출력 예
n			return
118372		873211

*/

/*

<string to data>

string 을 다른 데이터 타입으로 변환해주는 함수 

stoi = string to int
stol = string to long int
stoll = string to long long
stof = string to float
stod = string to double
stold = string to long double

stoul = string to unsigned int
stoull = string to unsigned long long

*/

// 개선된 풀이 
long long solution(long long n) 
{
	long long answer = 0;

	string str = to_string(n);
	sort(str.begin(), str.end(), greater<char>());
	answer = stoll(str);

	return answer;
}

// 새로운 풀이
long long solution(long long n)
{
	vector<long long> num;
	long long answer = 0;

	while (n > 0) 
	{
		num.push_back(n % 10);
		n /= 10;
	}

	sort(num.begin(), num.end(), greater<int>());

	for (int i = 0; i < num.size(); i++) 
	{
		// 8
		// 87
		// 873
		// 8732 ... 
		answer = answer * 10 + num[i];
	}

	return answer;
}

// 최초의 풀이 
long long solution(long long n)
{
	vector<long long> num;
	long long answer = 0;

	// n의 값이 long long타입이므로, i도 int형이 아닌 long long으로 선언해야 
	// 데이터 값이 자료형의 범위를 벗어나지 않는다. 
	for (long long i = 1; i <= n; i *= 10)
	{
		num.push_back((n / i) % 10);
	}

	sort(num.begin(), num.end());

	for (long long i = 0, mul = 1; i < num.size(); i++, mul *= 10)
	{
		answer += mul * num[i];
	}

	return answer;
}