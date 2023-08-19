#include <iostream>
using namespace std;

void main()
{
	// 2. 1 ~ 1000까지의 숫자중에서 2의 배수와 3의 배수를 합한 값
	// 그 중에서 6의 배수는 더하지 않음
	// 
	// [더하는 숫자] 2,3,4,8,9,12
	// [xxx] 6
	// 
	// 수도코드
	// 1 ~ 1000숫자를 만든다
	// 2의 배수를 구한다
	// 3의 배수를 구한다
	// 6의 배수를 구한다
	// 2의 배수를 구한 값에서 6의 배수를 구한 값을 뺸다
	// 3의 배수를 구한 값에서 6의 배수를 구한 값을 뺸다
	// 나온 값들을 더한다
	//

	int sum2 = 0;
	int sum3 = 0;
	int sum6 = 0;

	for (int i = 1; i <= 1000; i++)
	{
		if (i % 6 == 0)
		{
			sum6 += i;
		}
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		if (i % 2 == 0)
		{
			sum2 += i;
		}
	}
	cout << sum2 << endl;
	cout << sum3 << endl;
	cout << sum6 << endl;
	cout << "2의 배수 와 3의 배수를 합한 값중 6의 배수를 뺀 값 : " << (sum2 - sum6) + (sum3 - sum6) << endl;
}