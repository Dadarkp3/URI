#include <iostream>
using namespace std;

int main()
{
	int d, a, b, c;
	cin >> d >> a >> b >> c;
	if(a < d || b < d || c < d)
	{
		cout << "N\n";	
	}
	else
	{
		cout << "S\n";
	}
	return 0;
}
