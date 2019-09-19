
#include <iostream>
#include<vector>
using namespace std;

//三个指针
class Solution {
public:
	/*
	荷兰三色旗问题解
	*/
	void sortColors(vector<int>& nums) {                                                                                                                      
		// 对于所有 idx < p0 : nums[idx < p0] = 0
		// curr 是当前考虑元素的下标
		int p0 = 0, curr = 0;
		// 对于所有 idx > p2 : nums[idx > p2] = 2
		int p2 = nums.size() - 1;

		while (curr <= p2) {
			if (nums[curr] == 0) {
				swap(nums[curr++], nums[p0++]);  // ++是移动指针
			}
			else if (nums[curr] == 2) {
				swap(nums[curr], nums[p2--]);
			}
			else curr++;
		}
	}
};



int main(){
	Solution s;

	vector<int> nums = { 2, 0, 2, 1, 1, 0 };
	s.sortColors(nums);


	for (auto i : nums)
	{
		cout << i << " ";
	}
	


	//for (vector<int>::iterator i=nums.begin();i!=nums.end(),++i)

		return 0;
     }


