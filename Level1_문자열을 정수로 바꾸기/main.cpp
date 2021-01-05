#include <string>
#include <vector>
using namespace std;

/*

문자열을 정수로 바꾸기
문제 설명
문자열 s를 숫자로 변환한 결과를 반환하는 함수, solution을 완성하세요.

제한 조건
s의 길이는 1 이상 5이하입니다.
s의 맨앞에는 부호(+, -)가 올 수 있습니다.
s는 부호와 숫자로만 이루어져있습니다.
s는 0으로 시작하지 않습니다.

입출력 예
예를들어 str이 1234이면 1234를 반환하고, -1234이면 -1234를 반환하면 됩니다.
str은 부호(+,-)와 숫자로만 구성되어 있고, 잘못된 값이 입력되는 경우는 없습니다.

*/

/*

<substr 함수>

문자열 부분복사 함수 

복사 문자열.substr(복사시작점, 복사할 원소개수)

string str="abcdefghijklmnop";
str.substr(startIndex, many);


예를 들어 str.substr(2,4)라면, "cdef"를 복사.
many 영역 없이 str.substr(startIndex)로 사용한다면, startIndex 지점부터 문자열 끝까지 복사.


<atoi 함수>

char형 문자열을 정수 형태로 만들어주는 함수.

char str[20] = "1234567789";
atoi(str);


<stoi 함수>

함수의 동작방식은 atoi()와 동일, stoi는 string형 문자열을 정수형태로 변경.

string str = "1234567789";
stoi(str);

※ atoi, stoi함수 모두 +,- 부호를 식별하여 정수형태로 변경하는 데 반영한다. 

*/

//int solution(string s)
//{
//	int answer = stoi(s);
//
//	return answer; 
//}

// stoi 함수가 부호까지 식별하는지 몰랐을 때의 함수 
//int solution(string s)
//{
//	int answer;
//
//	if (isdigit(s[0])) answer = stoi(s);
//	else
//	{
//		string temp = s.substr(1, s.size() - 1);
//		answer = stoi(temp);
//		(s[0] == '+') ? answer : answer *= -1;
//	}
//
//	return answer;
//}

int solution(string s)
{
	int answer = 0;

	for (int i = 1, cnt = s.size() - 1; cnt >= 0; i *= 10, cnt--)
	{
		if (!isdigit(s[cnt])) { (s[cnt] == '-') ? answer *= -1 : answer; break; }
		answer += i * (s[cnt] - '0');
	}

	return answer;
}