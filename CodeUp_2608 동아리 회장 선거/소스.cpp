#include <iostream>
using namespace std;

char ox[2] = { 'O', 'X' };
string result;
void f(int n)
{
	if (n == 0)
	{
		cout << result << endl;
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		result.push_back(ox[i]);
		f(n - 1);
		result.pop_back();
	}
}
int main()
{
	int n;
	cin >> n;
	f(n);
	return 0;
}