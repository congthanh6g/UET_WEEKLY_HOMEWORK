#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int array[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> array[i];
	}
	int find ;
	cin >> find;
	sort(array , array + n);
	int low = 0;
	int high = n - 1;
	while(low < high)
	{
		int mid = (low + high) / 2;
		if(array[mid] < find)
		{
			low = mid + 1;
		}
		else if (array[mid] > find)
		{
			high = mid - 1;
		}
		else
		{
			cout << mid;
			break;
		}
	}
}
