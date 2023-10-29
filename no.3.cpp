#include <iostream>

using namespace std;

int main()
{
    int pil, p, l, a, t, s, luas;//p=panjang, l=lebar, a=alas, =tinggi, s=sisi
    cout << "program switch-case" << endl;
    cout << "===================" << endl;
    cout << "menghitung luas bangun datar" << endl;
    cout << "1. persegi" << endl;
    cout << "2. persegi panjang" << endl;
    cout << "3. segitiga" << endl;
    cout << "mohon untuk memilih salah satu" << endl;
    cin>> pil;

    switch(pil)
    {
    case 1:
        cout << "menghitung luas persegi" << endl;
        cout << "masukan sisi: "; cin >> s;
        luas = s*s;
        cout << "luas persegi = " << luas;
        break;

    case 2:
        cout << "menghitung luas persegi panjang" << endl;
        cout << "masukan panjang: "; cin >> p;
        cout << "masukan lebar: "; cin >> l;
        luas = p*l;
        cout << "luas persegi panjang = " << luas;
        break;

    case 3:
        cout << "menghitung luas segitiga" << endl;
        cout << "masukan alas: "; cin >> a;
        cout << "masukan tinggi: "; cin >> t;
        luas = a*t/2;
        cout << "luas segitiga = " << luas;
        break;
    default:
        cout << "thanks" << endl;
        exit(0);


    }
cout << endl << endl;
    return 0;
}
