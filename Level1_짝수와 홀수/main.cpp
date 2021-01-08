#include<iostream>
using namespace std; 

/*

짝수와 홀수

문제 설명
정수 num이 짝수일 경우 Even을 반환하고 홀수인 경우 Odd를 반환하는 함수, solution을 완성해주세요.

제한 조건
num은 int 범위의 정수입니다.
0은 짝수입니다.

입출력 예
num	return
3	"Odd"
4	"Even"

*/

// C 
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>

//char* solution(int num)
//{
//	return (num % 2 == 0) ? "Even" : "Odd";
//}


// C++
string solution1(int num)
{
	string answer = (num % 2 == 0) ? "Even" : "Odd";
	return answer;
}


// 비트 연산자 사용하기 
string solution2(int num) 
{
	return num & 1 ? "Odd" : "Even";
}