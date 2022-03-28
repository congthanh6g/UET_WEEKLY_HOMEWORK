#include<iostream>
using namespace std;
struct Point {
	int x , y;
};
void nhapPoint(Point& point)
{
 	cin >> point.x >> point.y;
}
void print(Point point)
{
		cout << &point; // truyen bang tham tri thi point la mot ban sao cua point -> khac dia chi
		cout << endl;
}
void print1(Point& point)
{
		cout << &point << endl; // truyen bang tham chieu
		cout << &(point.x) << endl;
		cout << &(point.y) << endl;
		cout << endl;
}
void print2(Point& point)
{
		cout << point.x << " " << point.y;
}
Point mid_point(const Point& point1 , const Point& point2)
{
	Point newPoint;
	newPoint.x = (point1.x + point2.x) / 2;
	newPoint.y = (point1.y + point2.y) / 2;
	return newPoint;
}
int main()
{
	Point newPoint;
	nhapPoint(newPoint);
	Point secPoint;
	nhapPoint(secPoint);
	cout << &newPoint << endl; // 0x6ffe10
	print(newPoint); // 0x6ffdf0
	print1(newPoint); // 0x6ffe10  -  0x6ffe10 - ox6ffe14 ( 4 byte = 1 bien kieu int )
	Point middlePoint = mid_point(newPoint , secPoint);
	print2(middlePoint);
}




