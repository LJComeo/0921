#include <iostream>
#include <vector>
using namespace std;

void PrintVector(const vector<int>& v)
{
	vector<int>::const_iterator it = v.cbegin();
	while (it != v.cend())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}


int ___main()
{
	//vector<int> v;
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	//v.push_back(4);
	//PrintVector(v);
	////v.insert(v.begin(), 'a');
	////v.insert(v.begin(), 5, 1);
	//v.insert(v.begin(), v.rbegin(), v.rend());

	vector<int> vi;
	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(3);
	vi.push_back(3);
	vi.push_back(3);
	vi.push_back(3);
	vi.push_back(4);
	vi.push_back(3);
	vi.push_back(3);
	vi.push_back(5);
	vi.push_back(3);
	vi.push_back(3);
	vi.push_back(3);
	vi.push_back(5);
	

	//vi.erase(vi.begin());
	//vi.erase(vi.begin(), vi.end());
	for (int i = 0; i < vi.size(); i++)
	{
		if (vi[i] == 3)
		{
			vi.erase(vi.begin() + i);
			i--;
		}
	}
	PrintVector(vi);
	return 0;
}