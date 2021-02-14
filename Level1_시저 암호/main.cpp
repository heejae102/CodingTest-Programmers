#include<iostream>
#include<string>
using namespace std; 

/*

<시저 암호>

문제 설명
어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서
다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다. 

예를 들어 AB는 1만큼 밀면 BC가 되고, 3만큼 밀면 DE가 됩니다. 
z는 1만큼 밀면 a가 됩니다. (대문자 Z도 마찬가지)
문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, 
solution을 완성해 보세요.

제한 조건
공백은 아무리 밀어도 공백입니다.
s는 알파벳 소문자, 대문자, 공백으로만 이루어져 있습니다.
s의 길이는 8000이하입니다.
n은 1 이상, 25이하인 자연수입니다.

입출력 예
s			n			result
AB			1			BC
z			1			a
a B z		4			e F d

*/

// 개선된 풀이 
string solution(string s, int n)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ') continue;

		// 대문자일 때와 소문자일 때 나누어서 계산 
		// (밀어낸 결과 값이 z를 넘어가도 똑같이 동작)
		if (s[i] < 'a') s[i] = 'A' + (s[i] - 'A' + n) % 26;
		else s[i] = 'a' + (s[i] - 'a' + n) % 26;
	}

	return s;
}

// 최초의 풀이 
string solution(string s, int n)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ') continue;

		if (s[i] + n > 'z') s[i] = 'a' + (s[i] + n - 'z' - 1);
		else if (s[i] <= 'Z' && s[i] + n > 'Z') s[i] = 'A' + (s[i] + n - 'Z' - 1);
		else s[i] = s[i] + n;
	}

	return s;
}

int main()
{
	return 0;
}