#include<iostream>
#include<vector>
using namespace std; 

/*

<소수 찾기>

문제 설명
1부터 입력받은 숫자 n 사이에 있는 소수의 개수를 반환하는 함수, solution을 만들어 보세요.

소수는 1과 자기 자신으로만 나누어지는 수를 의미합니다.
(1은 소수가 아닙니다.)

제한 조건
n은 2이상 1000000이하의 자연수입니다.

입출력 예
n		result
10		4
5		3

입출력 예 설명
입출력 예 #1
1부터 10 사이의 소수는 [2,3,5,7] 4개가 존재하므로 4를 반환

입출력 예 #2
1부터 5 사이의 소수는 [2,3,5] 3개가 존재하므로 3를 반환

*/

// 개선된 풀이2
// 시간초과 발생하지 않고 문제 해결. 
int solution(int n)
{
	int answer = 0;
	// index n까지 검사할 수 있도록 n + 1개의 원소를 0으로 초기화 
	vector<int> prime(n + 1, 0);

	for (int i = 2; i <= n; i++)
	{
		// -1이 대입된 원소(어떠한 숫자의 배수)는 건너뛰기 
		if (prime[i] == -1) continue;

		// 특정 숫자의 배수가 아닌 경우(소수)에만 count++ 
		answer++;

		// 특정 숫자의 배수가 아닌 숫자가 들어오고, 해당 수의 배수에 전부 -1 대입 
		for (int j = i; j <= n; j += i)
		{
			prime[j] = -1;
		}
	}

	return answer;
}

// 개선된 풀이1
// 검사해야 하는 수를 반 정도 줄여서 퍼포먼스를 올렸으나, 
// 여전히 효율성 검사에서 '시간 초과' 발생. 
int solution(int n)
{
	int answer = 0;

	for (int i = 2; i <= n; i++)
	{
		answer++;
		int squareRoot = (int)sqrt(i);

		// 제곱근은 수의 경계가 되기 때문에, (제곱근을 기준으로 같은 수를 검사)
		// 2부터 sqrt(num)까지의 루프만 반복해도 소수인지 판별 가능 
		for (int j = 2; j <= squareRoot; j++)
		{
			if (i % j == 0)
			{
				answer--;
				break;
			}
		}
	}

	return answer;
}

// 최초의 풀이 
// 작동자체는 하지만, 큰 숫자가 입력될 경우 반복문 연산이  
// 너무 오래 걸려서 '시간 초과' 발생. 
int solution(int n)
{
	int answer = 0;

	// 숫자 1은 소수가 아니므로 숫자 2부터 시작 
	for (int i = 2; i <= n; i++)
	{
		answer++;

		// 소수는 숫자 1과 자기 자신으로만 나누어 떨어지는 수이므로 
		// 해당 조건은 생략하여 (2)부터 시작하여 (자기 자신 -1) 까지만 검사 
		// 1과 자기 자신을 제외한 수로 나누었을 때 나머지가 0일 경우 
		// 소수가 아니라는 의미이므로 count를 -1하고 break; 
		for (int j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				answer--;
				break;
			}
		}
	}

	return answer;
}

int main()
{
	return 0;
}