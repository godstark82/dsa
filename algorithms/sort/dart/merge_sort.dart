void mergeSort(List<int> arr) {
  if (arr.length > 1) {
    int mid = arr.length ~/ 2;

    List<int> left = arr.sublist(0, mid);
    List<int> right = arr.sublist(mid);

    mergeSort(left);
    mergeSort(right);

    merge(arr, left, right);
  }
}

void merge(List<int> arr, List<int> left, List<int> right) {
  int i = 0;
  int j = 0;
  int k = 0;

  while (i < left.length && j < right.length) {
    if (left[i] <= right[j]) {
      arr[k] = left[i];
      i++;
    } else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < left.length) {
    arr[k] = left[i];
    i++;
    k++;
  }

  while (j < right.length) {
    arr[k] = right[j];
    j++;
    k++;
  }
}

void main() {
  List<int> nums = [1, 4, 2, 3, 5, 7, 8, 9, 63, 2, 5];
  print(nums);
  mergeSort(nums);
  print(nums);
}
