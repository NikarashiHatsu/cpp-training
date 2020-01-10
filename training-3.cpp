 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int angka[] = {};
    int data;
    
    // Inputan
    cout << "Masukkan angka pada urutan ke-0: "; cin >> angka[0];
    cout << "Masukkan angka pada urutan ke-1: "; cin >> angka[1];
    cout << "Masukkan angka pada urutan ke-2: "; cin >> angka[2];
    cout << "Masukkan angka pada urutan ke-3: "; cin >> angka[3];
    cout << "Masukkan angka pada urutan ke-4: "; cin >> angka[4];
    cout << endl;

    // Inputan cari data    
    cout << "Masukkan data yang ingin dicari: "; cin >> data;
    
    // Result cari data
    if(data > 4) {
        cout << "Inputan data yang Anda cari tidak valid" << endl;
    } else {
        cout << "Data " << angka[data] << " terletak pada array urutan ke-" << data;
    }
    
    // Return 
    return 0;
}
