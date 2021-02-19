#  0x1C. C - Makefiles :file_folder:
---


## Description :newspaper:
This project was created with learning purposes at Holberton School, and is about ```make``` and ```makefile``` in C.
- Ubuntu 14.04
- version of ```gcc```: 4.8.4
- Version of ```make```: 3.81

---
### Resources :blue_book: :orange_book: :green_book:
###### Read or watch:
- [Makefile](https://www.gnu.org/software/make/manual/make.html)
- In the following tasks, I am going to use [these files](https://github.com/holbertonschool/0x1B.c).

---

### Tasks :white_check_mark:

##### 0. make -f 0-Makefile
Create your first Makefile.
Requirements:
- name of the executable: ```holberton```
- rules: ```all```
    - The ```all``` rule builds your executable

##### 1. make -f 1-Makefile
Requirements:
- name of the executable: ```holberton```
- rules: ```all```
    - The ```all``` rule builds your executable
- variables: ```CC```, ```SRC```
    - ```CC```: the compiler to be used
    - ```SRC```: the ```.c``` files

##### 2. make -f 2-Makefile
Create your first useful Makefile.
Requirements:
- name of the executable: ```holberton```
- rules: ```all```
    - The ```all``` rule builds your executable
- variables: ```CC```, ```SRC```, ```OBJ```, ```NAME```
    - ```CC```: the compiler to be used
    - ```SRC```: the ```.c``` files
    - ```OBJ```: the ```.o``` files
    - ```NAME```: the name of the executable
- The ```all``` rule should recompile only the updated source files
- You are not allowed to have a list of all the ```.o``` files

##### 3. make -f 3-Makefile mandatory
Requirements:
- name of the executable: holberton
- rules: ```all```, ```clean```, ```oclean```, ```fclean```, ```re```
    - ```all```: builds your executable
    - ```clean```: deletes all Emacs and Vim temporary files along with the executable
    - ```oclean```: deletes the object files
    - ```fclean```: deletes all Emacs and Vim temporary files, the executable, and the object files
    - ```re```: forces recompilation of all source files
- variables: ```CC```, ```SRC```, ```OBJ```, ```NAME```, ```RM```
    -```CC```: the compiler to be used
    - ```SRC```: the ```.c``` files
    - ```OBJ```: the ```.o``` files
    - ```NAME```: the name of the executable
    - ```RM```: the program to delete files
- The ```all``` rule should recompile only the updated source files
- The ```clean```, ```oclean```, ```fclean```, ```re``` rules should never fail
- You are not allowed to have a list of all the ```.o``` files

##### 4. A complete Makefile mandatory
Requirements:
- name of the executable: ```holberton```
- rules: ```all```, ```clean```, ```fclean```, ```oclean```, ```re```
    - ```all```: builds your executable
    - ```clean```: deletes all Emacs and Vim temporary files along with the executable
    - ```oclean```: deletes the object files
    - ```fclean```: deletes all Emacs and Vim temporary files, the executable, and the object files
    - ```re```: forces recompilation of all source files
- variables: ```CC```, ```SRC```, ```OBJ```, ```NAME```, ```RM```, ```CFLAGS```
    - ```CC```: the compiler to be used
    - ```SRC```: the ```.c``` files
    - ```OBJ```: the ```.o``` files
    - ```NAME```: the name of the executable
    - ```RM```: the program to delete files
    - ```CFLAGS```: your favorite compiler flags: ```-Wall -Werror -Wextra -pedantic```
- The ```all``` rule should recompile only the updated source files
- The ```clean```, ```oclean```, ```fclean```, ```re``` rules should never fail
- You are not allowed to have a list of all the ```.o``` files

##### 5. Island Perimeter mandatory
**Technical interview preparation:**
Create a function ```def island_perimeter(grid):``` that returns the perimeter of the island described in ```grid```:
- ```grid``` is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

---
## Author :bust_in_silhouette:

- [Adrian Vides] | [Twitter] | [GitHub]



[GitHub]: <https://github.com/AdrianVides56>
[Twitter]: <https://twitter.com/termi56661>
[Adrian Vides]: <https://www.linkedin.com/in/adrian-felipe-vides-jimenez-a201401b7> 
