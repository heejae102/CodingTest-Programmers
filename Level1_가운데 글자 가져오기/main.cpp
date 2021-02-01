#include <string>
#include <vector>
using namespace std;

/*

가운데 글자 가져오기

문제 설명
단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 
단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

재한사항
s는 길이가 1 이상, 100이하인 스트링입니다.

입출력 예

s			return
abcde		c
qwer		we

*/

/*

<substr 함수>

str.substr(size_t index = 0, size_t len = npos) const;

string을 index 에서부터 len만큼 잘라서 반환하는 함수입니다. 

두번째 인자의 len의 디폴트 npos가 의미하는 것은 "-1". 
size_t의 타입은 unsigned int 타입입니다.

unsigned int에 -1이 들어오면 "언더플로우"의 의미.
unsigned인 타입에 음수를 넣으면 제일 큰 값으로 세팅이 됩니다.

그렇기 때문에 npos에는 -1을 넣어서, 
아무것도 넣지 않았을때는 항상 문자열 전체를 반환.

str1 : BlockDMask 

함수 예시 : str1.substr();       //"BlockDMask" 문자열 전체를 반환.

함수 예시 : str1.substr(5);      // "DMask"를 반환. 5번째 인자부터 문자열 끝까지를 반환.

함수 예시 : str1.substr(5, 1);   // "D"를 반환. 5번째 인자부터, 1의 길이만큼 문자열을 반환.

*/


// 개선된 풀이1 
// 정확성: 100.0
string solution1(string s)
{
	// 퍼포먼스 상 나누기를 사용하는 것보다 곱하기를 사용하는 것이 성능에 좋다
	int center = s.size()*0.5;
	return (s.size() % 2 == 0) ? s.substr(center - 1, 2) : s.substr(center, 1);
}

// 개선된 풀이2
string solution1(string s)
{
	return (s.size() % 2 == 0) ? s.substr(s.size()*0.5 - 1, 2) : s.substr(s.size()*0.5, 1);
}

// 최초의 풀이 
// 정확성: 100.0
string solution(string s)
{
	string answer = "";

	int center = s.size() / 2;
	answer += (s.size() % 2 == 0) ? s.substr(center - 1, 2) : s.substr(center, 1);

	return answer;
}