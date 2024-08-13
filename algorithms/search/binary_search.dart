
final List<int> nums = [1, 4, 8, 6, 45, 87, 23, 898, 3, 567];

void main(List<String> args) {
  nums.sort();
  Stopwatch stopwatch = Stopwatch();

  stopwatch.start();
  int index = binarySearch(nums, 87, 0, nums.length - 1);
  if (index != -1) {
    print('Value found at index $index');
  } else {
    print('Value not found');
  }
  print(stopwatch.elapsed.inMilliseconds);
}

int binarySearch(List<int> nums, int value, int low, int high) {
  if (low <= high) {
    int mid = (low + high) ~/ 2;

    if (value == nums[mid]) {
      return mid;
    }

    if (value > nums[mid]) {
      return binarySearch(nums, value, mid + 1, high);
    } else {
      return binarySearch(nums, value, low, mid - 1);
    }
  }

  return -1;
}
