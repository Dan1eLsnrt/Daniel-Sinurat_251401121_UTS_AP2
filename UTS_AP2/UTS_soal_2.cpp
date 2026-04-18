    #include <iostream>
    using namespace std;

    int main() {
        string biner;
        int desimal = 0;
        int pangkat = 1;
        int i, nilai;
        char digit;
        
        cout << "Input kode biner : ";
        cin >> biner;

        for (i = biner.length() - 1; i >= 0; i--) {
            digit = biner[i];

            if (digit != '0' && digit != '1') {
                break;
            }

            int nilai = digit - '0';
            desimal = desimal + (nilai * pangkat);
            pangkat = pangkat * 2;
    
        }

        if (i >= 0) {
            cout << "Pesan Rusak!";
        } else {
            cout << "Angka desimal dari biner " << biner << " adalah = " << desimal;
        }

    }