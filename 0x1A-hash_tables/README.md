# 0x09. 0x1A. C - Hash tables
---
### Description
###### This project was created for learning purposes, about the data strcuture Hash Tables
---
### Resources
###### Read or watch:
- https://www.youtube.com/watch?v=MfhjkfocRR0
---
### Tasks
##### 0. >>> ht = {} 
Write a function that creates a hash table.
- Prototype: ```hash_table_t *hash_table_create(unsigned long int size);```
    - where size is the ```size``` of the array
##### 1. djb2
Write a hash function implementing the djb2 algorithm.
- Prototype: ```unsigned long int hash_djb2(const unsigned char *str);```
##### 2. key -> index 
Write a function that gives you the index of a key.
- Prototype: ```unsigned long int key_index(const unsigned char *key, unsigned long int size);```
    - where ```key``` is the key
    - and ```size``` is the size of the array of the hash table
##### 3. >>> ht['betty'] = 'holberton' 
Write a function that adds an element to the hash table.
- Prototype: ```int hash_table_set(hash_table_t *ht, const char *key, const char *value);```
    - Where ```ht``` is the hash table you want to add or update the key/value to
    - ```key``` is the key.
    - and ```value``` is the value associated with the key. ```value``` must be duplicated.
##### 4. >>> ht['betty'] 
Write a function that retrieves a value associated with a key.
- Prototype: ```char *hash_table_get(const hash_table_t *ht, const char *key);```
    - where ```ht``` is the hash table you want to look into
    - and ```key``` is the key you are looking for
##### 5. >>> print(ht) 
Write a function that prints a hash table.
- Prototype: ```void hash_table_print(const hash_table_t *ht);```
    - where ```ht``` is the hash table
##### 6. >>> del ht 
Write a function that deletes a hash table.
- Prototype: ```void hash_table_delete(hash_table_t *ht);```
    - where ```ht``` is the hash table

---
## Author
[Adrian Vides] | [Twitter] | [GitHub]


[GitHub]: <https://github.com/AdrianVides56>
[Twitter]: <https://twitter.com/termi56661>
[Adrian Vides]: <https://www.linkedin.com/in/adrian-felipe-vides-jimenez-a201401b7> 
