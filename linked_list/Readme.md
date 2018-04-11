# Fix bug in ori.c

`FunC()` will find value2 in linked list, and insert a new node in back of it. However, the original version does not mention this bug and will cause infinite loop when using a value which is not in the linked list.

Fixed the bug by detecting whether the pointer reaches the start point or not.
