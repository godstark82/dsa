class Stack<T> {
  Stack() : _storage = <T>[];
  final List<T> _storage;

  Stack.of(Iterable<T> elements) : _storage = List<T>.of(elements);

  @override
  String toString() {
    return '--- TOP ---\n'
        '${_storage.reversed.join('\n')}'
        '\n ------';
  }

  void push(T element) {
    _storage.add(element);
  }

  T pop() => _storage.removeLast();

  T get peek => _storage.last;

  bool get isEmpty => _storage.isEmpty;

  bool get isNotEmpty => !isEmpty;
}
