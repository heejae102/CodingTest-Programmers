#include<iostream>
#include <string>
#include <vector>
using namespace std;

/*

수박수박수박수박수박수?

문제 설명
길이가 n이고, 수박수박수박수....와 같은 패턴을
유지하는 문자열을 리턴하는 함수, solution을 완성하세요.
예를들어 n이 4이면 수박수박을 리턴하고 3이라면 수박수를 리턴하면 됩니다.

제한 조건
n은 길이 10,000이하인 자연수입니다.

입출력 예
n	return
3	수박수
4	수박수박

*/

// 새로운 풀이 
string solution(int n)
{
	string answer = "";

	for (int i = 0; i < n; i++)
	{
		(i & 1) ? answer += "박" : answer += "수";
	}

	return answer;
}

/*

<비트연산자 & 을 이용하여 짝수, 홀수 구분하기>

n & 1

2진수에서 숫자 홀수, 짝수를 결정 하는 것은 마지막 자리의 숫자이기 때문에,
위 연산의 결과가 1이면 홀수, 0이면 짝수 이다.


ex 1)
10 이라는 10진수 정수를 예로 들면
10은 2진수로 표현하면 1010 이고,

10 & 1 은 1010 & 1과 동일함.

그럼 1010의 마지막 자리는 0 이고, 
0과 1을 & 연산 하면 0 이기 때문에 짝수가 된다.


ex 2)
11은 2진수로 1011이고,
11 & 1 는 1011 & 1 와 동일하고

마지막 자리수는 1이기 때문에 1 & 1 = 1 이기 때문에 홀수이다.

*/

// 최초의 풀이 
string solution(int n)
{
	string answer = "";

	for (int i = 0; i < n; i++)
	{
		(i % 2 == 0) ? answer += "수" : answer += "박";
	}

	return answer;
}

int main()
{
	return 0;
}