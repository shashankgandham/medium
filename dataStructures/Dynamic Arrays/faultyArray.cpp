#include<bits/stdc++.h>
using namespace std;

class intArray {

	private:	
		int *a;
		int len;

	public:
		intArray(int len) {
			this->len = len;
			a = new int[len];
		}

		int get(int pos) {
			if(pos >= len || pos < 0)
				return INT_MIN;
			else
				return a[pos];		
		}

		int set(int pos, int val) {
			if(pos >= len || pos < 0)
				return INT_MIN;
			else {
				a[pos] = val;
				return a[pos];
			}
		}

		// Notice a logical flaw in this?
		// If the array is full, we lose the data at the end of the array
		int insert(int pos, int val) {
			if(pos >= len || pos < 0)
				return INT_MIN;
			else {
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
				this->len = len - 1;
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
