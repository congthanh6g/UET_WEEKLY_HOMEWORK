#include<iostream>
#include<math.h>
using namespace std;
//bool checkNT(int n)
//{
//	if(n < 2)
//	{
//		return false;
//	}
//	for(int i = 2 ; i <= sqrt(n) ; i++)
//	{
//		if(n % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 2 ; i <= n ; i++)
//	{
//		if(checkNT(i))
//		{
//			cout << i << " ";
//		}
//	}
//}


int findgcd(int a , int b)
{
    if(a == 0 || b == 0)
    {
        return a + b;
    }
    while(a != b)
    {
        if ( a > b )
        {
            a = a - b;
        }
        if ( b > a )
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int a , b;
    cout << "Moi nhap 2 so";
    cin >> a >> b;
    if(findgcd(a , b) == 1)
    {
        cout << "NToCungNhau";
    }
    else
    {
        cout << "KNtoCungNhau";
    }
}



void pyramid(int n)
{
    int star = 1;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            cout << " ";
        }
        for(int k = star ; k > 0  ; k--)
        {
            cout << "*";
        }
        cout << endl;
        star += 2;
    }
}
int main()
{
    int n ;
    cin >> n;
    pyramid(n);
}


// #include<iostream>
#include<math.h>
#include<cstdlib>
#include<time.h>
#include<vector>
#define MAX 20
using namespace std;

int Bool[MAX] = {0}; // danh dau chua co phan tu nao 
int A[MAX]; // luu hoan vi vao mang A
int n;
void xuat()
{
    for(int i = 1 ; i <= n ; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void HoanVi(int k)
{
    for(int i = 1 ; i <= n ; i++)
    {
        if(!Bool[i])
        {
            A[k] = i;
            Bool[i] = 1;
            if(k == n)
            {
                xuat();
            }
            else
            {
                HoanVi(k+1);
            }
            Bool[i] = 0;
        }
    }
}
int main()
{
    cout << "Nhap n" ;
    cin >> n;
    HoanVi(1);
}


//


