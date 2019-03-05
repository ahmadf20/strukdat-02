/*
Nama        : Ahmad Faaiz Al-auza'i
NPM         : 140810180023
Tanggal     : 05/03/2019
Deskripsi   : excerise-02
***********************************************/
#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};

int main(){
    Theater movies;
    
    movies.room = 7;
    strcpy(movies.seat, "J9");
    strcpy(movies.movieTitle, "Adit&Jarwo");

    cout << movies.room << endl;
    cout << movies.seat << endl;
    cout << movies.movieTitle << endl;
}