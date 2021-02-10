#include<iostream>
#include<string>
using namespace std; 

/*

핸드폰 번호 가리기

문제 설명
프로그래머스 모바일은 개인정보 보호를 위해 
고지서를 보낼 때고객들의 전화번호의 일부를 가립니다.
전화번호가 문자열 phone_number로 주어졌을 때, 
전화번호의 뒷 4자리를 제외한 나머지 숫자를 
전부 *으로 가린 문자열을 리턴하는 함수, solution을 완성해주세요.

제한 조건
s는 길이 4 이상, 20이하인 문자열입니다.

입출력 예
phone_number	return
01033334444	*******4444
027778888	*****8888

*/

/*

<append 함수>

▼ append 함수 헤더파일
<string>

▼ append 함수 원형
string& string::append(const string& str, size_type str_idx, size_type str_num)

str     : 추가 할 문자열 
str_idx : 추가 할 문자열의 시작 지점 
str_num : 시작 지점으로부터 추가 할 문자의 크기 


▼ append 함수 오버로딩
string& string::append(size_type num, char c)

num : 문자열 뒤에 덧붙일 문자의 크기(개수) 
c   : 덧붙일 문자 

ex) str.append(5, '.');		// ..... 를 덧붙이라는 의미 

*/

// 개선된 풀이 
string solution(string phone_number)
{
	string answer = phone_number;

	for (int i = 0; i < phone_number.size() - 4; i++)
	{
		answer[i] = '*';
	}

	return answer;
}

// 최초의 풀이 
string solution(string phone_number)
{
	string answer = "";

	for (int i = 0; i < phone_number.size() - 4; i++)
	{
		answer += "*";
	}

	return answer.append(phone_number, phone_number.size() - 4, 4);
}

int main()
{
	return 0;
}