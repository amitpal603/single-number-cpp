#include "iostream"
#include "vector"

using namespace std;

int majorityElement(int nums[],int size){
    int count = 0;
    int ans = 0;
     for(int i =0; i< size; i++){
        if(count == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            count++;
        }
        else{
            count--;
        }
     }
     return ans;
}

int main() {
    int nums[] =  {2,2,1,1,1,2,2};
    int size = sizeof(nums)/sizeof(nums[0]);
    int result = majorityElement(nums,size);
    cout << "The majority element is: " << result << endl;
}