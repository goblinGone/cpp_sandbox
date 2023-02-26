#include<iostream>
#include<vector>
#include"funcs.h"

using namespace std;

vector<int>nums {};

void optA() {
    bool done {false};
    int additon {};
    char again {};
    while (!done) {
        std::cout<<"please enter num: ";
        std::cin>>additon;
        nums.push_back(additon);
        std::cout<<"again?: ";
        std::cin>>again;
        if (again=='n'||again=='N') {
            done=true;
        }
    }
}


int main() {
    
        cout <<"\n---section-9-challenge-----"<<endl;
    char choice {};
    do {
        cout <<"\n\nP - Print numbers"<<endl;
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
            cout<<endl;
            cout<<"Listed nums, so far are:"<<endl;
            for (auto balls: nums)
                cout << balls << endl;
            cout<<endl;
        } else if (choice=='a'||choice=='A') {
            optA(); 
               
        } else if (choice=='m'||choice=='M') {
            int avg_num {};
            int run_sum {};

            for (auto num: nums)
                run_sum += num;
            avg_num = run_sum / nums.size();
            cout<<"\nThe mean average is: "<<avg_num<<endl;
        } else if (choice=='s'||choice=='S') {
            cout<<"you have entered S"<<endl;
        } else if (choice=='l'||choice=='L') {
            cout<<"you have entered L"<<endl;
        
        } else {
            cout<<"enter correct value"<<endl;
        }

    } while (choice != 'q' && choice!= 'Q');
    cout<<endl;
    return 0;
}