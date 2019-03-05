/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 05/03/2019
Deskripsi       : excerise-01
***********************************************/
#include <iostream>
#include <string.h>

using namespace std;

struct Orang {
    int umur;
    char nama[30];
    char jk;
    char goldar;
};

int main(){
    Orang orang;
    orang.umur = 10;
    strcpy(orang.nama, "fahmi");
    orang.jk = 'L';
    orang.goldar = 'O';

    cout << orang.umur << endl;
    cout << orang.nama << endl;
    cout << orang.goldar << endl;
    cout << orang.jk << endl;
}