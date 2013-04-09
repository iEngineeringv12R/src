/*
                      `
                     ://s
                            `/ooo//+os
          ::::://///o:  ///////++++++++++++
      //::/+////////+yy///+++++++++++++++++++/
    +oo://++:---////ohd/++oys             -++++
    /oyy         //+ysy/++s+
                //+osy:/+++o/
               +/++hdh  +++/o
               /++hdd//  ++++:
              /++yhh/++yh`++++++o+oo+
             :/+yss /++ydh /++++++++++++++-
            +/+syy  /++ydo  o+++oh   y++++++s
           +///sy   +++oho    ++++:-
       `o/:/+/oo     /+ohh     +++++++o-
       :////+-`      /++yh       /++++++/
       ////+-        o/+ss        ./+++++d
       //+:           +/:s          //+++:
    ``.-:/::                          `+/+`

                .-CODING TEAM-.
+_______________________________________________________+

  QUEST::
  Input nilai beberapa mahasiswa dengan kalkulasi sbb:
      responsi: 20%
      uts: 40%
      uas: 40%
  gunakan function & pointer !
+_______________________________________________________+

*/

#include <iostream>
using namespace std;

float nRES, nUTS, nUAS, nAKHIR;
float *PnAKHIR;

void input(){
    cout << "RESPONSI : ";  cin >> nRES;
    cout << "UTS      : ";  cin >> nUTS;
    cout << "UAS      : ";  cin >> nUAS;
}

void output(){
     PnAKHIR = &nAKHIR;
    *PnAKHIR = (nRES *0.2) + (nUTS * 0.4) + (nUAS * 0.4);

    cout << "N.Akhir  : " << nAKHIR;
}

main(){
    int mhs, i;
    cout << "Jumlah Mahasiswa : ";cin>>mhs;

     for(i=0 ; i<mhs ; i++){
        cout << "______________________"  << endl;
        cout << "Nilai Mahasiswa ke-" <<i+1 << endl;

        input();
        output();

        cout<<endl;
    }
}

//afhamz auditore
