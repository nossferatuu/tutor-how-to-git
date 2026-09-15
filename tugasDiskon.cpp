#include <iostream>
using namespace std;

int main() {
    int nominal, diskon;

    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukkan total belanja (Rp) : ";
    cin >> nominal;
    cout << endl;
    cout << endl;
    cout << "--- Ringkasan Pembayaran ---" << endl;
    if (nominal<100000) {
        diskon = nominal*0;
        cout << "Diskon\t \t: " << diskon << endl;
        cout << "Total Bayar\t: " << nominal-diskon;
    } else if (100000<=nominal<=299999) {
        diskon = nominal*0.1;
        cout << "Diskon\t \t: " << diskon << endl;
        cout << "Total Bayar\t: " << nominal-diskon;
    } else if (nominal>=300000) {
        diskon = nominal*0.2;
        cout << "Diskon\t \t: " << diskon << endl;
        cout << "Total Bayar\t: " << nominal-diskon;
    }
    return 0;
}