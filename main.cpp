#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream File;
    string Text, Buffer, Nama;
    int No, NIM;

    // Input File Stream merupakan suatu kelas yang digunakan untuk mengambil nilai dari file external
    // ifstream ada 3, ios:in (default), ios: ate, dan ios:binary
    // Membuka Sebuah File Text
    File.open("Text.txt");

    // Buffer untuk penyimpanan sementara
    getline(File,Buffer);
    Text.append(Buffer + "\n");
    getline(File,Buffer);
    Text.append(Buffer + "\n");
     cout << Text << endl;
    
    while(!File.eof()){ // eof atau end of file
        File >> No;
        File >> Nama;
        File >> NIM;
        cout << No << "\t" << Nama << "\t" << NIM << endl;
    }
    
    cout << endl;
    system("pause");
    return 0;
}