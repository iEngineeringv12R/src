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
#include <vector> // take the advantages from vector instead conventional array :)
using namespace std;

bool isprime(int x){
  if(x == 1) return false;
	else if (x == 2 || x == 3 || x == 5 || x == 7) return true;
	else if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0) return false;
	else return true;
}

// TODO:
int bubble_sorting(int x){

}

main(){
	int input;
	cout << "SORTING PRIME NUMBERS\n";
	cout << "Masukkan jumlah data = "; cin >> input;

	int x[input], i = 0;
	
	// input me first
	while ( i < input){
		cout << "Masukkan data ke-" << i; cin >> x[i];
		i++;
	}
	
	// show the data raw then
	cout << "\nData sebelum disorting";
	i = 0;
	while ( i < input){
		cout << i << " ";
		i++;
	}
	
	/* 
	 * FUN IS HERE
	 */

	// sent for prime checking
	vector<int> prime; // due making new array is resources wasting
	i = 0;
	while ( i < input){
		( isprime(x[i]) ) ? prime.push_back(x[i]) : ;
		i++;
	}
	
	// TODO: sent the prime lists for sorting

	
	// TODO: explode the data now
	cout << "\n\nData setelah disorting";
	
	
	// sent msg we are done !
	cout << "\n\nSorting is done !" << endl;
}

/*
BUBBLE SORT => hanya mengurutkan bilangan prima ( check for prime then sort them)

input -> if prime -> true | copy to new array -> sorting the new array -> list them -> END
				  -> false | throw away
*/
