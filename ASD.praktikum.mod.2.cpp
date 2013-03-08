/*
Copyright 2013 Alfian Gautama Herman (email : fian_gautama@yahoo.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
using namespace std;

class _3d{
  protected:
	int panjang, lebar, tinggi, sisi, volume, luas_permukaan;
};

class kubus: public _3d{
	public:
		void kubus_input();
		void kubus_calc();
};

class balok: public _3d{
	public:
		void balok_input();
		void balok_calc();
};

void kubus::kubus_input(){
	cout << "\nMasukkan nilai sisi = "; cin >> sisi;
}

void kubus::kubus_calc(){
	luas_permukaan 	= (sisi * sisi) * 6;
	volume = sisi * sisi * sisi ;
	cout << "\nVolume kubus = " << volume;
	cout << "\nLuas permukaan kubus = " << luas_permukaan <<endl;
}

void balok::balok_input(){
	cout << "\nMasukkan nilai panjang = "; cin >> panjang;
	cout << "Masukkan nilai lebar = "; cin >> lebar;
	cout << "Masukkan nilai tinggi = "; cin >> tinggi;
}

void balok::balok_calc(){
	volume = panjang * lebar * tinggi;
	luas_permukaan 	= ((panjang * lebar) * 2) + ((panjang * tinggi) * 2) + ((lebar * tinggi) * 2);	
	cout << "\nVolume balok = " << volume;
	cout << "\nLuas permukaan balok = " << luas_permukaan << endl;
}

int main(){
	cout << "Silahkan pilih objek\n";
	cout << "1. Kubus\n";
	cout << "2. Balok\n";
	int opt;
	cout << "Pilihan Anda = "; cin >> opt;

	if (opt == 1){
		kubus x;
		x.kubus_input();
		x.kubus_calc();
	}
	else if (opt == 2){
		balok y;
		y.balok_input();
		y.balok_calc();
	}
	else{
		cout << "\n INPUT ERROR !";
	}

}
