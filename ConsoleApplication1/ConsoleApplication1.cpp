#include <iostream>
#include <stdalign.h>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include <queue>
#include <Windows.h>
#include <tchar.h>
#include <chrono>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	string n;
	int k = 0, max = 0, min = 0;
	cin >> n;

	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] == '1')
		{
			k++;
		}
		if (n[i] == '2')
		{
			k--;
		}
		if (k > max)
			max = k;
		if (k < min)
			min = k;
	}



	cout << max - min + 1;

	return 0;
}

