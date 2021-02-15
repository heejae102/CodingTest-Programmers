#include<iostream>
#include<vector>
using namespace std; 

/*

<최대공약수와 최소공배수>

문제 설명
두 수를 입력받아 두 수의 최대공약수와 최소공배수를 반환하는 함수, 
solution을 완성해 보세요. 
배열의 맨 앞에 최대공약수, 그다음 최소공배수를 넣어 반환하면 됩니다. 
예를 들어 두 수 3, 12의 최대공약수는 3, 최소공배수는 12이므로 
solution(3, 12)는 [3, 12]를 반환해야 합니다.

제한 사항
두 수는 1이상 1000000이하의 자연수입니다.

입출력 예
n		m		return
3		12		[3, 12]
2		5		[1, 10]

입출력 예 설명
입출력 예 #1
위의 설명과 같습니다.

입출력 예 #2
자연수 2와 5의 최대공약수는 1, 최소공배수는 10이므로 [1, 10]을 리턴해야 합니다.

*/

/*

* 최대공약수(GCD : Greatest CommonDivisor)

* 최소공배수(LCM : Lowesr Common Multiplier)

<유클리드 호제법>

- 최대공약수를 구하기 위한 알고리즘
- 숫자 a, b의 최대공약수를 구하기

r = a를 b로 나눈 나머지로 설정하고 a, b의 값을 이동시킨다.

a    b    r

152	 68   20

68   20   8

20   8    4

8    4       -> 나누어 떨어짐

--> 4가 최대공약수임


<최대공약수 구하는 공식> (※ 전제 : a > b) 

int r;

while (b != 0)
{
	r = a % b;
	a = b;
	b = r;
}

return a;


<최소공배수 구하는 공식> 

return (a * b) / 최대공약수; 

*/

// 새로운 풀이 
vector<int> solution(int n, int m)
{
	vector<int> answer;

	int temp = n;
	if (n < m)
	{
		n = m;
		m = temp;
	}

	// 최대공약수는 반드시 입력된 수의 범위 내에 존재하므로, 
	// 가장 큰 수부터 시작해서 -1 하면서 두 수 모두 나눠서 0으로 떨어지는지 확인 
	for (int i = n; i > 0; i--)
	{
		if (n % i == 0 && m % i == 0)
		{
			answer.push_back(i);
			answer.push_back(n * m / i);
			break;
		}
	}

	return answer;
}

// 최초의 풀이 
int gcd(int a, int b)	// 최대공약수 구하는 공식 
{
	int temp;

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int lcm(int a, int b)	// 최소공배수 구하는 공식 
{
	return (a * b) / gcd(a, b);
}

vector<int> solution(int n, int m)
{
	vector<int> answer;

	// 수정된 풀이 
	int temp = n;
	if (n < m)
	{
		n = m;
		m = temp;
	}

	answer.push_back(gcd(n, m));
	answer.push_back(lcm(n, m));

	//if (n > m)
	//{
	//	answer.push_back(gcd(n, m));
	//	answer.push_back(lcm(n, m));
	//}
	//else
	//{
	//	answer.push_back(gcd(m, n));
	//	answer.push_back(lcm(m, n));
	//}

	return answer;
}

int main()
{
	return 0;
}