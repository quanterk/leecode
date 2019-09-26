#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:

	static bool cmp(const int& a, const int& b) {
		return a < b;
	}

	int findContentChildren(vector<int>& g, vector<int>& s) {
		if (g.size() < 1) return 0;
		int child = 0;
		int cookie = 0;
		sort(g.begin(), g.end(), cmp);
		sort(s.begin(), s.end(), cmp);
		while (child < g.size() && cookie < s.size()) {
			if (g[child] <= s[cookie]) {
				child ++;
			}
			cookie ++;
		}



		return child;

	}

};


int main() {
	Solution so;

	vector<int> g= { 1,2,3 };
	vector<int> s = { 1,1 };
	int result;
	result=so.findContentChildren(g,s);
	cout << result<< endl;
	



	//for (vector<int>::iterator i=nums.begin();i!=nums.end(),++i)

	return 0;
}


