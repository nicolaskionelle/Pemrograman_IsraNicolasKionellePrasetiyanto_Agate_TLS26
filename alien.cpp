#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata1, kata2;
    cin >> kata1 >> kata2;

    string hasil = "";

    int panjang1 = kata1.length();
    int panjang2 = kata2.length();

    // Selisih panjang menentukan pergeseran
    int shift = panjang1 - panjang2;

    for (int i = 0; i < panjang1; i++) {
        int curr = kata1[i] - 'A' + 1;
        int prev = 0;

        // Tentukan posisi kata2 setelah digeser
        int posisiKata2 = i - shift;

        if (posisiKata2 >= 0 && posisiKata2 < panjang2) {
            prev = kata2[posisiKata2] - 'A' + 1;
        }

        int newValue = curr + prev;

        // Jika lebih dari Z, kembali ke A
        while (newValue > 26) {
            newValue -= 26;
        }

        char hurufBaru = 'A' + newValue - 1;
        hasil += hurufBaru;
    }

    cout << "Huruf Baru: " << hasil << endl;

    // Supaya .exe tidak langsung tertutup
    cin.ignore();
    cin.get();

    return 0;
}