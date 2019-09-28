#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;

class Solution {
	vector<int> solve(string s) {
		vector<int> ans;
		vector<int>left;
		vector<int>right;

		for (int i = 0; i < (int)s.size(); i++) {
			if (!isdigit(s[i])) {
				left = solve(s.substr(0, i));
				right = solve(s.substr(i + 1));
				for (auto ita = left.begin(); ita != left.end(); ita++) {
					for (auto itb = right.begin(); itb != right.end(); itb++) {
						if (s[i] == '+') {
							ans.push_back(*ita + *itb);
						}
						if (s[i] == '-') {
							ans.push_back(*ita - *itb);
						}
						else {

							ans.push_back(*ita * *itb);


						}

					}
				}
			}

		}

		if (ans.empty()) ans.push_back(stoi(s));

		return  ans;

	}

public:
	vector<int>diffWaysToCompute(string input) {
		vector<int>ans;
		if (input.empty()) return ans;
		ans = solve(input);
		return ans;

	}

};




	int main() {
		Solution so;

		string s = "2-1-1";
		vector<int> result;
		result = so.diffWaysToCompute(s);

		for (auto c : result)
			cout << c << endl;




		//for (vector<int>::iterator i=nums.begin();i!=nums.end(),++i)

		return 0;
	}



