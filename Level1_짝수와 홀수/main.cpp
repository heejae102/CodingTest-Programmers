#include<iostream>
using namespace std; 

/*

¦���� Ȧ��

���� ����
���� num�� ¦���� ��� Even�� ��ȯ�ϰ� Ȧ���� ��� Odd�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
num�� int ������ �����Դϴ�.
0�� ¦���Դϴ�.

����� ��
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


// ��Ʈ ������ ����ϱ� 
string solution2(int num) 
{
	return num & 1 ? "Odd" : "Even";
}