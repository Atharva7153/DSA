// Return a pair in sorted array with target sum
#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum (vector<int> nums, int target){
    vector<int>ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i < j){

        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j --;
        }else if(pairSum < target){
            i ++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main (){

    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> result = pairSum(nums, target);
    cout << "Indices of the pair with target sum: " << result[0] << ", " << result[1] << endl;
    
}

// g++ PairSum.cpp -o main.exe ; .\main.exe
