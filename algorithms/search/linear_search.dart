final List<int> nums = [567, 4, 8, 6, 45, 1, 23, 898, 3, 87];

// O -> Worst Case 

//! Linear Search Method to find 87 from the  array
void main() {
  Stopwatch stopwatch = Stopwatch();

  stopwatch.start();
  printList(nums);

  print(stopwatch.elapsed.inMilliseconds);
}

void printList(List<int> nums){
  // n
  for(int i in nums){
    print(i); // -> 1sec x n => n sec
  }

}

void linearSearch(int value) {
  for (int i = 0; i < nums.length; i++) {
    if (nums[i] == value) {
      print('Index of ${nums[i]} is $i');
      return;
    }
  }
  print('Not Found');
  return;
}
