#include <iostream>
using namespace std;

class mahasiswa {
  public:
        mahasiswa();
};

mahasiswa::mahasiswa(){
  cout << "constructor terpanggil" << endl;
}

int main(){
  mahasiswa mhs;
  return 0;
}