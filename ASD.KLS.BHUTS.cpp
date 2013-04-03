/*
buatlah function pointer (jumlah parameter)
utk menyelesaikan masalah deret
dengan deret asal { 2, 4, 6, 8, 10}
  				0  1  2  3  4 
selesaikan oeleh function2
	1) function 1 : mengubah inde*x ke 0, 2, 4	-> kalikan dirinya sendiri
	2) function 2 : mengubah inde*x ke 1, 3		-> kalikan dengan 2
hasil deret { 4, 8, 36, 16, 100 }
*/

#include <iostream>
using namespace std;

void ptr1(int *x){
  	for(int i = 0; i < 3 ; i++){
			*x = *x * *x;
			x+=2;
		}
}

void ptr2(int *x){
		for(int i = 0; i < 2 ; i++){
			*x = *x * 2;
			x+=2;
		}
}

main(){
int deret[5] = {2,4,6,8,10};
int *p;

	p = deret;
	for(int i = 0; i < 5 ; i++){
		cout << *p	<<" ";
		p++;
	}
	cout << endl << endl;
	p = &deret[0];
	ptr1(p);
	
	p = &deret[1];
	ptr2(p);
	
	p = deret;
	for(int i = 0; i < 5 ; i++){
		cout << *p	<<" ";
		p++;
	}	
	cout << endl << endl;	
}
