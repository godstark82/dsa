void main(List<String> args) {
  List<int> nums = [1, 2, 1, 2, 2, 3, 4, 5, 4, 3, 5, 6];

  nums.sort();

  int length = nums.elementAt(nums.length - 1);

  List<int> resultArray = List.filled(length, 0);

  for (int i = 0; i < nums.length-1; i++) {
    resultArray[nums[i]] += 1;
  }

  print(resultArray);
}
