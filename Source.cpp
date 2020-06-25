#include <iostream>
#include <string>

using namespace std;

class stack {
private:
	int top;

public:
	char arr[100];
	int elements=0;

	stack() {
		top = -1;
	}

	int returnSize(){
		return sizeof(arr);
	}

	void push(char x) {
		int size = sizeof(arr);
		if (top > size) {
			cout << "stack overflow" << endl;
			return;
		}
		else {
			top++;
			arr[top] = x;
			elements++;
			return;
		}
		
	}

	char pop() {
		char temp =-1;

		if (top == -1) {
			cout << "stack is empty";
		}
		else {
			temp = arr[top];
			top = top-1;
		}
		return temp;

	}

	void print() {
		if (top == -1) {
			cout << "stack empty";
		}
		else {
			for (int i = top; i >=0; i--) {
				cout << arr[i] << endl;
			}
		}
	}

	void printRec(int s) {
		if (s >=0 ) {
			cout << arr[s] << endl;
			s--;
			printRec(s);

		}
	}
};


int main() {
	stack object;
	//object.push(5);
	//object.push(6);
	//cout << "popped element : " << object.pop() << endl;
	//object.push(7);
	//object.push(8);
	//object.push(9);

	string s = "palindrome";

	for (int i = 0; i < s.length(); i++) {
		object.push(s[i]);
	}

	//object.print();
	//int s = sizeof(arr);
	object.printRec(s.length()-1);
	system("pause");
	return 0;
}