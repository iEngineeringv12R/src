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

class Mahasiswa{
  char *nama;
	char *nim;
	
	public:
		Mahasiswa(char[20], char[15]);
		void cetaknama(){
			cout << "Nama : " << this->nama << endl;
			cout << "NIM : " << this->nim << endl;
		};
};

Mahasiswa::Mahasiswa(char nama[20], char nim[15]){
	this->nama = nama;
	this->nim = nim;
}

int main(){
	char nama[20], nim[15];
	cout << "Masukkan nama = "; cin >> nama;
	cout << "Masukkan nim = "; cin >> nim;
	
	Mahasiswa mhs(nama, nim);
	mhs.cetaknama();
}
