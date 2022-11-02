#include<iostream>

#include<string>

#include<iomanip>

using namespace std;

int main() {
	int a, b = 0, c = 1, next;

start:
	cout << "Enter the number of elements 2-100:  ";
	cin >> a;

	if (a >= 2 && a < 101)
	{
		cout << "Fibonacci Series: " << " ";
		for (int i = 0; i < a; i++)
		{
			cout << b << " ";
			next = b + c;
			b = c;
			c = next;
		}


	}
	else
		goto start;

}
