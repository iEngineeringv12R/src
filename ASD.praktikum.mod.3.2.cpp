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

int faktorial(int n){
  return ( (n <= 1) ? 1 : n * faktorial(n-1) );
}

int kombinasi(int n, int r){
	return ( faktorial(n) / ( (faktorial(n-r)) * (faktorial(r)) ) ); 
}

int permutasi(int n, int r){
	return ( faktorial(n) / (faktorial(n-r)) ); 

}
main(){
	int opt, n, r;
	cout << "Aplikasi kalkulasi kombinasi dan permutasi\n\n";
	cout << "1. Kombinasi \n2. Permutasi\n";
	cout << "Pilihan Anda = "; cin >> opt;
	
	switch(opt){
		case 1:
			cout << "\n=>KOMBINASI\n";
			cout << "Masukkan N = "; cin >> n;
			cout << "Masukkan R = "; cin >> r;
			if (n < r){ cout << "\nerror\n"; break; }
			cout << "\nHasilnya adalah = " << kombinasi(n, r) << endl;
		break;
		case 2:
			cout << "\n=>PERMUTASI\n";
			cout << "Masukkan N = "; cin >> n;
			cout << "Masukkan R = "; cin >> r;
			if (n < r){ cout << "\nerror\n"; break; }
			cout << "\nHasilnya adalah = " << permutasi(n, r) << endl;
		break;
		default:
		break;
	}	
}
