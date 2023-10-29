#include <iostream>

using namespace std;

int main(){
// mencari bilangan terbesar
// dari 3 buah bilangan

    int a, b, c;
    cout << "bilangan 1 : ";
    cin >> a;
    cout << "bilangan 2 : ";
    cin >> b;
    cout << "bilangan 3 : ";
    cin >> c;
    cout << "bilangan terbesar : ";
    if (a>b && a>c)
        cout << a << endl;
    else if (b>a && b>c)
        cout << b << endl;
    else if (c>b && c>a)
        cout << c << endl;


    return 0;
}
