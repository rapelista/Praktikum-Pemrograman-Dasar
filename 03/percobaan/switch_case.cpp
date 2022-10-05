#include <iostream>
using namespace std;

int main() {
    int uang, pilihan;
    
    cout << "Tipe Mata uang yang tersedia" << endl
         << "1. Dolar - USA (kurs USD 1 = Rp13.000,-)" << endl
         << "2. Yen - Jepang (kurs JPY 1 = Rp4.000,- )" << endl
         << "3. Poundsterling - Inggris (kurs 1 Poundsterling = Rp10.500,-)" << endl
         << "4. Euro - MEE (kurs EUR 1 = Rp8.900,-)" << endl
         << "5. Riyal - Arab Saudi (kurs 1 Riyal = Rp1.100,-)" << endl
         << "Masukkan jenis mata uang Anda: ";
    cin >> pilihan;
    
    switch (pilihan) {
        case 1 :
            cout << "Data diterima, jenis valuta Anda: Dolar USA" << endl
                 << "Masukkan banyak uang Anda (dalam dolar): ";
            cin >> uang;
            cout << "Uang yang diterima: Rp" << uang * 13000 << endl;
            break;
        case 2 :
            cout << "Data diterima, jenis valuta Anda: Yen Jepang" << endl
                 << "Masukkan banyak uang Anda (dalam yen): ";
            cin >> uang;
            cout << "Uang yang diterima: Rp" << uang * 4000 << endl;
            break;
        case 3 :
            cout << "Data diterima, jenis valuta Anda: Poundsterling Inggris" << endl
                 << "Masukkan banyak uang Anda (dalam poundsterling): ";
            cin >> uang;
            cout << "Uang yang diterima: Rp" << uang * 10500 << endl;
            break;
        case 4 :
            cout << "Data diterima, jenis valuta Anda: Euro MEE" << endl
                 << "Masukkan banyak uang Anda (dalam euro): ";
            cin >> uang;
            cout << "Uang yang diterima: Rp" << uang * 8900 << endl;
            break;
        case 5 :
            cout << "Data diterima, jenis valuta Anda: Riyal Arab Saudi" << endl
                 << "Masukkan banyak uang Anda (dalam riyal): ";
            cin >> uang;
            cout << "Uang yang diterima: Rp" << uang * 1100 << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia." << endl;
    }

		return 0; 
}
