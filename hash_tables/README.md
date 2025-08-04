<p align="center">
  <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# 📘 C - Hash Tables

## 📝 Project Description
This project is part of a low-level programming curriculum that focuses on implementing **hash tables** from scratch in C. You'll work with key concepts like hash functions, collisions, and linked list chaining to simulate how dictionaries or maps work under the hood. This experience will enhance your understanding of how high-level languages like Python implement dictionaries and key-value storage efficiently.

## 🎯 Learning Objectives

By the end of this project, you should be able to explain, **without the help of Google**:

- What is a **hash function**
- What makes a **good hash function**
- What is a **hash table**, how it works, and how to use it
- What is a **collision**, and how to handle it (e.g., **chaining**)
- The **advantages and limitations** of using hash tables
- **Real-world use cases** of hash tables

## 🛠 Project Requirements

- **Allowed editors**: `vi`, `vim`, `emacs`
- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code must follow **Betty coding style**, verified using:
  - `betty-style.pl`
  - `betty-doc.pl`
- No use of **global variables**
- Maximum of **5 functions per file**
- You may use the **C standard library**
- All **function prototypes** must be declared in `hash_tables.h`
- Push your **header file**, and ensure all headers are **include guarded**

## 🧱 Data Structures

### `hash_node_t` – Node of a hash table
```c
typedef struct hash_node_s
{
    char *key;              /* Unique key */
    char *value;            /* Value associated with the key */
    struct hash_node_s *next; /* Next node in case of collision (chaining) */
} hash_node_t;
```

 ## 👥 Authors
- [Boubouche1709](https://github.com/Boubouche1709)
