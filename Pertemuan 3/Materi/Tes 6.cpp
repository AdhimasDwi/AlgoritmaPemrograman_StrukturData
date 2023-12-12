#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    switch (nilai) {
        case 85 ... 100: // Dalam rentang 85 hingga 100 (C++17)
            cout << "Anda mendapatkan hadiah komputer Core i5." << endl;
            break;

        case 70 ... 84:  // Dalam rentang 70 hingga 84 (C++17)
            cout << "Anda mendapatkan hadiah uang sebesar Rp.2.500.000." << endl;
            break;

        default:
            cout << "Anda mendapatkan hadiah hiburan." << endl;
            break;
    }

    return 0;
}
