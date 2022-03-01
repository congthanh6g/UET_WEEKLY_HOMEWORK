#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
//	for (int i = 0 ; i < n ; i++)
//	{
//		for (int space = i ; space > 0 ; space--)
//		{
//			cout << " ";
//		}
//		for (int sao = i ; sao < n ; sao ++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}  code ve pyramid nguoc (C.2)


//	int sao = 1;
//	for (int i = 0 ; i < n ; i++)
//	{
//		for (int space = n ; space > i + 1 ; space --)
//		{
//			cout << " ";
//		}
//		for (int star = 1 ; star <= sao ; star++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//		sao += 2;
//	}  pyramid

//	int sao = 1 + 2 * (n - 1);
//	for(int i = 0 ; i < n ; i ++)
//	{
//		for(int space = i ; space > 0 ; space--)
//		{
//			cout << " ";
//		}
//		for(int star = 1 ; star <= sao ; star++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//		sao = sao - 2;
//	} -> pyramid nguoc
}
