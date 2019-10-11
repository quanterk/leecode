
#
#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<map>
#include <stack>
using namespace std;



class MyQueue {
public:
	/** Initialize your data structure here. */
	stack<int> a;
	stack<int> b;

	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		a.push(x);

	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		int len = 0;
		len = a.size();
		for (int i = 0; i < len; i++) {
			b.push(a.top());
			a.pop();
		}
		int result = b.top();
		b.pop(); //弹出一个后还原
		for (int i = 0; i < len-1; i++){
			a.push(b.top());
			b.pop();
		}

		return result;

	}

	/** Get the front element. */
	int peek() {
		int len = 0;
		len = a.size();
		for (int i = 0; i < len; i++) {
			b.push(a.top());
			a.pop();
		}
		int result = b.top();
		for (int i = 0; i < len ; i++) {
			a.push(b.top());
			b.pop();
		}

		return result;

	}

	/** Returns whether the queue is empty. */
	bool empty() {


		return a.empty() && b.empty();

	}
};

