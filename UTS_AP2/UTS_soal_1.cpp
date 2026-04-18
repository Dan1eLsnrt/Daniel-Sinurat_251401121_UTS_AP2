#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "masukkan angka n : ";
    cin >> n;

    if (n <= 0) {
        cout << "bukan";
        return 0;
    }

    while (n > 1) {
        if (n % 2 != 0) {
            cout << "bukan";
            return 0;
        }

        n = n / 2;
    } 
      cout << "ya";

}