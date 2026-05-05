#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
  public:
        mahasiswa(int nim, string nama);

};

mahasiswa::mahasiswa(int nim, string nama){
  cout <<"cons dengan parameter terpanggil" << endl;
  cout << "nim : " << nim << endl;
  cout << "nama: " << nama << endl;
}

int main(){
  mahasiswa mhs(113, "rizki");
  return 0;
}