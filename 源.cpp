#include <iostream>
using namespace std;

class Solution {
public:
	int mySqrt(int x) {

		double right = x;
		double left = 0;
		double mid = (right + left) / 2;
		//cout << mid << endl;
		while (int(left) < int(right)) {

			if (mid * mid == x) {

				break;
			}

			if (mid * mid > x) {
				right = mid;
				mid = double(right + left) / 2;
			}

			if (mid * mid < x) {
				left = mid;
				mid = double(right + left) / 2;

			}
			cout << mid << endl;




		}
		return mid;

	}
};



int main() {
	Solution so;

	int x = 6;
	int result;
	result = so.mySqrt(x);
	cout << result << endl;




	//for (vector<int>::iterator i=nums.begin();i!=nums.end(),++i)

	return 0;
}


