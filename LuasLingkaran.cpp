#include <iostream>
using namespace std;

//deklarasi variable
float jarijari;
float phi = 3.14159;
//fungsi awal
 void awal(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jarijari;
 }
 float luas (float jari_jari, float phi){
    return phi * jari_jari * jari_jari;
 }
 void akhir (){
    cout << "Hasil luas untuk lingkaran dengan jari jari" << jarijari<< luas (jarijari,phi);
 }
 int main (){
    awal();
    akhir ();
 }

 