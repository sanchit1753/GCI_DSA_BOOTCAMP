#include <iostream>
using namespace std;


void unsortSubArray(int arr[], int l, int r)
{
    int min = INT_MAX;
    int max = INT_MIN;

    int start = 0;
    int end = r;

    for (start = 0; start < r; start++)
    {
        if (arr[start] > arr[start + 1])
            break;
    }
    if (start == r) { cout << "Array is already sorted\n"; return; }

    for (end = r; end >= 0; end--)
    {
        if (arr[end] < arr[end - 1])
            break;
    }

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    for (int i = 0; i < start; i++)
    {
        if (arr[i] > min)
        {
            start = i;
            break;
        }
    }

    for (int i = r; i >= end+1; i--)
    {
        if (arr[i] < max)
        {
            end = i;
            break;
        }
    }

    cout << "The unsorted subarray which"
        << " makes the given array" << endl
        << "sorted lies between the indees "
        << start << " and " << end;
}

int main()
{
    int arr[] = { 10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given Array List: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    unsortSubArray(arr, 0, n - 1);
    cout << "\n";

    return 0;
}
