#include<iostream>
#include<string>
#include<vector>
using namespace std; 

/*

서울에서 김서방 찾기

문제 설명
String형 배열 seoul의 element중 Kim의 위치 x를 찾아, 
김서방은 x에 있다는 String을 반환하는 함수, solution을 완성하세요. 
seoul에 Kim은 오직 한 번만 나타나며 잘못된 값이 입력되는 경우는 없습니다.

제한 사항
seoul은 길이 1 이상, 1000 이하인 배열입니다.
seoul의 원소는 길이 1 이상, 20 이하인 문자열입니다.
Kim은 반드시 seoul 안에 포함되어 있습니다.

입출력 예
seoul			return
[Jane, Kim]		김서방은 1에 있다

*/

/*

<to_string 함수> : int형 데이터를 string형으로 변환해주는 함수  

▼std::to_string 헤더파일
<string>

▼ std::to_string 함수 원형

string to_string (int num);
string to_string (long num);
string to_string (long long num);
string to_string (unsigned num);
string to_string (unsigned long num);
string to_string (unsigned long long num);
string to_string (float num);
string to_string (double num);
string to_string (long double num);

▼ std::to_string 함수 설명

to_string 함수는 숫자 타입의 데이터를 안전하게 string 타입으로 변경하도록 하는 함수 입니다.
to_string(숫자); 이런식으로 사용하면 됩니다.

*/

// 최초의 풀이 
string solution(vector<string> seoul)
{
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
		{
			return "김서방은 " + to_string(i) + "에 있다";
		}
	}
}

int main()
{
	return 0;
}