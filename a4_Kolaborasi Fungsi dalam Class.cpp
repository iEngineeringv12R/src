/*  about MathCalc v.0.4
    created by Agung Pambudi ( 12650004 )
    on Thursday, March 21, 2013 at 8:26 PM
*/

#include <iostream>
using namespace std;

class Persegi{
	float sisi;

  	public:
  	void InputData();
	void TampilData();
};

void Persegi::InputData(){
    cout<<" ------- Luas Persegi ------- "<<endl;
    cout<<" Masukkan Sisi : "; cin>> this->sisi;
}

void Persegi::TampilData(){
    float luas = this->sisi * this->sisi;
    cout<<" Luas Persegi  : "  <<sisi  <<"x"  <<sisi  <<" = "  <<luas  <<endl;
}

class Segitiga{
    float alas, tinggi;

    public:
    void InputData2();
    void TampilData2();
};

void Segitiga::InputData2(){
    cout<<" ------- Luas Segitiga ------- "<<endl;
    cout<<" Masukkan Alas   : "; cin>> this->alas;
    cout<<" Masukkan Tinggi : "; cin>> this->tinggi;
}

void Segitiga::TampilData2(){
    float luas = ( this->alas * this->tinggi ) / 2;
    cout<<" Luas Segitiga   : "  <<"("  <<alas  <<"x"  <<tinggi  <<")"  <<" / 2 = "  <<luas  <<endl;
}

main(){
    int pil;
    char back;

    do{
        cout<<"\n ------- MathCalc v.0.4 ------- \n" <<endl;
        cout<<" 1. Luas Persegi " <<endl;
        cout<<" 2. Luas Segitiga" <<endl;
        cout<<"\n What's your choice ?? "; cin>>pil;
        cout<<endl;

            if ( pil == 1 ) {
                Persegi x;
                x.InputData();
                x.TampilData();
            }

            if ( pil == 2 ) {
                Segitiga x;
                x.InputData2();
                x.TampilData2();
            }

    cout<<"\n Wanna Back to Menu (y/n) ?? "; cin>>back;
    }while ( back == 'y' );

cout<<" Thanks.... "<<endl;
}
