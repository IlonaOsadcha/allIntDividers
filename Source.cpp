#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	vector<int> divisors;
	for (int i = 1; i <= x/2; ++i)
	{
		if (x%i == 0)
		{
			divisors.push_back(i);
		}
	}
	divisors.push_back(x);

	for (const int& i : divisors)
	{
		cout << i << endl;
	}
	system("pause");
	return 0;
}