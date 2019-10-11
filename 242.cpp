
#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<map>
using namespace std;


class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.size() != t.size()) return false;
		if (s == t) return true;
		int x[26] = { 0 };
		for (int i = 0; i < s.size(); i++) {
			x[s[i] - 'a']++;
			x[t[i] - 'a']--;
		
		}


		for (int i = 0; i < 26; i++) {
			if (x[i] != 0) {

				return false;
			}

			



		}
		return true;



	}
};



int main() {
	Solution so;
	string s = "anagram", t = "nagaram";
	bool result;
	result = so.isAnagram(s, t);
    cout << result<< endl;
    return 0;
}

