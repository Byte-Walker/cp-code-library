#include <iostream>
using namespace std;

int binary_search(int *arr, int n, int key) {
	int start = 0, end = n-1, mid;
	while(start <= end) {
		mid =  (start + end)/2;
		if(arr[mid] == key) {
			return mid;
		} else if(arr[mid] > key) {
			end = mid - 1;
		} else if(arr[mid] < key) {
			start = mid + 1;
		}
	}

	return -1;
}

int main() {
	int marks[] = {12, 15, 18, 23, 25, 34, 36, 39};
	int n = sizeof(marks)/sizeof(int);

	int key;
	cout << "Which number to search? ";
	cin >> key;

	int index = binary_search(marks, n, key);
	if(index != -1) {
		cout << "The index of " << key << " is " << index << endl;
	}
	else {
		cout << key << " is not found!" << endl;
	}
	
	return 0;
}