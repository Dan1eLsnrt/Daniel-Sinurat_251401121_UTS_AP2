#include <iostream>
using namespace std;

int main() {
    string mantra;
    int i = 0, jumlahVokal = 0;
    char huruf;

    cout << "Masukkan Mantra : ";
    getline(cin, mantra);

    while (i < mantra.length()) {
        huruf = tolower(mantra[i]);

        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
            jumlahVokal++;
        }

        i++;
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal";
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal.";
    }

}