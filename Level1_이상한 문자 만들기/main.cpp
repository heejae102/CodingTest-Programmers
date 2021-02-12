#include<iostream>
#include <string>
#include <vector>
using namespace std;
 
/*

<이상한 문자 만들기>

문제 설명
문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 
각 단어는 하나 이상의 공백문자로 구분되어 있습니다. 
각 단어의 짝수번째 알파벳은 대문자로, 
홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.

제한 사항
문자열 전체의 짝/홀수 인덱스가 아니라, 
단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.

입출력 예
s					return
try hello world		TrY HeLlO WoRlD

입출력 예 설명
try hello world는 세 단어 try, hello, world로 구성되어 있습니다. 
각 단어의 짝수번째 문자를 대문자로, 
홀수번째 문자를 소문자로 바꾸면 TrY, HeLlO, WoRlD입니다. 
따라서 TrY HeLlO WoRlD 를 리턴합니다.

*/

/*

<tolower & toupper>

1-1) 헤더파일

C언어 : <ctype.h>
C++ : <cctype>


1-2) tolower 함수 원형 및 설명

int tolower(int c);

매개변수 : 문자를 인자로 받습니다. 
문자를 넣게되면 아스키 코드표에 기반한 10진 수로 변환되어 들어가며, 
숫자가 들어가게 되어도 아스키 코드 표에 기반한 숫자로 인식합니다.
즉 int 타입인 65번이 들어오면 내부적으로는 'A'로 인식합니다.
문자 'A'가 들어오면 아스키 코드표에 기반하여 65번으로 받게 됩니다.

반환형 : 매개변수로 들어온 인자가 대문자인 경우 소문자로 반환해줍니다.
인자로 소문자가 들어올 경우 소문자를 반환해줍니다.
인자로 대소문자가 아닌 다른 문자가 들어온 경우 해당 문자 그대로 반환합니다.
결론적으로 대문자만 소문자로 변경하고 다른 모든문자는 그대로 반환하는 함수 입니다.


1-3) toupper 함수 원형 및 설명

int toupper(int c);

매개변수 : 문자를 인자로 받습니다. 
문자를 넣게되면 아스키 코드표에 기반한 10진 수로 변환되어 들어가며, 
숫자가 들어가게 되어도 아스키 코드 표에 기반한 숫자로 인식합니다.

반환형 : 소문자만 대문자로 변경해서 반환해주고 
다른 모든문자는 그대로 반환하는 함수 입니다.

*/

// 개선된 풀이 
string solution(string s)
{
	int index = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			index = 0;
			continue;
		}

		s[i] = (index & 1) ? tolower(s[i]) : toupper(s[i]);
		index++;
	}

	return s;
}

// 최초의 풀이 
string solution(string s)
{
	int index = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			index = 0;
			continue;
		}

		if (index & 1) s[i] = (s[i] >= 'a') ? s[i] : s[i] + 32;
		else s[i] = (s[i] <= 'Z') ? s[i] : s[i] - 32;
		index++;
	}

	return s;
}

int main()
{
	return 0;
}