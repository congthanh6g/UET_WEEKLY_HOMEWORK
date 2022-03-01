#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp = n;
	cout << n << " ";
	while(cin >> n)
	{
		if (temp == n)
		{
			
		}
		else{
			if (n > 0)
		{
			cout << n << " ";
			temp = n;
		}
		if (n < 0)
		{
			cout << n;
			break;
		}	
		}
	}
}
