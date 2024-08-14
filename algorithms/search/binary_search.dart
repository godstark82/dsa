final List<int> nums = [1, 4, 8, 6, 45, 87, 23, 898, 3, 567];

void main(List<String> args) {
  nums.sort();

  int index = 0;

  if (index != -1) {
    print('Value found at index $index');
  } else {
    print('Value not found');
  }
}

int iterativeBinarySearch(List<int> nums, value) {
  int left = 0;
  int right = nums.length - 1;

  while (left <= right) {
    int mid = left + (right - left) ~/ 2;

    if (mid == nums[mid]) {
      return mid;
    }

    if (value < nums[mid]) {
      right = mid - 1;
    }
    if (value > nums[mid]) {
      left = mid + 1;
    }
  }
  return -1;
}

int recursiveBinarySearch(List<int> nums, int value, int left, int right) {
  if (left <= right) {
    int mid = left + (right - left) ~/ 2;

    if (value == nums[mid]) {
      return mid;
    }

    if (value < nums[mid]) {
      return recursiveBinarySearch(nums, value, left, mid - 1);
    }
    if (value > nums[mid]) {
      return recursiveBinarySearch(nums, value, mid + 1, right);
    }
  }

  return -1;
}
