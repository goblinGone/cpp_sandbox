#include<iostream>
#include<string>

using namespace std;

string alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
string albhed {"ypltavkrezgmshubxncdijqowYPLTAVKREZGMSHUBXNCDIJFQOW "};
string phrase {};
string charTemp {};
string translation {};
char spce {' '};


int main() {
    cout<<"\nAl Bhed translator \n******************* \nenter a phrase to be translated into Al Bhed ; ";
    getline(cin, phrase);
    for (auto i : phrase) {
        if (i != ' ') {
            size_t posTemp = alpha.find(i);
            charTemp = albhed.at(posTemp);
            translation += charTemp;
        } else {
            translation += spce;
        }

    }
    cout <<"********************\n"<< translation<<"\n\n";
    
    return 0;
}