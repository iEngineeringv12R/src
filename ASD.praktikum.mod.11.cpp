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
#include <vector>
using namespace std;

bool isprime(int x){
  if(x == 1) return false;
	else if (x == 2 || x == 3 || x == 5 || x == 7) return true;
	else if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0) return false;
	else return true;
}

main(){
	int input;
	cout << "SORTING PRIME NUMBERS (Exchange)\n";
	cout << "\nMasukkan jumlah data = "; cin >> input;
	cout << endl;

	int raw[input], i = 0;

	// input me first
	while (i < input){
		cout << "Masukkan data ke-" << i + 1 << " = "; cin >> raw[i];
		i++;
	}

	// show the raw then
	cout << "\nData sebelum disorting = ";
	i = 0;
	while (i < input){
		cout << raw[i] << " ";
		i++;
	}

	/* 
	 * FUN IS HERE
	 */

	// sent for prime checking
	i = 0;
	vector <int> prime;
	while (i < input){
		if( isprime(raw[i]) ) prime.push_back(raw[i]);
		i++;
	}

	// sent the prime lists for sorting
	int max = prime.size();
	for(int i = 0; i < max; i++){
		for(int j = i; j < max; j++){
			if(prime[i] > prime[j]){
				int temp 	= prime[j];
				prime[j] 	= prime[i];
				prime[i] 	= temp;
			}
		}
	}

	// explode the data now
	cout << "\n\nData setelah disorting = ";
	i = 0;
	while (i < max){
		cout << prime[i] << " ";
		i++;
	}

	// sent msg we are done !
	cout << "\n\nSorting is done !" << endl;
}

/*
check for prime then sort them with exchange sort

input -> if prime -> true | copy to new array -> sorting the new array -> list them -> END
				  -> false | throw away
*/
