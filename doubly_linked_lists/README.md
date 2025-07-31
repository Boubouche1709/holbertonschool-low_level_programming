<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# 📘 C - Doubly Linked Lists

## 📝 Project Description
This project is part of a low-level programming curriculum focused on building and manipulating **doubly linked lists** in C. You will implement a series of operations on a custom `dlistint_t` structure and gain mastery over memory handling, pointers, and node traversal from both ends of a list.

## 🎯 Learning Objectives
By the end of this project, you should be able to:
- Define what a doubly linked list is
- Distinguish between singly and doubly linked lists
- Build, traverse, insert, and delete nodes in a doubly linked list
- Understand how dynamic memory allocation works using `malloc` and `free`
- Avoid using global variables and respect strict coding standards
- Locate the right resources to solve coding problems independently

## 🛠 Project Requirements
- **Allowed editors**: `vi`, `vim`, `emacs`
- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All `.c` and `.h` files must end with a new line
- Mandatory use of **Betty** coding style: checked with `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- Maximum of 5 functions per file
- Only the following standard functions are allowed: `malloc`, `free`, `printf`, `exit`
- Push your header file `lists.h` with include guards
- All function prototypes must be declared in the `lists.h` file
- A `README.md` file (this one!) must be present at the root of the project

## 📚 Resources
Recommended reading/watching:
- [What is a Doubly Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)
- Any relevant materials provided by Julien Barbier or linked in the project quiz/resources

## 👨‍💻 Project Structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

 ## 👥 Authors
- [Boubouche1709](https://github.com/Boubouche1709)
