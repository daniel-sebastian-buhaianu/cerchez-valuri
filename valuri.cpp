#include <iostream>
#define NMAX 50
using namespace std;
void valuri(int n, int v[]);
int main()
{
	int v[2*NMAX], n, i;
	cout << "n = "; cin >> n;
	valuri(n, v);
	for (i = 0; i < 2*n; i++)
	{
		cout << v[i] << ' ';
	}
	cout << '\n';
}
void valuri(int n, int v[])
{
	v[0] = 1;
	v[1] = 2*n;
	for (int i = 2; i < 2*n; i++)
	{
		v[i] = i%2 ? v[i-2]-2 : v[i-2]+2;
	}
}
