#include <iostream>

using namespace std;

int *bubbleSort(int *nums, int length)
{
    for (int i = 0; i < length - 1; i++)
    {

        for (int j = 0; j < length - i - 1; j++)
        {
        
            if (nums[j] > nums[j + 1])
            {

                int temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            
            }
        }
    }


    return nums;
}

void printList(int *nums, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int length = 8;
    printList(arr, length);
    int *sortedArray = bubbleSort(arr, length);

    printList(sortedArray, length);
    return 0;
}
