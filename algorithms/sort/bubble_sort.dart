//! Bubble Sort Algorithm
//? Time Complexity -> O(n^2)
//? Space Complexity -> O(1)

//* In this algo we find maximum in array and place it in the last and so on...
void main() {
  //
  List<int> nums = [8,7,6,5,4,3,2,1];
  print(nums);
  print(bubbleSort(nums, nums.length));
}

List<int> bubbleSort(List<int> nums, int length) {
  int compares = 0;
  int swaps = 0;
  for (int i = 0; i < length - 1; i++) {
    //! Total N - 1 Iteration
    compares++;
    for (int j = 0; j < length - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
        swaps++;
      }
    }
  }
  print('Total Compares: $compares');
  print('Total Swaps: $swaps');
  return nums;
}

// List<int> bubbleSort(List<int> nums, int n) {
//   for (int i = 0; i < n-1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       if (nums[j] > nums[j + 1]) {
//         int temp = nums[j];
//         nums[j] = nums[j + 1];
//         nums[j + 1] = temp;
//       }
//     }
//   }
//   return nums;
// }
