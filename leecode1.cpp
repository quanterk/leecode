#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<map>
using namespace std;


class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int>dic;
		vector<int> result(2, -1);
		for (int i = 0; i < nums.size(); i++) {
			if (dic.count(target - nums[i]) > 0) {
				result[0] = i;
				result[1] = dic[target - nums[i]];
				break;

			}

			dic[nums[i]] = i;


		}
		return result;


	}
};



int main() {
	Solution so;
	vector<int> result;
	vector<int> nums = {2,7,11,15};
	int target = 9;
	
	result = so.twoSum(nums,target);

	for (auto c : result)
		cout << c << endl;


	return 0;
}



