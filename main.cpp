#include<iostream>
using namespace std;

char* ReverseString(char* src, int len);

int main() {

	char original[] = "Bingo JJang!!!";
	ReverseString(original, 14);

	return 0;
}

char* ReverseString(char* src, int len) {

	char* reverse = new char[len + 1];
	strcpy_s(reverse, len + 1, src);
	int temp;

	for (int i = 0; i < len; i++) {
		cout << reverse << endl;
		temp = reverse[0];
		for (int j = 0; j < len; j++) {
			reverse[j] = reverse[j + 1];
		}
		reverse[len - 1] = temp;
		reverse[len] = NULL;
	}
	cout << reverse << endl;
	return reverse;
}