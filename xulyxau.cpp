#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct String{
	int n;
	const char* mychar ;
	String(const char* word)
	{
		mychar = new char[100];
		mychar = word;
		n = sizeof(mychar) / sizeof(mychar[0]);
	}
	void append(const char* word)
	{
		char *s = new char[strlen(word)+strlen(mychar)+1];
        strcpy(s,mychar);
        strcat(s,word);
		n = sizeof(s) / sizeof(s[0]);
		cout << s;
	}
};
void print(String &hello)
{
	cout << hello.mychar << " " << hello.n << endl;
}
void Destructor(String &hello)
{
	delete[] (hello.mychar);
}
int main()
{
	String hello("Hello");
	String hi("hi");
	hello.append(hi.mychar);
	
	Destructor(hello);
}
