#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size(); //size of first array which is in main
       
        vector<int>ans(2 * n); // doubling the size

        for(int i = 0;i < n;i++){
            
            ans[i] = nums[i]; //copying the first array
            ans[i + n] = nums[i] ; //copying twise
        }
        return ans; //returning vector which is ans
    }

};
