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

main(){
	int input;
	cout << "Aplikasi kalkulasi faktorial\n";
	cout << "Masukkan angka = "; cin >> input;
	
	cout << "\nHasilnya adalah = " << faktorial(input) << endl;
}
