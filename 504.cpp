
#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;



class Solution {
public:
	string convertToBase7(int num) {
		if (num == 0) return "0";
		bool neg = false;
		if (num < 0) {
			neg = true;
			num = -num;
		}

		string result = "";
		int item = 0;
		while (num) {
			item = (num % 7);
			cout << item << endl;
			result.insert(0, 1, (char)(num % 7 + 48));
			num = num/7;
		}

		if (neg) result.insert(0, 1, '-');

		return result;






	}
};





int main() {
	Solution so;

	
	int num=100;
	string result ;
	result = so.convertToBase7(num);

	for (auto num : result)
		cout << num << endl;
	cout << result << endl;


	int test = 9;
	cout << (char)(9+48) << endl;




	//for (vector<int>::iterator i=nums.begin();i!=nums.end(),++i)

	return 0;
}

