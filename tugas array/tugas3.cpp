#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main (){

    cout << "------------------------------------------------------------" << endl;
    cout << "-                       TUGAS ARRAY                        -" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << " Nama           : Bintang Yodisa Suta                  " << endl;
    cout << " NIM            : 322410002                            " << endl;
    cout << " Tugas Nomor    : 3                                    " << endl;
    cout << " Keterangan     : Menentukan Elemen Array Terbesar     " << endl;
    cout << " Tanggal        : 2 Desember 2024                      " << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Selamat datang Pak Yogi !" << endl;


    int bil [7];
    string input;
    int max = INT_MIN;

    for (int i=0;i<=6;i++){

        cout << endl;
        cout << "Silahkan masukkan nilai untuk indeks ke - " << i << " !" << endl;
        cout << "Note \t\t\t: Masukkan bilangan bulat (Integer) tanpa huruf, simbol, atau spasi !" << endl;
        cout << "Contoh \t\t\t: 7" << endl;
        cout << "Masukkan bilangan \t: ";

        while (true){
            
            getline (cin,input);
            stringstream x (input);

            if (x >> bil[i] && x.eof()) {

                break;

            } else {

                cout << "Nilai untuk indeks ke - " << i << " tidak valid !" << endl ;
                cout << "Masukkan ulang nilai untuk indeks ke - " << i << " : ";
            }

        }

    }

    for (int i=0;i<=6;i++){

        if (bil[i] > max){

            max = bil[i];

        }

    }

    cout << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "         NILAI MAKSIMUM ARRAY               " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Nilai maksimum pada array = " << max << endl;
    cout << "--------------------------------------------" << endl;
    return 0;
    
}