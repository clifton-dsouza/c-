#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       // int sum = 0,res1,res2;
        vector<int>v(n);
        for(int i = 0;i < n ; i++){
            v[i]  = nums[i];
            if(v[i] != nums[i]){
                return nums[i];
            }
            /*sum + = nums[i];
            res1  = sum/2;
            res2  = n(n+1)/2;
            if(res2 != res1){
                return  
            }*/
           
        }
        

    }
};

int main(){
    vector<int>nums = {0,1,3,4};
}