import 'dart:io';


void rectanglePattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      stdout.write('*');
    }
    print('');
  }
}

void starTriangle(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      stdout.write('*');
    }
    print('');
  }
}

void numTriangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      stdout.write(j);
    }
    print('');
  }
}

void numTriangle2(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      stdout.write(i);
    }
    print('');
  }
}

void reverseTriangle(int n) {
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      stdout.write('*');
    }
    print('');
  }
}

void pascalTriangle(int n) {
  // if n == 5
  // colm = 2n - 1
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= n - i - 1; j++) {
      stdout.write(' ');
    }
    for (int k = 1; k <= 2 * i + 1; k++) {
      stdout.write('*');
    }

    for (int l = 1; l <= n - i - 1; l++) {
      stdout.write(' ');
    }

    print('');
  }
}

void reversePascalTriangle(int n) {
  for (int i = n-1; i >= 0; i--) {
    //! Space
    for (int j = 0; j < n - i - 1; j++) {
      stdout.write(' ');
    }
    //! Stars
    for (int k = 0; k < 2 * i + 1; k++) {
      stdout.write('*');
    }

    //! Space
    for (int j = 0; j < n - i - 1; j++) {
      stdout.write(' ');
    }

    print('');
  }
}

void pattern10(int n){
  for(int i = 0; i <= n; i++){
    for(int j = 0; j < i; j++){
      stdout.write('*');
    }
    print('');
  }
  for(int i = n; i > 0; i--){
     for(int j = 0; j < i; j++){
      stdout.write('*');
     }
     print(''); 
  }
}



void main() {
  pattern10(5);
}
