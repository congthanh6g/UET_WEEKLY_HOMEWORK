#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n <= 100)
	{
		cout << 12000 * n;
	}
	else if (n <= 150)
	{
		cout << 12000 * 100 + 16000 * (n-100);
	}
	else if (n <= 200)
	{
		cout << 12000 * 100 + 16000 * 50 + 20000 * (n - 150);
	}
	else
	{
		cout << 12000 * 100 + 16000 * 50 + 20000 * 50 + 25000 * (n-200);
	}
}
