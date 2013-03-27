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
*/

#include <iostream>
#include <sstream>
#define spc " "
using namespace std;

string input;

main(){
    cout<<"\nMasukkan Angka: ";cin>>input;

    int array[5]; int *p; p=array;

        stringstream(input.substr (0,1))>>array[0];
        stringstream(input.substr (1,1))>>array[1];
        stringstream(input.substr (2,1))>>array[2];
        stringstream(input.substr (3,1))>>array[3];
        stringstream(input.substr (4,1))>>array[4];

    int replace;
    cout<<"\nMasukkan pengganti ke-1: ";cin>>replace;
        for(int i=0; i<5; i++){
            *p=replace;
            cout<<*p<<"  ";
            p++;
        }

    int again;
    cout<<"\n\nMasukkan pengganti ke-2: ";cin>>again;
        for(int i=0; i<5; i++){
            *p=again;
            cout<<*p<<"  ";
            p++;
        }

        cout<<"\n\nAngka awal: ";
        cout<<input[0] <<spc <<input[1] <<spc <<input[2] <<spc <<input[3] <<spc <<input[4]  <<endl;
}

//afhamz auditore
