#include <iostream>
using namespace std;

void inputdata(float &berat, float &tinggi){
    cout<<"--- Selamat datang mahasiswa kelas B ---"<<endl;
    cout<<"Masukan berat badan (kg): ";
    cin>>berat;
    cout<<"Masukan tinggi badan (meter): ";
    cin>>tinggi;
}
float hitungBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}
string status(float bmi){
    if(bmi < 18.5){
        return "Berat Badan Kurang";
    }
    else if(bmi < 25){
        return "Berat Badan Normal";
    }
    else if(bmi < 30){
        return "Berat Badan Kelebihan";
    }
    else{
        return "Obesitas";
    }
}
int main() {
    float berat, tinggi, bmi;

    inputdata(berat, tinggi);
    bmi = hitungBMI(berat, tinggi);