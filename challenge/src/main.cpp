#include <iostream>
#include <vector>

using namespace std;



int main() {
    vector<int>vec{1,2,3,4};
    int result{};
    // int math{};
    int vecLen{};
    vecLen = vec.size();
    for(int nums: vec) {
        for(int i=0; < 4; i++) {
            result+=i*nums;
        }
    }
    cout<<result<<endl;
    cout<<endl;
    return 0;
}