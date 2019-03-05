/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Kelas           : A
Tanggal dibuat	: 05/03/2019
***********************************************/
#include <iostream>
using namespace std;

void moveZeroToEnd(int arr[], int n){
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = i; j < n-1; j++)
        {
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void input(int (&arr)[100], int& n){
    cout << "Masukkkan panjang data : "; cin >> n;
    cout << "Masukkan data : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void output(int arr[], int n){
    cout << "Hasil : ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[100];
    int n;
    input(arr, n);
    moveZeroToEnd(arr, n);
    output(arr, n);
}