#include<iostream>
#include<vector>
#include"funcs.h"
using namespace std;
int main() {
    vector<int>nums {};
        cout <<"\n---section-9-challenge-----"<<endl;
    char choice {};
    do {
        cout <<"P - Print numbers"<<endl;
        cout <<"A - Add numbers"<<endl;
        cout <<"M - Display mean average of numbers"<<endl;
        cout <<"S - Display the smallest number"<<endl;
        cout <<"L - Display the largest number"<<endl;
        cout <<"Q- Quit"<<endl;
        cout<<"Select an option: ";
        cin >>choice;

        if (choice=='q'||choice=='Q') {
            goodbye();
        } else if (choice=='p'||choice=='P') {
            cout<<"you have entered P"<<endl;
        } else if (choice=='a'||choice=='A') {
            cout<<"you have entered A"<<endl;
        } else if (choice=='m'||choice=='M') {
            cout<<"you have entered M"<<endl;
        } else if (choice=='s'||choice=='S') {
            cout<<"you have entered S"<<endl;
        } else if (choice=='l'||choice=='L') {
            cout<<"you have entered L"<<endl;
        
        } else {
            cout<<"enter correct value"<<endl;
        }

    } while (choice != 'q' && choice!= 'Q');
    cout<<endl<<endl<<endl;
    return 0;
}