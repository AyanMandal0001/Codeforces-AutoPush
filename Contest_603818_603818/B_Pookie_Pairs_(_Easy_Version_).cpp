#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector < int > v;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v.push_back(k);
	}
	map<int, int> mp;
	for (int i = 1; i <= n; i++)
	{
		mp[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int k = 1;
			while (k <= n)
			{
				if (abs(v[j] - v[i]) % k == 0)
					mp[k]++;
				k++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << mp[i + 1] << " ";
	}
	return 0;
}