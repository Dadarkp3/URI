#include <iostream>
using namespace std;

int main()
{
	int a, b, c, A, B, C, Co, Fra;
	cin >> a >> b >> c >> A >> B >> C;
	Co = a*3 + b;
	Fra = A*3 + B;
	if (Co>Fra) cout << "C\n";
	else if (Fra > Co) cout << "F\n";
	else
	{
		if (c == C) cout << "=\n";
		else if (c > C) cout << "C\n";
		else cout << "F\n";

	}
	



}
