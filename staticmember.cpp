#include <iostream>
using namespace std;

class Mahasiswa {

public:
          static int nim;
          int id;
          string nama;

          void setID();
          void printALL();

          Mahasiswa(string pnama) :nama(pnama) {
            setID();
          }
};

int Mahasiswa::nim = 10;

void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printALL() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main(){
    Mahasiswa mhs1("lia kurnia");
    Mahasiswa mhs2("fawaz saturus");
    Mahasiswa mhs3("andi kurniawan");
    Mahasiswa mhs4("bagas");

    mhs1.printALL();
    mhs2.printALL();
    mhs3.printALL();
    mhs4.printALL();

    return 0;
}