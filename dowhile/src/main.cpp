#include<iostream>

using namespace std;

int main(){
    char choice {};
    do {
        cout <<"\n-----------------"<<endl;
        cout <<"Tool picker, choose an option"<<endl;
        cout <<"1- passkey gen"<<endl;
        cout <<"Q- Quit"<<endl;
        cout <<"Choose an option: ";
        cin >>choice;
        switch (choice) {
            case '1':
                cout <<"you chose opt 1, the pkg";
                break;
            case 'q':
                cout<<"goodbye";
                break;
            case 'Q':
                cout<<"goodbye";
                break;
        }

    } while (choice != 'q' && choice!= 'Q');
    return 0;
}