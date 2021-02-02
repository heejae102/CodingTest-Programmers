#include <string>
#include <vector>
using namespace std;

/*

문자열 다루기 기본

문제 설명
문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 
예를 들어 s가 a234이면 False를 리턴하고 1234라면 True를 리턴하면 됩니다.

제한 사항
s는 길이 1 이상, 길이 8 이하인 문자열입니다.

입출력 예
s		return
a234	false
1234	true

*/

/*

<isdigit 함수> C, C++ 

 int isdigit(int c);

매개변수로 들어온 char 타입이 10진수 숫자로 변경이 가능하면 0이 아닌 숫자(true),
아니면 0(false)를 반환하는 함수 입니다.

*/

bool solution(string s)
{
	bool answer = true;

	for (int i = 0; i < s.size(); i++)
	{
		if (isdigit(s[i]) == 0) answer = false;
	}

	return (s.size() == 4 || s.size() == 6) ? answer : false;
}