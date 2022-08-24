#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void bubbleSort(vector<int> &v, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (v[j] > v[j + 1])
			{
				swap(v[j], v[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	bubbleSort(v, n);

	for (auto x : v)
	{
		cout << x << " ";
	}
}