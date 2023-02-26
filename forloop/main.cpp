
#include <iostream>
#include <string>
#include <string_view>
#include <vector>

using namespace std;
int main(){

    // //13 times table 
    // for(int i= {1} ; i < 251 ; i++){
    //     if (i % 13 == 0){
    //         cout << i << " ";
    //     }
    //     else{
    //         cout <<"";
    //     }
    // }
    // cout << endl;

    // for (long long int i={2}; i<99; ++i){
    //     cout<<(i*i)<<endl;
    // };

    // int sum {0};
    
    // for (int i=1;i<=15; ++i) {
    //     if (i % 2 != 0) {
    //         sum += i;
    //     }
    // }

    // for(short i={1}; i<16; ++i)
    //     ((i%2==0)? cout<<" ":cout << i);
    // cout<<endl;

    // for(auto val:{1,2,3,4,5})
    //     cout<<val<<" ";
    // cout<<endl;


    
    //vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    // int vec [] {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    // int count{};

    // for (auto balls: vec)
    //     cout << balls << endl;
       
    // vector<double> temps {32.4, 22.1, 65.7,66.6, 123.1};
    // double avg_temp {};
    // double run_sum {};

    // for (auto temp: temps)
    //     run_sum += temp;
    // avg_temp = run_sum / temps.size();
    // cout<<avg_temp;

        vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{};
    for(auto nums:vec)
        if (nums%3==0||nums%5==0)
            ++count;
    cout<<count;
    cout<<endl;
    










    return 0;
}