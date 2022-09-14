#include <iostream>
#include <algorithm>
using namespace std;

// Function to print all distinct triplets in an array with a sum
// less than or equal to a given number
void printAllTriplets(int A[], int n)
{
	sort(A, A + n);
	for (int i = 0; i <= n - 3; i++)
	{
		int low = i + 1, high = n - 1;
		while (low < high)
		{
			if (A[i] + A[low] >= A[high]) {
				for (int x = low + 1; x <= high; x++) {
					cout << "(" << A[i] << ", " << A[low] << ", " << A[x] << ")"<<endl;
				}
				low++;
			}

			else {
                high--;
                for (int x = low + 1; x <= high; x++) {
					cout << "(" << A[i] << ", " << A[low] << ", " << A[x] << ")"<<endl;
				}
            }
		}
	}
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // int A[] = {6, 4, 9, 7, 8};
	// int n = sizeof(A) / sizeof(A[0]);
	printAllTriplets(arr, n);
	return 0;
}