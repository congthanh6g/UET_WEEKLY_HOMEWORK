#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
// 1 . Tim lap
//int main()
//{
//	int n;
//	int count = 0;
//	cin >> n;
//	int array[n];
//	for(int i = 0 ; i < n ; i++)
//	{
//		cin >> array[i];
//	}
//	
//	for(int i = 0 ; i < n - 1 ; i++)
//	{
//		for(int j = i + 1 ; j <= n-1 ; j++)
//		{
//			if(array[i] == array[j])
//			{
//				count ++;
//			}
//		}
//	}
//	if(count > 0)
//	{
//		cout << "YES";
//	}
//	else
//	{
//		cout << "NO";
//	}
//} 

// 2. Xau doi xung
//int main()
//{
//	string s;
//	cin >> s;
//	int first = 0;
//	int last = s.size() - 1;
//	int count = 0;
//	while(last > first)
//	{
//		if(s[first] != s[last])
//		{
//			cout << "No";
//			count ++ ;
//			break;
//		}
//		first ++;
//		last --;
//	}
//	if (count == 0)
//	{
//		cout << "Yes";
//	}
//}

// 3. So doi guong
//int sodoiguong(int n)
//{
//	int res = 0;
//	while(n != 0)
//	{
//		int lastDigit = n % 10;
//		res = res * 10 + lastDigit ; 
//		n = n / 10;	
//	}	
//	return res;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int array[n][2];
//	for (int i = 0 ; i < n ; i ++)
//	{
//		for (int j = 0 ; j < 2 ; j ++)
//		{
//			cin >> array[i][j];
//		}
//	}
//	for(int k = 0 ; k < n ; k++)
//	{
//		int count = 0;
//		for (int m = array[k][0] ; m <= array[k][1] ; m++)
//		{
//			if(m == sodoiguong(m))
//			{
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//}


//int main()
//{
//	int m,n;
//	cin >> m >> n;
//	char min[m][n];
//	
//	for(int i = 0 ; i < m ; i ++)
//	{
//		for(int j = 0 ; j < n ; j++)
//		{
//			cin >> min[i][j];
//		}
//	}
//	
//	for(int i = 0 ; i < m ; i ++)
//	{
//		int count = 0;
//		for(int j = 0 ; j < n ; j++)
//		{
//			if(min[i][j] != '*')
//			{
//				for(int k = i ; k <= i + 2 ; k++)
//				{
//					for(int l = j - 1 ; l <= j + 2 ; l++)
//					{
//						if(min[k][l] == '*')
//						{
//							count++;
//						}
//					}
//				}
//				cout << count << " ";
//			}
//			else
//			{
//				cout << "*" << " ";
//			}
//		}
//		cout << endl;
//	}
//}

// Spiral matrix
//const int MAX = 100;
//void spiralFill(int m , int n , int a[][MAX])
//{
//	int value = 1;
//	
//	/*
//		k = starting row index
//		m = ending row index
//		l = starting column index
//		n = ending column index
//	*/
//	
//	int k = 0 , l = 0;
//	while(k < m && l < n)
//	{
//		// print first row
//		for(int i = l ; i < n ; i++)
//		{
//			a[k][i] = value++;
//		}
//		k++;
//		
//		// print last column
//		for(int i = k ; i < m ; i++)
//		{
//			a[i][n-1] = value++; 
//		}
//		n--;
//		
//		// print last row from remaining rows
//		if(k < m)
//		{
//			for(int i = n - 1; i >= 1 ; i--)
//			{
//				a[m-1][i] = value++;
//			}
//			m--;
//		}
//		
//		//print first column from remaining columns
//		if(l < n)
//		{
//			for(int i = m - 1 ; i >= k ; i--)
//			{
//				a[i][l] = value++;
//			}
//		}
//	}
//}
//int main()
//{
//	int m ,n ;
//	cin >> m >> n;
//	int a[MAX][MAX];
//	spiralFill(m , n , a);
//	for(int i = 0 ; i < m ; i++)
//	{
//		for(int j = 0 ; j < n ; j++)
//		{
//			cout << setw(2) << right << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}


// 5. Bubble sort
//int main()
//{
//	int n;
//	cin >> n;
//	int array[n];
//	srand(time(NULL));
//	for(int i = 0 ; i < n ; i ++)
//	{
//		array[i] = rand() % 100;	
//	}
//	
//	// bubble sort
//	for(int i = 0 ; i < n - 1 ; i++)
//	{
//		bool swapped = false;
//		for(int j = 0 ; j < n; j++)
//		{
//			if(array[j] > array[j+1])
//			{
//				int temp = array[j];
//				array[j] = array[j+1];
//				array[j+1] = temp;
//				swapped = true;
//			}
//		}
//		if(!swapped)
//		{
//			break;
//		}
//	}
//	
//	
//	
//	for(int i = 0 ; i < n ; i ++)
//	{
//		cout << array[i] << " ";	
//	}	
//} 

struct goods {
	string name;
	double price;
	int quantity;
};
void nhapGoods(goods &Gd)
{
	cin >> Gd.name >> Gd.price >> Gd.quantity;
}
void nhapMang(goods arr[] , int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		nhapGoods(arr[i]);
	}
}

double tongTien(int quantity , double price)
{
	return quantity * price;
}

bool checkTien(double money , goods array[] , int n)
{
	double res ;
	for(int i = 0 ; i < n ; i++)
	{
		res += array[i].quantity * array[i].price;
	}
	if (res <= money)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void inMang(goods arr[] , int n)
{
	for (int i = 0 ; i < n ; i ++)
	{
		cout << arr[i].name << " " << arr[i].price << " " << arr[i].quantity;
		cout << endl;
	}
}

void SapXepMang(goods arr[] , int n)
{
	for(int i = 0 ; i < n - 1 ; i++)
	{
		if(arr[i].name.substr(0,1) > arr[i+1].name.substr(0,1))
		{
			goods temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
}
goods GiaThanhReNhat(goods arr[] , int n)
{
	double min = arr[0].price;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		if(arr[i].price > arr[i+1].price)
		{
			min = arr[i+1].price;
		}
	}
	
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i].price == min)
		{
			return arr[i];
			break;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	goods array[n];
	nhapMang(array , n);
	double money;
	cin >> money;
	SapXepMang(array , n);
	inMang(array , n);
	cout << endl;
	if(checkTien(money, array , n))
	{
		cout << "YES" <<endl;
		inMang(array , n);
	}
	else
	{
		double res ;
		for(int i = 0 ; i < n ; i++)
		{
			res += array[i].quantity * array[i].price;
			if(money > res)
			{
			cout << array[i].name << " " << array[i].price << " " << array[i].quantity;
			cout << endl;
			money -= res;
			cout << money << endl;
			res = 0;
			}
			else
			{
				break;
			}
		}
		double tienThua = money;
		// mua mat hang co gia thanh re nhat
		goods Gd = GiaThanhReNhat(array , n);
		int count = 0;
		while(money > 0)
		{
			money = money - Gd.price;
			count++;
		}
		if(count > 1)
		{
			cout << Gd.name << " " << Gd.price << " " << count - 1;
	    }
	    
	}
}

