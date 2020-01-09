// Soal 1
#include <iostream>

using namespace std;

int main()
{
    int bilangan;
    int loop_terakhir;
    int space_terakhir;
    
    cout << "Masukkan bilangan: "; cin >> bilangan;
    cout << endl;
    
    // Segitiga naik
    for(int i = 1; i <= bilangan; i++) {
        for(int space = 1; space < i; space++) {
            cout << " ";
            space_terakhir = space;
        }
        cout << "*" << endl;
        loop_terakhir = i;
    }
    
    // Segitiga turun
    for(int j = (loop_terakhir - 1); j >= 1; j--) {
        // Implying terakhir 5
        for(int space = 1; space < j; space++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
}
