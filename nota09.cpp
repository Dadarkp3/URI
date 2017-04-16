#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0)
       cout << "E\n";
    if (n >= 1 && n <= 35)
       cout << "D\n";
    if (n >= 36 && n <= 60)
        cout << "C\n";
    if (n >= 61 && n <= 85)
        cout << "B\n";
    if (n >= 86 && n <= 100)
        cout << "A\n";
    return 0;
}
