#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();

    for(int i = 0; i < n; i++) {

        int count = 1;

        for(int j = 0; j < n; j++) {

            if(i == j)
                continue;

            if(nums[i] == nums[j]) {
                count++;
            }
        }

        if(count == 1) {
            return nums[i];
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {2, 2, 1};

    cout << "Single Number = " << singleNumber(nums);

    return 0;
}