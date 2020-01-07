#include<bits/stdc++.h>
using namespace std;

class intArray {

	private:	
		int *a;
		int len;
		int maxLen;

	public:
		intArray(int len, int maxLen) {
			this->len = len;
			this->maxLen = maxLen;
			a = new int[maxLen];
		}

		intArray(int len) {
			this->len = len;
			this->maxLen = 2*len;
			a = new int[maxLen];
		}

		int get(int pos) {
			if(pos >= this->len || pos < 0)
				return INT_MAX;
			else
				return a[pos];		
		}

		int set(int pos, int val) {
			if(pos >= this->len || pos < 0)
				return INT_MIN;
			else {
				a[pos] = val;
				return a[pos];
			}
		}

		int insert(int pos, int val) {
			if(pos >= this->len || pos < 0 || this->len == this->maxLen)
				return INT_MIN;
			else {
				this->len++;
				int temp = val;
				for(int i = pos; i < this->len; i++) {
					temp = a[i];
					a[i] = val;
					val = temp;
				}
				return val;
			}
		}
		

		int del(int pos) {
			if(pos >= len || pos < 0)
				return INT_MIN;
			else {
				this->len--;
				int val = a[pos];
				for(int i = pos; i < this->len - 1; i++) {
					a[i] = a[i+1];
				}
				a[len - 1] = INT_MIN;
				return val;
			}
		}
};


int main(int argc, char* argv[]) {

	intArray a(12);
	//Call get and set to use it as an array

	return 0;
}
