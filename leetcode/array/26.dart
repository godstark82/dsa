// Remove Duplicates From a Array

void main() {
  List<int> nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];

  print(nums);
  nums = removeDuplicates(nums);

  print(nums);
}

List<int> removeDuplicates(List<int> nums) {
  for (int i = 0; i < nums.length; i++) {
    int current = nums[i];

    for (int j = 0; j < nums.length; j++) {
      if (nums[j] == current && i != j) {
        nums[j] = -1;
      }
    }
    nums.removeWhere((v)=> v == -1);
  }

  return nums;
}
