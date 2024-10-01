import 'stack.dart';

bool isOperator(String c) {
  return c == '+' || c == '-' || c == '*' || c == '/';
}

bool isOperand(String c) => !isOperator(c);

void main(List<String> args) {
  String exp = 'a+b-c+d-e';
  exp.replaceAll(' ', '');
  Stack stack = Stack();

  List<String> result = [];

  for (int i = 0; i < exp.length; i++) {
    if (isOperand(exp[i])) {
      result.add(exp[i]);
    }

    if (isOperator(exp[i])) {
      stack.push(exp[i]);
    }
  }
  for (int i = 0; i < stack.length; i++) {
    result.add(stack.pop());
  }

  print(result
  
  
  
  );
}
