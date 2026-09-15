#include <iostream>
using namespace std;

int main() {
    int nominal, kode, lembarLima, LembarSatu, kembalian;
    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "Pilihan minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    cout << "Pilih kode minuman (1-3)\t: ";
    cin >> kode;
    cout << "Masukkan uang anda (Rp)\t \t: ";
    cin >>  nominal;
    cout << endl;
    cout << endl;
    cout << "--- DETAIL TRANSAKSI ---" << endl;
    switch (kode) {
        case 1:
        cout << "Air Mineral" << endl; break;
        case 2:
        cout << "Teh Botol" << endl; break;
        case 3:
        cout <<  "Kopi Susu" << endl; break;
        default:
        cout << "Minuman tidak tersedia" << endl;
        cout << endl;
    }

    switch (kode) {
        case 1:
        if (nominal==4000) {
            cout << "Transaksi berhasil!!" << endl;
        } else if (nominal>4000) {
            kembalian = nominal - 4000;
                cout << "Transaksi Berhasil!! Kembalian anda sebesar " << kembalian << endl;
                cout << "Pecahan kembalian:" << endl;
                cout << "- " << kembalian / 5000 << " Lembar Rp 5.000" << endl;
                cout << "- " << (kembalian % 5000) / 1000 << " Lembar Rp 1.000" << endl;
        } else {
            cout << "Transaksi Gagal! Uang anda kurang " << 4000-nominal << endl;
        }
        break;
        case 2:
        if (nominal==6000) {
            cout << "Transaksi berhasil!!" << endl;
        } else if (nominal>6000) {
            kembalian = nominal - 6000;
                cout << "Transaksi Berhasil!! Kembalian anda sebesar " << kembalian << endl;
                cout << "Pecahan kembalian:" << endl;
                cout << "- " << kembalian / 5000 << " Lembar Rp 5.000" << endl;
                cout << "- " << (kembalian % 5000) / 1000 << " Lembar Rp 1.000" << endl;
        } else {
            cout << "Transaksi Gagal! Uang anda kurang " << 6000-nominal << endl;
        }
        break;
        case 3:
        if (nominal==10000) {
            cout << "Transaksi berhasil!!" << endl;
        } else if (nominal>10000) {
            kembalian = nominal - 10000;
                cout << "Transaksi Berhasil!! Kembalian anda sebesar " << kembalian << endl;
                cout << "Pecahan kembalian:" << endl;
                cout << "- " << kembalian / 5000 << " Lembar Rp 5.000" << endl;
                cout << "- " << (kembalian % 5000) / 1000 << " Lembar Rp 1.000" << endl;
        } else {
            cout << "Transaksi Gagal! Uang anda kurang " << 10000-nominal << endl;
        }
        break;
    } 

    return 0;
}