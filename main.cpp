#include <iostream> 
using namespace std;

int f(int n)
{
    if (n == 2 || n == 3) return (n - 1);
    return f(n - 1) + f(n - 2);
}

int main()
{
    int n;
    cout << "n="; cin >> n;
    cout << f(n) << " ";
    cout << endl;
    system("pause");
    return 0;
}