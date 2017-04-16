#include <iostream>
using namespace std;
  
int main() {
    int iniH = 0, fimH = 0, iniM = 0, fimM = 0, hora = 0, min = 0;
  
    cin >> iniH >> iniM >> fimH >> fimM;
  
    min = 60 - iniM;
    iniH ++;
  
    hora = (iniH > fimH) ? (24-iniH) + fimH : fimH - iniH;
    min += fimM;
  
    if(min > 60){
        min -= 60;
        hora ++;
    }
  
    cout << "O JOGO DUROU " << hora << " HORA(S) E " << min << " MINUTO(S)" << endl;
  
    return 0;
}
