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
#include <stack> // LIFO
using namespace std;

stack<string> s;

char back;
void push();
void pop();
void list();

void menu(){
  int opt;
	cout << "STACK -> Last In First Out\n";
	cout << "1. Push\n2. Pop\n3. List\n4. Exit";
	cout << "\nPilihan Anda = "; cin >> opt;
	switch(opt){
		case 1:
			push();
		break;
		case 2:
			pop();
		break;
		case 3:
			list();
		break;
		case 4:
			cout << "exit...." << endl;
		break;
	}
}

void push(){
	string input_data;
	cout << "\n=>PUSH";
	cout << "\nInput your data = "; cin >> input_data;
	s.push(input_data);
	cout << "\nData successfully inputted" << endl;
	cout << "\n#Wanna back to menu ? (y/n) "; cin >> back;
	if(back == 'y' || back == 'Y') { system("cls"); menu(); }
}

void pop(){
	cout << "\n=>POP";
	cout << "\nProcessing request.....";
	if( !s.empty() ){
		do{
			s.pop();
		}while( !s.empty() );
		cout << "\nAll data successfully cleaned" << endl;
	}
	else cout << "\nThere`s no spoon !" << endl;
	cout << "\n#Wanna back to menu ? (y/n) "; cin >> back;
	if(back == 'y' || back == 'Y') { system("cls"); menu(); }
}

void list(){
	cout << "\n=>LIST";
	if( !s.empty() ){
		do{
			cout << "\n" << s.top();
			s.pop(); // due stack unlike array, we need to delete each element to show up another element (show one, delete one)
		}while( !s.empty() );
		cout << "\nListing is done !" << endl;
	}
	else cout << "\nThere`s no spoon !" << endl;
	cout << "\n#Wanna back to menu ? (y/n) "; cin >> back;
	if(back == 'y' || back == 'Y') { system("cls"); menu(); }
}

main(){
	menu();
}
