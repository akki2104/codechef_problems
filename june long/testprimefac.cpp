#include <iostream>
using namespace std;
int dupli(string a, string b, long int n)
{
	long int x = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] == a[i] && a[i] != b[i])
			{
				++x;
				break;
			}
		}
	}
	return x;
}
int main()
{
	long int t, n;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		string a, b;
		cin >> n >> a >> b;
		long int x = 0;
		long int y = dupli(b, a, n);
		for (int j = 0; j < n; ++j)
		{
			if (a[j] != b[j])
				++x;
		}
		cout << x - y << "\n";
	}
	return 0;
}