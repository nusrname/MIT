#include <iostream>
using namespace std;

int fib(int n) 
{
	if (n <= 2) return 1;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	cout << "Input count: ";
	cin >> n;
	cout << fib(n) << endl;
	cout << "Hello world!" << endl;
}
