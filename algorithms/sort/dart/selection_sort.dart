//! Selection Sort in Dart
//? Time Complexity -> O(n^2)
//? Space Complexity -> O(1)
//
//? Selection Sort is Not Stable -> It does not maintain the order of same elements in the array while sorting.
//? Selection Sort is Not Adaptive -> It does not get advantage of an already sorted array it does same comparisions even if array is sorted.
//? Sorting in Minimum number of swaps
//
//
//
//* In this algo We find smallest in the array and place it in the beginning and so on
//* It takes [N-1] Passes to complete the sorting where N is the length

void main() {
  List<int> nums = [9,8,7,6,5,4,3,2,1];
  print(nums);
  print(selectionSort(nums, nums.length));
}

List<int> selectionSort(List<int> nums, int n) {
  int index;

  int swaps = 0, compares = 0;

  for (int i = 0; i < n - 1; i++) {
    index = i;

    for (int j = i + 1; j < n; j++) {
      compares++;
      if (nums[j] < nums[index]) {
        index = j;
      }
    }
    swaps++;
    int temp = nums[index];
    nums[index] = nums[i];
    nums[i] = temp;
  }
  print('Total Swaps: $swaps , \n Total Comapares: $compares');
  return nums;
}

// List<int> selectionSort(List<int> nums, int n) {
//   int indexOfMin;
//   for (int i = 0; i < n - 1; i++) {
//     indexOfMin = i;
//     for (int j = i + 1; j < n; j++) {
//       if (nums[j] < nums[indexOfMin]) {
//         indexOfMin = j;
//       }
//     }

//     //! Swapping the lowest value index with I(th) element
//     int temp = nums[i];
//     nums[i] = nums[indexOfMin];
//     nums[indexOfMin] = temp;
//   }
//   return nums;
// }
