#include<string>
#include<iostream>
using namespace std;
int main () {
    string s1; 
    string s2 {"James"};
    string s3 {s2};
    string s4 {"James", 3};
    string s5 {s3, 0, 2};
    string s6 (4, 'O');
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    cout<<s6<<endl;

    return 0;
}