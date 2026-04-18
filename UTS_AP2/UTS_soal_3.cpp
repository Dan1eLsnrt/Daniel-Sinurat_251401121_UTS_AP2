#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;
    float rata;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    cin >> nim;

    cout << "Nilai Mata Kuliah:" << endl;
    cout << "Aljabar Linear: ";
    cin >> nilai1;
    cout << "Matematika Diskrit: ";
    cin >> nilai2;
    cout << "Algoritma dan Pemrograman: ";
    cin >> nilai3;

    cout << endl;

    cout << "Aljabar Linear: ";
    if (nilai1 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "Matematika Diskrit: ";
    if (nilai2 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "Algoritma dan Pemrograman: ";
    if (nilai3 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    rata = (nilai1 + nilai2 + nilai3) / 3.0;
    
    cout << "Nilai Rata-rata Semester ini: " << rata;

}