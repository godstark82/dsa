
import 'stack.dart';

void main() {
  Stack<int> stack = Stack();

  List<int> list = [-1, 7, 4, 0, -1, 5, -1, 6, 9, -1, -1, -1];

  for (int i = 0; i < list.length; i++) {
    if (list[i] == -1) {
      if (stack.isEmpty) {
        stack.push(-999);
      } else {
        stack.pop();
      }
    } else {
      stack.push(list[i]);
    }
  }

  for (int i = 0; i < stack.length; i++) {
    
    print(stack.peek);
    stack.pop();
  }
}
