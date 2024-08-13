final List<int> list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

void main() {
  reverseList(list);
}

void doSomething() {
  //
  return;
}

void reverseList(List<int> l) {
  List<int> newList = [];
  for (int i = l.length - 1; i >= 0; i--) {
    newList.add(l[i]);
  }
  print(newList);
}
