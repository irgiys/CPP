// C++ program to implement
// the above approach
 
#include <iostream>
using namespace std;
 
// Function to search if element X
// is present in reverse sorted array
int binarySearch(int arr[], int N, int X){
    int start = 0;
    int end = N;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (X == arr[mid]) {
            return mid;
        }
        else if (X < arr[mid]) {
				   start = mid + 1;
        }
        else {
 				    end = mid - 1;
        }
    }
    return -1;
}
 
// Driver Code
int main(){
    int arr[] = { 5, 4, 3, 2, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 4;
    cout << (binarySearch(arr, N, X) != -1 ? "Found" : "Not Found");
		cout << endl << endl;
    return 0;
}