import 'dart:io';

class Node<T> {
  T data;
  Node<T>? next;

  Node(this.data, {this.next});
}

class LinkedList<T> {
  Node<T>? head;

  LinkedList(T data) {
    head = Node(data);
    head?.next = null;
  }

  void insertAtBeginning(T data) {
    Node<T> tempNode = Node(data);
    if (head == null) {
      head = tempNode;
      return;
    }
    tempNode.next = head;
    head = tempNode;
  }

  void insertAtEnd(T data) {
    Node<T> tempNode = Node(data);

    if (head == null) {
      head = tempNode;
      return;
    }

    Node<T> currentNode = head!;

    while (currentNode.next != null) {
      currentNode = currentNode.next!;
    }
    currentNode.next = tempNode;
  }

  void removeFirst() {
    if (head == null) {
      return;
    }
    head = head!.next;
  }

  void removeLast() {
    if (head == null) {
      return;
    }
    Node<T>? current = head;

    while (current?.next?.next != null) {
      current = current?.next;
    }

    current!.next = null;
  }

  void printll() {
    Node<T>? current = head;

    while (current != null) {
      stdout.write(current.data.toString() + ' -> ');
      current = current.next;
    }
    print('NULL');
  }
}

void main(List<String> args) {
  LinkedList ll = LinkedList(1);
  ll.insertAtEnd(2);
  ll.insertAtBeginning(0);
  // ll.removeLast();
  // ll.removeFirst();
  ll.printll();
}
