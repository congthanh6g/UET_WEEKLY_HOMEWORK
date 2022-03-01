#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int bh = n * 0.09;
	cout << bh << endl;
	int ans1 = n - bh;
	cout << ans1 << endl;
	int thue;
	if (ans1 <= 1000000)
	{
		thue = 0;
	}
	else if (ans1 <= 1500000)
	{
		thue = (ans1 - 1000000) * 0.1;
	}
	else if (ans1 <= 2000000)
	{
		thue = 500000 * 0.1 + (ans1 - 1500000) * 0.15;
	}
	else
	{
		thue = 500000 * 0.1 + 500000 * 0.15 + (ans1 - 2000000) * 0.2;
	}
	cout << ans1 - thue;
}
