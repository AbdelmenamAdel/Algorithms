#include<iostream>
using namespace std;
void Merge(int arr[], int start, int mid, int end);
void MergeSort(int arr[], int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		MergeSort(arr, start, mid);
		MergeSort(arr, mid + 1, end);
		Merge(arr, start, mid, end);
	}
}
void Merge(int arr[], int start, int mid, int end) {

}
int main() {


	return 0;
}