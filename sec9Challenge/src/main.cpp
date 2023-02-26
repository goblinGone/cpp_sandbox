/*
the section 9 challenge from Udemy
create a meneu tool, that takes nubers, adds them to a vector, then has options to print list, display the mean avg, smallest and largest nums

*/



#include<iostream>
#include<vector>
#include <algorithm> 
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
        cout<<additon<<" added"<<endl;
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
        startChat();
        cin >>choice;

        if (choice=='q'||choice=='Q') {
            goodbye();
        } else if (choice=='p'||choice=='P') {
            if (nums.size()== 0) {
                empty();
            } else {
                cout<<endl;
                cout<<"Listed nums, so far are:"<<endl;
                for (auto balls: nums)
                    cout << balls << endl;
                cout<<endl;
            }
        } else if (choice=='a'||choice=='A') {
            optA(); 
        } else if (choice=='m'||choice=='M') {
            if (nums.size()== 0) {
                empty();
            } else {
                int avg_num {};
                int run_sum {};

                for (auto num: nums)
                   run_sum += num;
                avg_num = run_sum / nums.size();
                cout<<"\nThe mean average is: "<<avg_num<<endl;
            }
        } else if (choice=='s'||choice=='S') {
            if (nums.size()== 0) {
                empty();
                } else {
                    int min = *std::min_element(nums.begin(), nums.end());
                    cout << "minimum/smallest element is: " << min << endl;      
                }  
        } else if (choice=='l'||choice=='L') {
            if (nums.size()== 0) {
                empty();
                } else {
                    int max = *std::max_element(nums.begin(), nums.end());
                    cout << "the largest number is: " << max << endl;     
                }   
        } else {
            cout<<"enter correct value"<<endl;
        }

    } while (choice != 'q' && choice!= 'Q');
    cout<<endl;
    return 0;
}