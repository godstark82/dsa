import 'dart:io';

int main(List<String> args) {
  LinkedList<int> ll = LinkedList<int>();
  ll.addFirst(3);
  ll.addFirst(2);
  ll.addLast(56);
  ll.printList();
  return 0;
}

class Node<E> {
  final E data;
  Node<E>? next;

  Node(this.data, {this.next});
}

class LinkedList<E> {
  Node<E>? head;

  LinkedList({this.head});

  bool get isEmpty => head == null;
  bool get isNotEmpty => !isEmpty;

  void addFirst(E data) {
    if (isEmpty) {
      head = Node<E>(data);
      return;
    }
    Node<E>? tempNode = head;
    head = Node<E>(data, next: tempNode);
  }

  void addLast(E data) {
    final newNode = Node<E>(data);
    if (isEmpty) {
      head = newNode;
      return;
    }
    Node<E>? currentNode = head;
    while (head?.next != null) {
      currentNode = currentNode?.next;
    }
    currentNode?.next = newNode;
  }

  void removeFirst() {
    if (isEmpty) {
      return;
    }
    head = head?.next;
  }

  void removeLast() {
    if (isEmpty) {
      return;
    }
    Node<E>? currentNode = head;
    while (currentNode?.next == null) {
      currentNode = currentNode?.next;
    }
    currentNode = null;
  }

  void printList() {
    Node<E>? currentNode = head;
    while (currentNode != null) {
      stdout.write("${currentNode.data} -> ");
      currentNode = currentNode.next;
    }
  }
}
