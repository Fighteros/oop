# Intro-to-stack

---

- Stack data structure is last in first out (LIFO)

![stack](../imgs/stack.png)

- here we study stack as array with more options

- stack has a property called top which index the top of the stack
- top of the stack is commonly initialized with -1 and with the first addition it comes to 0

## Applications

- Redo: redo a deleted letter
  the deleted elements are added to stack
- back button in browser pages are saved into stack

## Stack using pointer

- using LinkedList

![stack-LinkedList](../imgs/stack-linkedlist.png)

**pros**

1. not size-fixed like stack-array-based
2. each element have a pointer to the following element
3. value + pointer = node

![node](../imgs/node.png)

ways of implementation
in c++

```
struct Node {
  Type Item;
  Node *next;
}
```

in java

```
class Node {
  Type Item
  Node next;
}
```

---
