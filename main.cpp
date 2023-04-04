#include <iostream> 
using namespace std;
int main()
{
    int n;
    int a, b, c;
    c = 0;
    a = 0;
    b = 1;
    cout << "n="; cin >> n;
    for (int i = 0; i != n; i++) {
        cout << c << endl;
        c = a + b;
        b = a;
        a = c;

    }
    return 0;
}