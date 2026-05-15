#include <iostream>
#include <cmath>
using namespace std;
int przypadki;
double a, b;
int main()
{
    cout << "Liczba przypadkow do rozwarzenia: ";
    cin >> przypadki;
    for(int i=0; i<przypadki; i++){
        cout << "Podaj dwie liczby: ";
        cin >> a >> b;
        cout << (static_cast<int>(pow(a,b))%10) <<endl;
    }
}
//static_cast<int> zwarac aint
