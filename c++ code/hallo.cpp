#include <iostream>
#include <string>
#include <vector>
using namespace std;

//int main() {
  //cout << "PERUBAHAN!";
  //return 0;
//}

//INI ADALAH CODING ARRAY STRING VERSI MANUAL
int main() {
  vector<string> tamu;
  string nama;
  char lagi = 'y';

  cout << "Masukkan Nama daftar tamu:\n";

  while (lagi =='y' || lagi == 'Y'){
    cout << "Nama tamu: ";
    getline(cin,nama);
    tamu.push_back(nama);

    cout << "Apakah ada tamu yang lain? (y/n): ";
    cin >> lagi;
    cin.ignore();
  }

  cout << "Selamat Datang para tamu spesial Resort Jungjae:\n";
  for(size_t i = 0; i < tamu.size(); i++) {
    cout << i + 1 << ". " << tamu[i] << endl;
  }
  
  return 0;
}
