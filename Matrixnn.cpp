#include<iostream>
#include<queue>
using namespace std;
void daomang(int array[] , int n)
{
	int temp = array[0];
	for (int i = 0 ; i < n - 1 ; i++)
	{
		array[i] = array[i+1];
	}
	array[n-1] = temp;
}
int main()
{
	int n;
	cin >> n;
	int array[n];
	for (int i = 0 ; i < n ; i++)
	{
		array[i] = i + 1;
	}
	
	for (int k = 0 ; k < n / 2 ; k++)
	{
		for (int l = 0 ; l < n ; l++)
		{
			cout << array[l] << " ";
		}
		daomang(array , n);
		cout << endl;
	}
}
