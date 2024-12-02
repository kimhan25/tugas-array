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
    cout << " Tugas Nomor    : 2                                    " << endl;
    cout << " Keterangan     : Menjumlahkan 10 Elemen Array         " << endl;
    cout << " Tanggal        : 2 Desember 2024                      " << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Selamat datang Pak Yogi !" << endl;

    int bil [10];
    int sum = 0;
    string input;

    for (int i=0;i<=9;i++){

        cout << endl;
        cout << "Silahkan masukkan nilai untuk indeks ke - " << i << " !" << endl;
        cout << "Note \t\t\t: Masukkan bilangan bulat (Integer) tanpa huruf, simbol, atau spasi !" << endl;
        cout << "Contoh \t\t\t: 7" << endl;
        cout << "Masukkan bilangan \t: ";

        while (true){
            
            getline (cin,input);
            stringstream x (input);

            if (x >> bil[i] && x.eof()) {

                sum += bil [i];
                break;

            } else {

                cout << "Nilai untuk indeks ke - " << i << " tidak valid !" << endl ;
                cout << "Masukkan ulang nilai untuk indeks ke - " << i << " : ";
            }

        }

    }

    cout << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "      HASIL PENJUMLAHAN 10 ELEMEN ARRAY     " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Hasil jumlah 10 elemen dalam array = " << sum << endl;
    cout << "--------------------------------------------" << endl;
  
    return 0;

}