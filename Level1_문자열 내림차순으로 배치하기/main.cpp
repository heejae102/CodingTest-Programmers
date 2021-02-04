#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

/*

문자열 내림차순으로 배치하기

문제 설명
문자열 s에 나타나는 문자를 큰것부터 작은 순으로 정렬해
새로운 문자열을 리턴하는 함수, solution을 완성해주세요.
s는 영문 대소문자로만 구성되어 있으며, 
대문자는 소문자보다 작은 것으로 간주합니다.

제한 사항
str은 길이 1 이상인 문자열입니다.

입출력 예
s			return
Zbcdefg		gfedcbZ

*/

/*

<문제풀이>

아스키코드 값 

A : 65
a : 97

대문자의 아스키코드 값이 더 작기 때문에,
대문자, 소문자가 섞여있는 문자열을 내림차순으로 정렬하면
자연스럽게 대문자가 소문자보다 오른쪽에 위치하게 된다.
(내림차순은 더 높은 숫자가 왼쪽에 배치)

string 타입 정렬하기 
sort(str.begin(), str.end());					// 오름차순
sort(str.begin(), str.end(), less<char>());		// 오름차순
sort(str.begin(), str.end(), greater<char>());	// 내림차순

*/

// 최초의 풀이 
string solution(string s)
{
	sort(s.begin(), s.end(), greater<char>());

	return s;
}

int main()
{
	return 0;
}