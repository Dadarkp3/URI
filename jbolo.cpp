#include <iostream>
using namespace std;

int main()
{
	int bolo, ovos, leite, trigo;
	cin >> trigo >> ovos >> leite;
	bolo = trigo/2;
	if(ovos/3 < bolo) bolo = ovos/3;
	if(leite/5 < bolo) bolo = leite/5;
	cout << bolo <<"\n";
	return 0;
}
