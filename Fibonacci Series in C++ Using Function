#include <iostream>
using namespace std;
int fibo(int n);
int main()
{
	int n, i = 0;
	cout << "\nEnter the nth term of fibonacci series in C++ using function";
	cin >> n;
	cout << "\nfibonacci Series in C++ is Given Below\n\n";

	while (i < n)
	{
		cout << " " << fibo(i);
		i++;
	}

	cout << " \n\n";
	return 0;
}

int fibo(int n)
{
	if ((n == 1) || (n == 0))
	{
		return (n);
	}
	else
	{
		return (fibo(n - 1) + fibo(n - 2));
	}
}
