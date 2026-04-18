#include <iostream>
using namespace std;

int main() {
    string kalimat, kata;
    int i = 0, jumlah = 0;

    cout << "Masukkan daftar judul buku: ";
    getline(cin, kalimat);

    if (kalimat.length() > 0) {
        do {
            if (kalimat[i] != ' ' && (i == 0 || kalimat[i-1] == ' ')) {
                kata = "";
                kata = kata + kalimat[i];
            }
            else if (kalimat[i] != ' '){
                kata = kata + kalimat[i];
            }
            if ((kalimat[i] == ' '|| i == kalimat.length() -1) && kata != ""){
                jumlah++;
                cout << "judul buku" << jumlah << ": " << kata << endl;
                kata = "";
            }
            i++;
        } while (i < kalimat.length());
    }

    cout << "Jumlah judul buku: " << jumlah;
}