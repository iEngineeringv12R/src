/*
  Input nilai mahasiswa dengan kalkulasi sbb:
    responsi: 20%
    uts: 40%
    uas: 40%
  
  gunakan function & pointer
*/

#include<iostream>
using namespace std;

float r, t, s;
float total;

void input(){
    cout<<  "Responsi : ";  cin>>r;
    cout<<  "UTS      : ";  cin>>t;
    cout<<  "UAS      : ";  cin>>s;

}
void output(){
    total = ( (r * 20)/100 ) + ( (t * 40)/100 ) + ( (s * 40 )/100 );
    cout<<  "N.Akhir  : "    <<total;
}

main(){
int mhs, i;

    cout<<  "Jumlah Mahasiswa : ";  cin>>mhs;

        for(i=0 ; i<mhs ; i++){
            cout<<  "\nNilai Mahasiswa ke-"<<i+1<<endl;

            input();
            output();
        cout<<endl;
        }

    cout<<endl;
}
