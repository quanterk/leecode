
#include <iostream>
#include<vector>
using namespace std;

//����ָ��
class Solution {
public:
	/*
	������ɫ�������
	*/
	void sortColors(vector<int>& nums) {                                                                                                                      
		// �������� idx < p0 : nums[idx < p0] = 0
		// curr �ǵ�ǰ����Ԫ�ص��±�
		int p0 = 0, curr = 0;
		// �������� idx > p2 : nums[idx > p2] = 2
		int p2 = nums.size() - 1;

		while (curr <= p2) {
			if (nums[curr] == 0) {
				swap(nums[curr++], nums[p0++]);  // ++���ƶ�ָ��
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


