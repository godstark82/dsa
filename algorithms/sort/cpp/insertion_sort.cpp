#include <iostream>

using namespace std;

void insertionSort(int *nums, int len)
{
    for (int i = 1; i < len; i++)
    {
        int key = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = key;
    }
}

void printList(int *nums, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int nums[] = {9, 8, 7, 6, 5, 4, 3, 2};
    int len = 8;

    printList(nums, len);

    insertionSort(nums, len);

    printList(nums, len);

    return 0;
}