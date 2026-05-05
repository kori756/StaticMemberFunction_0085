#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
  private:
          int nim;
          string nama;
  public:
          mahasiswa();
          mahasiswa(int);
          mahasiswa(string);
          mahasiswa(int iNim, string iNama);
          void cetak();
};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int iNim){
  nim = iNim;
}

mahasiswa::mahasiswa(string iNama){
  nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama){
  nim = iNim;
  nama = iNama;
}

void mahasiswa::cetak(){
  cout << endl << "nim = "<< nim << endl;
  cout << "nama = " << nama <<endl;
}

int main(){
  mahasiswa mhs1 (1000000);
  mahasiswa mhs2("fadil");
  mahasiswa mhs3(00101010, "yura");

  cout << "mahasiswa 1:"; mhs1.cetak();
  cout << "mahasiswa 2:"; mhs2.cetak();
  cout << "mahasiswa 3:"; mhs3.cetak();

  return 0;
}