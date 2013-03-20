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

/* 
  Functions: __foo
		Sum among two values
	
	Parameters:
		Int
	
	Returns:
		Int
*/
int __foo(int n){
	return (n <= 1) ? 2 : 2 + __foo(n - 1);
}
/*
	PENTING : Sebelum membaca teks dibawah disarankan Anda membaca doa sebelum tidur.

	Sistem kerja dari __foo() adalah melakukan penjumlahan atas
	dua nilai yaitu n dan __foo(n-1) jika memenuhi prasyarat "n <= 1".
	
	Angka 2 adalah nilai basis, karena hasil yang diharapkan
	adalah 2 4 6 8 10 ... ( (nilai kiri) + 2 ).
	Jika tujuannya adalah 3 6 9 12 ... maka angka 2 dapat Anda ganti
	dengan angka 3 maupun angka lainnya sesuai kebutuhan.

	Perlu diketahui jika "__foo(n-1)" diurai maka;

		int __foo(int n-1){
			return (n <= 1) ? 2 : 2 + __foo(n - 1);
		}

			Lalu jika __foo(int n-1) diurai akan menjadi;
	
				int __foo(int (n-1)-1){
					return (n <= 1) ? 2 : 2 + __foo(n - 1);
				}
	
					Dan seterusnya hingga n = 0. (saya kurang pasti yakin apakah akan
					berhenti jika n = 0, karena jika dilihat dari fungsi calling:

						__foo(n - 1)

					maka akan selalu n-1 hingga tak terhingga, meskipun demikian
					nilai 'return' akan dipatok pada angka 2).
					*) rekursif = looping tanpa FOR/WHILE/DO-WHILE.

	Yang perlu dicermati disini adalah;
	1. Pada fungsi awal __foo() terdapat penjumlahan yaitu;
			2 + __foo(n - 1)
		
		*) __foo(n - 1) adalah rekursif yang akan selalu melakukan
		  penjumlahan hingga didapat "n <= 1" yang pada kondisi
		  tersebut nilai return selalu dua.
	2. Melihat tujuan pembuatan program ini adalah untuk mendapat hasil;
		2 4 6 8 10 ...

	Maka input adalah jumlah angka yang harus di cetak (jumlah angka !, bukan jumlah
	kumulatif keseluruhan angka), sehingga jika __foo(5) = 10.
	
	Oleh sebab itu	untuk mengeksekusi fungsi ini dengan lancar adalah 
	menggunakan looping yang akan memanggil fungsi dari nilai terkecil yaitu
	satu hingga nilai terbesar yaitu input user.

	Misal input user adalah 3, maka harus dilakukan calling sebanyak tiga kali;
		 __foo(1) // output = 2
		 __foo(2) // output = 4
		 __foo(3) // output = 6
*/

int r_kumulatif = 0, r_kumulatif2 = 0;
/* 
	Functions: foo
		Sum among two values with fully automated system (ascending)
	
	Parameters:
		Int
	
	Returns:
		Void
*/
void foo(int n){
	int x;
	if(n >= 1){
		foo(n - 1);
		x = 2 * n;
		cout << x << " ";
		r_kumulatif += x;
	}
}
/* 
	__foo() => foo()
	
	Directions:
		1. "foo()" terletak paling depan.
		2. "foo(n - 1)" adalah baris ke-2.
		3. "foo(n - 1)" memiliki isi berupa "foo(n - 1)", merupakan baris ke-3.
		4. "foo(n - 1)" memiliki isi berupa "foo(n - 1)" dimana memiliki isi lagi
		   "foo(n - 1)" yang merupakan baris ke-4.
		5. akan selalu berulang hingga "n = 1", karena ketika nilai "n" dibawah satu, tidak
		   ada proses yang dilakukan.
		6. "foo()" berada di paling kanan. Perhatikan baik-baik prioritas dalam fungsi "foo()".
		   "x = 2 * n" berada tepat dibawah "foo(n - 1)".
		*) Angka 2 adalah basis. Feel free to change into desired value.

	iLUSTRASI:	
	foo(n){ // n = 5
		foo(n-1){ // n = 4
			foo(n-1){ // n = 3
				foo(n-1){ // n = 2
					foo(n-1){ // n = 1
						..... // n < 1
					}
				}
			}
		}
	}
	
	Sehingga berdasasr ilustasi diatas, maka nilai "x" adalah angka terkecil atau
	dapat juga dikatakan fungsi akan mencetak angka pada bagian fungsi yang paling
	dalam.
	
	ilustasi lainnya = box inside box which the box have another box inside and go on...
	*) di dalam kotak terdapat kotak yang didalamnya terdapat kotak lainnya dan terus...
	sehingga kesimpulannya adalah kotak ajaib :)
	kotak yang paling dalam adalah kotak terkecil.
*/

/* 
	Functions: foo
		Sum among two values with fully automated system (descending)
	
	Parameters:
		Int
	
	Returns:
		Void
*/
void foo2(int n){
	int x;
	if(n >= 1){
		x = 2 * n;
		cout << x << " ";
		r_kumulatif2 += x;
		foo2(n - 1);
	}
}
/* 
	assume "n = 3"

	1. "foo2(3)" akan mencetak angka terbesar karena "foo2(n - 1)" berada di
	   paling bawah.
	2. "foo2(2)" akan mencetak angka 4, karena "x = 2 * 2".
	3. selanjutnya... saya bingung :D, oleh karena itu kembali ke no-2

*/

main(){

	int input, kumulatif = 0;
	cout << "Masukkan Angka = "; cin >> input;

	/* 
					SEMI-RECURSIVE ?
	*/
	cout << "\n###SEMI-RECURSIVE METHOD ?###";
	cout << "\nASCENDING\n============\n";
	for(int i = 1; i <= input; i++){
		cout << __foo(i) << " ";
		kumulatif += __foo(i);
	}
	cout << " = " << kumulatif << endl;
	
	cout << "\nDESCENDING\n============\n";
	kumulatif = 0; // reset value
	for(int i = input; i >= 1; i--){
		cout << __foo(i) << " ";
		kumulatif += __foo(i);
	}
	cout << " = " << kumulatif << endl;

	/* 
					100% RECURSIVE
	*/	
	cout << "\n###100% RECURSIVE METHOD###";
	cout << "\nASCENDING\n============\n";
	foo(input);
	cout << " = " << r_kumulatif << "\n\n";
	
	cout << "DESCENDING\n============\n";
	foo2(input);
	cout << " = " << r_kumulatif2 << "\n\n";
	cout << endl;

}
