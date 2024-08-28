int countInArray(List<int> nums, int value) {
  Map<int, int> countMap = {};

  for (int i = 0; i < nums.length; i++) {
    countMap[nums[i]] = (countMap[nums[i]] ?? 0) + 1;
  }

  return countMap[value] ?? 0;
}

void main() {
  List<int> list = [2, 4, 3, 2, 3, 4, 3, 2, 13, 6];

  print(countInArray(list, 2349238));
}
