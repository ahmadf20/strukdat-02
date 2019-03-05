/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal         : 05/03/2019
Deskripsi       : excerise-03
***********************************************/

#include <iostream>

using namespace std;

struct dataPegawai{
    char NIP[2];
    char nama[30];
    int gol;
};

typedef dataPegawai data[30];

void inputPegawai(data& pegawai, int& n){
    cout << "Masukkan jumlah pegawai: "; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Nama :\t"; 
        // cin >> pegawai[i].nama;
        cin.ignore(); cin.getline(pegawai[i].nama, 30);
        cout << "NIP :\t"; cin >> pegawai[i].NIP;
        cout << "gol :\t"; cin >> pegawai[i].gol;
    }
}
int cariGaji(int gol)
{
    switch (gol) {
        case 1:
            return 2000000;
            break;
        case 2:
            return 3000000;
            break;
        case 3:
            return 5000000;
            break;
        case 4:
            return 8000000;

        default:
            return 0;
            break;
    }
}
void cetakDaftar(data pegawai, int n){
    cout << "DATA PEGAWAI" << endl;
    cout << "=============================================" << endl;
    cout << "No.\tNama\tNIP\tGol\tGaji" << endl;
    cout << "=============================================" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << "\t"
        << pegawai[i].nama << "\t"
        << pegawai[i].NIP << "\t"
        << pegawai[i].gol << "\t" 
        << cariGaji(pegawai[i].gol) << endl;  
    }
    
}
void rataGaji(int rata, int n, data pegawai){
    rata = 0;
    for(int i = 0; i < n; i++)
    {
        rata += cariGaji(pegawai[i].gol);
    }
    rata/=n;
    cout << "Rata-rata Gaji : " << rata << endl;
}
// int gajiTerendah()
// {

// }
//  int gajiTertinggi(){

// }


int main(){
    data pegawai;
    int n, rata;

    inputPegawai(pegawai, n);
    cetakDaftar(pegawai, n);
    rataGaji(rata, n, pegawai);
}
