#include<iostream>
using namespace std;
void mang(int array[] , int n)
{
	int *nums = array;
	cout << array << " " << &array[0];	
} 
int main()
{
	int array[3] = {0, 1 , 2};
	mang(array,3);
}
