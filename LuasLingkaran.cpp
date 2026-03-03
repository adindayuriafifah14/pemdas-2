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

 // library
 #include <iostream>
 using namespace std;

 //dekralasi global 
 int p, l, luas;

//implementasi prosedur dan fungsi
void input (){
   cout << "Masukkan panjang = ";
   cin >> p;
   cout << "Masukkan lebar = ";
   cin >> l;
}

int luaspersegi(){
   return p * l;
}

void output (){
   cout << "Hasilnya = " << luaspersegi() << endl;
   cout << "Terima kasih";
} int main () { // mulai
      input ();
      output();
   } //selesai


//library
#include <iostream>
using namespace std;
 
//implementasi prosedur dan fungsi  
void input() {
   cout << "Masukkan panjang = ";
   cin >> p;
   cout << "Masukkan lebar = ";
   cin >> l;
}

float jumlah (float a, float b, float c){
   return a + b + c;
}
 int luaspersegi (int a, int b){
   return a * b;
 }