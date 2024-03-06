#include <iostream>
using namespace std;
/////////////////////////////   Men3em Ibn 3del   /////////////////////////////
//////////////   Insertion Sort from down to up   //////////////
void sortingArrayFromBiggestToSmallest(int A[], int size) {
	for (int j = 1; j < size; j++) {
		int key = A[j];
		int i = j - 1;
		while (i >= 0 && A[i] < key) {
			A[i + 1] = A[i];
			i--;
		}
		A[i + 1] = key;
	}
}

void displaySortedArray(int A[], int size) {
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}
/*
int main()
{
	int A[10] = { 5,4,3,2,1,10,9,8,7,6 };
	sortingArrayFromBiggestToSmallest(A, sizeof(A) / sizeof(A[0]));
	displaySortedArray(A, sizeof(A) / 4);

}
*/