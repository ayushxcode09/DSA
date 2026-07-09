#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] == 1) {
            count++;

            if (count > maxi) {
                maxi = count;
            }
        }
        else {
            count = 0;
        }
    }

    return maxi;
}

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive 1's = " << ans;

    return 0;
}