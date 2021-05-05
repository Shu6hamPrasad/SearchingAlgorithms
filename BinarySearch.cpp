#include <iostream>
using namespace std;
int mid;
int binarySearch(int a[], int min, int max, int target)
{
    mid = (min + max) / 2;
    if (target >= a[min])
    {
        if (target == a[mid])
        {
            mid = mid;
        }
        else if (target > a[mid])
        {
            binarySearch(a, mid + 1, max, target);
        }
        else
        {
            binarySearch(a, min, mid - 1, target);
        }
    }
    else
    {
        mid = -1;
    }
    return mid;
}
int main()
{
    int sortedArray[] = {0, 1, 2, 3, 5, 8};
    int min = 0;
    int max = sizeof(sortedArray) / sizeof(sortedArray[0]);
    cout << binarySearch(sortedArray, min, max, 8);
    return 0;
}
