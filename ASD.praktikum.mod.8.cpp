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

#include <cstdlib>
#include <iostream>
#include <string>
#include <queue> // FIFO
using namespace std;

queue<string> q;

char back;

void enqueue();
void dequeue();
void listing();

void menu(){
  int opt;
	cout << "QUEUE -> First In First Out\n";
	cout << "1. Inisialisasi\n2. Enqueue\n3. Dequeue\n4. Listing";
	cout << "\nPilihan Anda = "; cin >> opt;
	switch(opt){
		case 1:
		break;
			cout << "DUNNO WHAT TO DO HERE !" << endl;
		case 2:
			enqueue();
		break;
		case 3:
			dequeue();
		break;
		case 4:
			listing();
		break;
	}
}

void enqueue(){
	string input_data;
	cout << "\n=>ENQUEUE";
	cout << "\nInput your data = "; cin >> input_data;
	q.push(input_data);
	cout << "\nData successfully inputted" << endl;
	cout << "\n#Wanna back to menu ? (y/n) "; cin >> back;
	if(back == 'y' || back == 'Y') { system("cls"); menu(); }
}

void dequeue(){
	cout << "\n=>DEQUEUE";
	cout << "\nProcessing request.....";
	if( !q.empty() ){
		do{
			q.pop();
		}while( !q.empty() );
		cout << "\nAll data successfully cleaned" << endl;
	}
	else cout << "\nThere`s no spoon !" << endl;
	cout << "\n#Wanna back to menu ? (y/n) "; cin >> back;
	if(back == 'y' || back == 'Y') { system("cls"); menu(); }
}

void listing(){
	cout << "\n=>LISTING";
	if( !q.empty() ){
		do{
			cout << "\n" << q.front();
			q.pop(); // due queue unlike array, we need to delete each element to show up another element (show one, delete one)
		}while( !q.empty() );
		cout << "\nListing is done !" << endl;
	}
	else cout << "\nThere`s no spoon !" << endl;
	cout << "\n#Wanna back to menu ? (y/n) "; cin >> back;
	if(back == 'y' || back == 'Y') { system("cls"); menu(); }
}

main(){
	menu();
}
