# C - Hash Tables

In this project, we explore the concept of hashing by implementing hash functions and hash tables in the C programming language.

## Description

This project provides an implementation of hash tables, which are data structures that store key-value pairs. Hash tables use a hash function to map keys to indices in an array, providing efficient access to values based on their keys.

### Tests

- **tests:** Folder containing test files provided by Holberton School.

### Header File

- **hash_tables.h:** Header file containing definitions and function prototypes for all types and functions implemented in this project.

### Data Structures

#### Hash Table

- `hash_table_t`: Structure representing a hash table.
  ```c
  typedef struct hash_table_s
  {
      unsigned long int size;
      hash_node_t **array;
  } hash_table_t;
  ```

- `hash_node_t`: Structure representing a node in a hash table.
  ```c
  typedef struct hash_node_s
  {
      char *key;
      char *value;
      struct hash_node_s *next;
  } hash_node_t;
  ```

#### Sorted Hash Table

- `shash_table_t`: Structure representing a sorted hash table.
  ```c
  typedef struct shash_table_s
  {
      unsigned long int size;
      shash_node_t **array;
      shash_node_t *shead;
      shash_node_t *stail;
  } shash_table_t;
  ```

- `shash_node_t`: Structure representing a node in a sorted hash table.
  ```c
  typedef struct shash_node_s
  {
      char *key;
      char *value;
      struct shash_node_s *next;
      struct shash_node_s *sprev;
      struct shash_node_s *snext;
  } shash_node_t;
  ```

### Function Prototypes

The project provides various C functions to work with hash tables and sorted hash tables. Each function is defined in a separate C file and is listed below along with its file name and prototype.

- **File:** `0-hash_table_create.c`
  - `hash_table_t *hash_table_create(unsigned long int size);`

- **File:** `1-djb2.c`
  - `unsigned long int hash_djb2(const unsigned char *str);`

- **File:** `2-key_index.c`
  - `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

- **File:** `3-hash_table_set.c`
  - `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

- **File:** `4-hash_table_get.c`
  - `char *hash_table_get(const hash_table_t *ht, const char *key);`

- **File:** `5-hash_table_print.c`
  - `void hash_table_print(const hash_table_t *ht);`

- **File:** `6-hash_table_delete.c`
  - `void hash_table_delete(hash_table_t *ht);`

- **File:** `100-sorted_hash_table.c`
  - `shash_table_t *shash_table_create(unsigned long int size);`
  - `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
  - `char *shash_table_get(const shash_table_t *ht, const char *key);`
  - `void shash_table_print(const shash_table_t *ht);`
  - `void shash_table_print_rev(const shash_table_t *ht);`
  - `void shash_table_delete(shash_table_t *ht);`

## Tasks

The project includes various tasks to demonstrate the functionality of the implemented hash tables.

1. **Hash Table Creation**
   - `0-hash_table_create.c`: Creates a hash table.
   - Returns a pointer to the new hash table on success; otherwise, returns NULL.

2. **djb2 Hash Function**
   - `1-djb2.c`: Implements the djb2 hashing algorithm.

3. **Key to Index Mapping**
   - `2-key_index.c`: Returns the index at which a key/value pair should be stored in a hash table array.

4. **Hash Table Insertion**
   - `3-hash_table_set.c`: Adds an element to a hash table.
   - Returns 1 on success; otherwise, returns 0.

5. **Hash Table Lookup**
   - `4-hash_table_get.c`: Retrieves a value associated with a key in a hash table.

6. **Hash Table Printing**
   - `5-hash_table_print.c`: Prints a hash table.

7. **Hash Table Deletion**
   - `6-hash_table_delete.c`: Deletes a hash table.

8. **Sorted Hash Table Creation**
   - `100-sorted_hash_table.c`: Defines a sorted hash table that maintains key/value pairs in alphabetical order.
   - Provides functions to create, insert, retrieve, print, and delete elements from the sorted hash table.

## Conclusion

Through this project, I have  gained a deeper understanding of hashing and how hash tables can be implemented in C to efficiently store and retrieve data.
