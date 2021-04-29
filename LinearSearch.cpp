#include <iostream>
using namespace std;
int LinearSearch(int array[], int length, int key)
{
  for (int i = 0; i <= length; i++)
  {
    if (array[i] == key)
      return i;
  }
  return -1;
}
int main()
{
  int testArray[] = {12, 23, 34, 45, 55};
  int arrayLength = 4;
  int arrayKey = 34;
  int LinearSearchResult = LinearSearch(testArray, arrayLength, arrayKey);
  cout << "The Number is at index: " << LinearSearchResult << endl;
}
