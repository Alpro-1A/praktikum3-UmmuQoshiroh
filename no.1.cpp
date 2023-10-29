#include <iostream>

using namespace std;

int main(){
    int angka, nilai;
    cout << "input angka = ";
    cin >> angka;

    if (angka>=90){
        cout << "SELAMAT ANDA MENDAPAT NILAI A" << endl;
    } else if(nilai>=80){
        cout << "SELAMAT ANDA MENDAPAT NILAI B" << endl;
    } else if(nilai>=70){
        cout << "SELAMAT ANDA MENDAPAT NILAI C" << endl;
    } else if(nilai>=60){
        cout << "SELAMAT ANDA MENDAPAT NILAI D" << endl;
    } else if(nilai>=50){
        cout << "SELAMAT ANDA MENDAPAT NILAI E" << endl;
    }


    return 0;}

