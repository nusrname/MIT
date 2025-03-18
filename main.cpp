#include <iostream>
using namespace std;

void fib(int n)
{
	int prev = 1, prev_prev = 0, t;
	cout << prev_prev << endl << prev << endl;
	for (int i = 2; i < n; i++)
	{
		t = prev_prev;
		prev_prev = prev;
		prev += t;
		cout << prev << endl;
	}
}

int main()
{
	int n;
	cout << "Input count: ";
	cin >> n;
	fib(n);
	cout << "Hello world!" << endl;
}
