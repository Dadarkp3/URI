#include <iostream>
using namespace std;

int main()
{
	int consumo, valor;
	cin >> consumo;
	if(consumo <=10) valor = 7;
	if(consumo > 10 && consumo <= 30) valor = 7+ (consumo-10)*1;
	if(consumo>30 && consumo<=100) valor=7+20+(consumo-30)*2;
	if(consumo>100) valor=7+20+140+(consumo-100)*5;
	cout << valor << "\n";
	return 0;
}
