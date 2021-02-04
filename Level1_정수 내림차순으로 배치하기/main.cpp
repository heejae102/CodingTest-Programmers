#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/*

���� ������������ ��ġ�ϱ�

���� ����
�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�. 
n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���. 
������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.

���� ����
n�� 1�̻� 8000000000 ������ �ڿ����Դϴ�.

����� ��
n			return
118372		873211

*/

/*

<string to data>

string �� �ٸ� ������ Ÿ������ ��ȯ���ִ� �Լ� 

stoi = string to int
stol = string to long int
stoll = string to long long
stof = string to float
stod = string to double
stold = string to long double

stoul = string to unsigned int
stoull = string to unsigned long long

*/

// ������ Ǯ�� 
long long solution(long long n) 
{
	long long answer = 0;

	string str = to_string(n);
	sort(str.begin(), str.end(), greater<char>());
	answer = stoll(str);

	return answer;
}

// ���ο� Ǯ��
long long solution(long long n)
{
	vector<long long> num;
	long long answer = 0;

	while (n > 0) 
	{
		num.push_back(n % 10);
		n /= 10;
	}

	sort(num.begin(), num.end(), greater<int>());

	for (int i = 0; i < num.size(); i++) 
	{
		// 8
		// 87
		// 873
		// 8732 ... 
		answer = answer * 10 + num[i];
	}

	return answer;
}

// ������ Ǯ�� 
long long solution(long long n)
{
	vector<long long> num;
	long long answer = 0;

	// n�� ���� long longŸ���̹Ƿ�, i�� int���� �ƴ� long long���� �����ؾ� 
	// ������ ���� �ڷ����� ������ ����� �ʴ´�. 
	for (long long i = 1; i <= n; i *= 10)
	{
		num.push_back((n / i) % 10);
	}

	sort(num.begin(), num.end());

	for (long long i = 0, mul = 1; i < num.size(); i++, mul *= 10)
	{
		answer += mul * num[i];
	}

	return answer;
}