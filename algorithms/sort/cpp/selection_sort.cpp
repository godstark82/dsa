#include <iostream>

using namespace std;

/*
! We'll find the smallest number in the array in this method and replace it with the ith element on the array
? UnStable Sorting Method
*/

int *selectionSort(int *nums, int n)
{
   
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; 
        for (int j = i; j < n; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }

        //! Swap the minIndex value to the currentIndex of I
        int temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }
    return nums;
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
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2};
    int length = 8;

    printList(arr, length);
    selectionSort(arr, length);
    printList(arr, length);

    return 0;
}