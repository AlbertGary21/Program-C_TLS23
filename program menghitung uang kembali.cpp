#include <iostream>

using namespace std;

int main() {
    double totalHarga;
    double uangDibayarkan;
    double kembalian;

    // Meminta pengguna memasukkan total harga dan uang yang dibayarkan
    cout << "Masukkan total harga: ";
    cin >> totalHarga;
    cout << "Masukkan uang yang dibayarkan: ";
    cin >> uangDibayarkan;

    // Menghitung kembalian
    kembalian = uangDibayarkan - totalHarga;

    // Memproses kembalian dalam pecahan
    int uang20ribu, uang10ribu, uang5ribu, uang2ribu, uang1ribu, uang500, uang200, uang100;
    uang20ribu = kembalian / 20000;
    kembalian -= uang20ribu * 20000;

    uang10ribu = kembalian / 10000;
    kembalian -= uang10ribu * 10000;

    uang5ribu = kembalian / 5000;
    kembalian -= uang5ribu * 5000;

    uang2ribu = kembalian / 2000;
    kembalian -= uang2ribu * 2000;

    uang1ribu = kembalian / 1000;
    kembalian -= uang1ribu * 1000;

    uang500 = kembalian / 500;
    kembalian -= uang500 * 500;

    uang200 = kembalian / 200;
    kembalian -= uang200 * 200;

    uang100 = kembalian / 100;
    kembalian -= uang100 * 100;

    // Menampilkan kembalian dalam pecahan
    cout << "Kembalian: " << endl;
    cout << "Pecahan 20 ribu: " << uang20ribu << " lembar" << endl;
    cout << "Pecahan 10 ribu: " << uang10ribu << " lembar" << endl;
    cout << "Pecahan 5 ribu: " << uang5ribu << " lembar" << endl;
    cout << "Pecahan 2 ribu: " << uang2ribu << " lembar" << endl;
    cout << "Pecahan 1 ribu: " << uang1ribu << " lembar" << endl;
    cout << "Pecahan 500: " << uang500 << " koin" << endl;
    cout << "Pecahan 200: " << uang200 << " koin" << endl;
    cout << "Pecahan 100: " << uang100 << " koin" << endl;

    return 0;
}
