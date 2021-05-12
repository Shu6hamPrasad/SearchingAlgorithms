#include <iostream>
using namespace std;
int MonkeySort(int a[], int l, int tgt)
{
    srand(time(0));
    for (;;)
    {
        int Rand = rand() % l - 1 + 1;
        if (a[Rand] == tgt)
        {
            return Rand;
            break;
        }
        else if ((a[Rand] > tgt && a[Rand + 1] < tgt) || (a[Rand] > tgt && a[Rand - 1] < tgt) || tgt > a[l - 1])
        {
            return -1;
            break;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 12, 34, 56, 78};
    int len = sizeof(arr) / sizeof(arr[0]);
    int tar = 56;
    cout << MonkeySort(arr, len, tar) << endl;
    return 0;
}
