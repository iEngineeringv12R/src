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
#include <string>
using namespace std;


main(){
  cout << "SEQUENTIAL SEARCH\n";

	// using string due it's a better array version of char
	string input, data = "BCxEXAaHXxB";

	cout << "\nFind for ? "; cin >> input;

	// initializing proccess...
	int loc;
	bool found = false;

	// seek array
	if (data.find(input) != string::npos ){
		found = true;
		loc = data.find(input);
	}
	else
		found = false;

	// explode the result
	cout << "\n";
	if(found == true){
		cout << input << " was found about " << loc + 1 << " step(s) from the array's head.\n\n";
	}
	else{
		cout << "Oopss... We can not find your requested query. \nThat's all we know.\n\n";
	}

}
/* 
CONCLUDE::
1. Prinsip kerja diatas akan sama halnya jika menggunakan char[array].

2. Pencarian akan berhenti ketika menemukan karakter yang cocok pada pertama kali.
Dalam hal ini huruf "x" (case-sensitive) terdapat pada urutan ke-3 dan ke-([max]-2).

3. Berbeda dengan 'Binary Search' yang menggunakan metode indexing,
'Sequential Search' merupakan sistem pencarian konvensional dengan sistem perbandingan
terhadap seluruh data yang ada hingga pencarian berakhir (karena ditemukan atau gagal).

4. Untuk mengurangi eror, sebaiknya input menggunakan string yang kemudian dapat dilakukan
'type conversion' jika dibutuhkan.

5. Efisiensi pencarian tergantung pada optimalisasi program(pointers usage, etc) dan ukuran data.

6. Jenis 'compiler' yang digunakan, spesifikasi komputer, dan amalan Anda juga dapat mempengaruhi
efisiensi program ini :)

*/
