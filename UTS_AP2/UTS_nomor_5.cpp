#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i = 0, jumlah = 0;

    cout << "Masukkan daftar judul buku: ";
    getline(cin, kalimat);

    if (kalimat.length() > 0) {
        do {
            if (kalimat[i] != ' ' && (i == 0 || kalimat[i-1] == ' ')) {
                jumlah++;
            }
            i++;
        } while (i < kalimat.length());
    }

    cout << "Jumlah judul buku: " << jumlah;
}