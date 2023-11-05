#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int cnt, num;

	cin >> cnt;

	vector<int> number;

	for(int i=0; i<cnt; i++)
	{
		cin >> num;
		
		number.push_back(num);
	}

	sort(number.begin(),number.end());

	for(int j=0; j<cnt; j++)
	{
		cout << number[j] << endl;
	}

}