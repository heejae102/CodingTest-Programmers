#include<iostream>
#include<cmath>
using namespace std; 

/*

<정수 제곱근 판별>

문제 설명
임의의 양의 정수 n에 대해, n이 어떤 양의 정수 x의 제곱인지 아닌지 판단하려 합니다.
n이 양의 정수 x의 제곱이라면 x+1의 제곱을 리턴하고, 
n이 양의 정수 x의 제곱이 아니라면 -1을 리턴하는 함수를 완성하세요.

제한 사항
n은 1이상, 50000000000000 이하인 양의 정수입니다.

입출력 예
n		return
121		144
3		-1

입출력 예 설명
입출력 예#1
121은 양의 정수 11의 제곱이므로, (11+1)를 제곱한 144를 리턴합니다.

입출력 예#2
3은 양의 정수의 제곱이 아니므로, -1을 리턴합니다.

*/

/*

<sqrt 함수>

매개변수 x로 들어온 숫자에 루트를 씌워서 계산한 값을 반환해주는 함수.
즉, 루트 x를 구해주는 함수. (제곱근을 구해주는 함수)

- 헤더파일 : C언어 <math.h> / C++ <cmath>

- C언어에서의 함수 원형 : double sqrt(double x)

- C++11에서의 함수 원형

1. double			sqrt(double x)

2. float			sqrt(float x)

3. long double		sqrt(long double x)

4. double			sqrt(T x) // T는 template을 의미 


- sqrt 함수 사용법

1) 루트 9를 구한다고 했을때
-> sqrt(9)

2) 루트 85.4를 구한다고 했을때
-> sqrt(85.4)

*/

/*

<pow 함수>

base가 되는 숫자의 n 제곱을 구하는 함수.
(base의 n승이라고도 표현하고, 기호로는 base ^ n 으로도 표현.)

- 헤더파일 : C언어 <math.h> / C++ <cmath>

- C언어에서의 함수 원형 : double pow(double base, double n)

- C++11에서의 함수 원형

1. double			pow(double base, double n)

2. float			pow(float base, float n)

3. long double		pow(long double base, long double n)

double	pow(double x, double y);
float	powf(float x, float y);
long	double powl(long double x, long double y);

(C++에서는 pow로 사용해도 자동으로 데이터 변환이 되어 문제가 없지만, 
C에서는 오류가 발생할 수 있으므로 특정 데이터 형으로 입력 및 반환할 경우
해당 데이터 형식에 알맞은 형태의 함수를 사용할 것.)


- pow 함수 사용법

1) 10의 2제곱을 구한다고 했을 때.
-> pow(10, 2)
// 암묵적 형변환에 의해서 10은 (float)10 이런식으로 들어갈 것 입니다.

2) 2.2의 3.3 제곱을 구한다고 했을 때.
-> pow(2.2, 3.3)

*/

// 개선된 풀이
// 입력되는 값에 상관없이 속도가 일관적. 
long long solution(long long n)
{
	// 제곱근 구하기 
	long long squareRoot = sqrt(n);

	// 해당 제곱근을 다시 제곱했을 때 값이 n일 경우(정수 제곱근)
	// (제곱근 + 1)을 제곱한 값을 리턴하고, 아닐 경우 -1 리턴  
	return (pow(squareRoot, 2) == n) ? pow(squareRoot + 1, 2) : -1;
}

// 최초의 풀이 
// 1부터 입력되는 숫자까지 돌면서 검사해야하므로 n 값에 따라 속도가 천차만별. 
long long solution(long long n)
{
	// ※ i 값을 0으로 설정하지 않도록 조심할 것. 
	// 항상 나누는 값에는 0이 포함되어서는 안된다. 
	for (long long i = 1; i <= n; i++)
	{
		// 나누었을 때 나머지 값이 0이면서, 나눈 값과 몫이 일치하는 수 (제곱근)
		if (n % i == 0 && n / i == i) return pow(i + 1, 2);
	}

	return -1;
}

int main()
{
	return 0;
}