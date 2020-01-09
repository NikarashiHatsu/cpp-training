// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int bilangan;
    
    cout << "Masukkan bilangan: "; cin >> bilangan;
    int asli = bilangan;
    
    do {
        // Spacing
        for(int i = 1; i < bilangan; i++) {
            cout << " ";
        }
        
        // Bintang
        int tambah = (asli - (bilangan - 1));
        int bintang = (tambah - 1) + tambah;
        for(int i = 1; i <= bintang; i++) {
            cout << "*";
        }
        
        // End line 
        cout << endl;
        
        // Decrement
        bilangan--;
    } while(bilangan > 0);
}
