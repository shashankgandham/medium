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
				return INT_MAX;
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
};


int main(int argc, char* argv[]) {

	intArray a(12);
	a.set(5, 4);
	printf("%d\n", a.get(5));
	
	return 0;
}
