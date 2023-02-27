#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;
 
int main() {
    // char first_name[20]{};
    // char last_name[20]{};
    // char full_name[50]{}; 
    // char niceDay[50]{}; 
    // char temp[50]{};
    // cin>>first_name;
    // cin>>last_name;
    // cout<<strlen(first_name)<<endl;
    // cout<<strlen(last_name)<<endl;
    // strcpy(full_name, first_name);
    // strcat(full_name," ");
    // strcat(full_name, last_name);
    // cout<<full_name<<endl;
    // cout<<strlen(full_name)<<endl;
    // cout<<"how was your day "<<full_name<<"?"<<endl;
    // cin.getline(niceDay, 50);
    // cout<<strlen(niceDay)<<endl;

    char first_name[20]{"Bjarne"};
    char last_name[20]{"Stroustrup"};
    char whole_name[50]{}; 
    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);
    int whole_name_length {};
    strcpy(whole_name, first_name);
    strcat(whole_name," ");
    strcat(whole_name, last_name);    
    whole_name_length = strlen(whole_name);
    
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";



    // cout<<first_name;
    return 0;
}