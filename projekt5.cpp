#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    for (int i=15; i>0; i--)
    {
        Sleep(10000);
        cout << i << endl;
    }
    cout << "jebut" ;
    return 0;
}