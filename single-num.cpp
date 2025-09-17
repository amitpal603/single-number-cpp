#include"iostream"
#include"vector"

using namespace std;

int singleNumber(vector<int>&nums) {
    int ans = 0;
     for(int i : nums){
        ans ^= i;
     }
     return ans;
}

int main () {
    vector<int> vec = {4,1,2,1,2};
    int result = singleNumber(vec);
    cout<< result<< endl;
}