<h1 align="center">Simple shell 💻📡</h1> <br>

<div align="center">

<p>__THE WAY TO SUCCESS__</p>

<img src= "https://miro.medium.com/max/1204/1*5w2fOfCVL5FdK7oYDJgIHg.png" >

</div>

<h2 align="center">Contents 📄</h2> <br>

- [x] Description
- [x] Requirements
- [x] Compilation
- [x] Files content
- [x] Examples
- [x] Authors

<h2 align="center">Description 📑</h2> <br>

A shell is a microprocessor that executes commands every time the user commands it. A linux shell is both a command interpreter as well as a programming language that exposes all the services of the operating system to a user or another program with the help of a command line interface.

<h2 align="center">Requirements 📣</h2> <br>

- [x] Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra and -pedantic`.
- [x] Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.

<h2 align="center">Instalation 🔧</h2> <br>

- Clone this repository in your terminal: `git clone https://github.com/anamariaroman/simple_shell.git`
- Change directory into repository: `cd simple_shell`
- Compile the project: `./compile`

  ** Interactive mode **

- Run the executable that was created on the previous step: `./hsh`
- Now, you can try the following commands: `pwd` `ls` `w`

  ** Non interactive mode **

- Whilst you use the non-interactive mode, you won't need to enter/open the executable. Here's an example: `"echo "pwd" | ./hsh`

<h2 align="center">Compilation ▪️ ▫️ ◾ ◽ ◼️</h2> <br>

Your shell will be compiled this way:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

<h2 align="center">Files content 📕 📗 📘 📙 📓 📔 📒</h2> <br>

| File name            | Descripción                                                           |
| -------------------- | --------------------------------------------------------------------- |
| `shell.h`            | Header file with all the prototipes                                   |
| `Authors`            | File that contains all colaborators for this project                  |
| `hsh`                | Executable file of shell                                              |
| `main_shell.c`       | Shell interpreter                                                     |
| `README.md`          | General information of this project                                   |
| `man_1_simple_shell` | Man page of the simple shell                                          |
| `_exit_.c`           | Function that handles the exit with 'CRTL-D' and "exit" command       |
| `_strtok.c`          | This file separates the string of command line                        |
| `_prompt.c`          | This file make a prompt `$ `                                          |
| `compile`            | Script that contains `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh` |

<h2 align="center">Examples ✔️</h2> <br>

Same example with `ls -l` command but with a different mode.

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

```
./hsh
```

<h3>Interactive mode</h3> <br>

```
$ ls -l
total 80

-rw-rw-r-- 1 vagrant vagrant 160 Apr 10 07:24 AUTHORS
-rw-rw-r-- 1 vagrant vagrant 2394 Apr 11 22:08 README.md
-rw-rw-r-- 1 vagrant vagrant 162 Apr 11 22:35 \_prompt.c
-rw-rw-r-- 1 vagrant vagrant 246 Apr 11 22:37 \_putchar.c
-rw-rw-r-- 1 vagrant vagrant 279 Apr 11 22:37 \_strcat.c
-rw-rw-r-- 1 vagrant vagrant 289 Apr 11 20:55 \_strchr.c
-rw-rw-r-- 1 vagrant vagrant 348 Apr 11 22:45 \_strcmp.c
-rw-rw-r-- 1 vagrant vagrant 392 Apr 11 20:55 \_strdup.c
-rw-rw-r-- 1 vagrant vagrant 180 Apr 11 22:45 \_strlen.c
-rw-rw-r-- 1 vagrant vagrant 591 Apr 11 23:00 \_strtok.c
-rw-rw-r-- 1 vagrant vagrant 229 Apr 11 22:32 \_write.c
-rwxrwxr-x 1 vagrant vagrant 59 Apr 10 07:24 compile
-rw-rw-r-- 1 vagrant vagrant 337 Apr 11 22:57 exit_control.c
-rw-rw-r-- 1 vagrant vagrant 629 Apr 11 23:38 main_shell.c
-rw-rw-r-- 1 vagrant vagrant 1001 Apr 11 22:08 man_1_simple_shell
-rwxrwxr-x 1 vagrant vagrant 13745 Apr 11 23:38 prueba
-rw-rw-r-- 1 vagrant vagrant 614 Apr 11 22:45 shell.h

```

<h3>Non Interactive mode</h3> <br>

In this mode it don't need to run the executable directly.

```
$ echo "ls -l" | ./hsh
total 80

-rw-rw-r-- 1 vagrant vagrant 160 Apr 10 07:24 AUTHORS
-rw-rw-r-- 1 vagrant vagrant 2394 Apr 11 22:08 README.md
-rw-rw-r-- 1 vagrant vagrant 162 Apr 11 22:35 \_prompt.c
-rw-rw-r-- 1 vagrant vagrant 246 Apr 11 22:37 \_putchar.c
-rw-rw-r-- 1 vagrant vagrant 279 Apr 11 22:37 \_strcat.c
-rw-rw-r-- 1 vagrant vagrant 289 Apr 11 20:55 \_strchr.c
-rw-rw-r-- 1 vagrant vagrant 348 Apr 11 22:45 \_strcmp.c
-rw-rw-r-- 1 vagrant vagrant 392 Apr 11 20:55 \_strdup.c
-rw-rw-r-- 1 vagrant vagrant 180 Apr 11 22:45 \_strlen.c
-rw-rw-r-- 1 vagrant vagrant 591 Apr 11 23:00 \_strtok.c
-rw-rw-r-- 1 vagrant vagrant 229 Apr 11 22:32 \_write.c
-rwxrwxr-x 1 vagrant vagrant 59 Apr 10 07:24 compile
-rw-rw-r-- 1 vagrant vagrant 337 Apr 11 22:57 exit_control.c
-rw-rw-r-- 1 vagrant vagrant 629 Apr 11 23:38 main_shell.c
-rw-rw-r-- 1 vagrant vagrant 1001 Apr 11 22:08 man_1_simple_shell
-rwxrwxr-x 1 vagrant vagrant 13745 Apr 11 23:38 prueba
-rw-rw-r-- 1 vagrant vagrant 614 Apr 11 22:45 shell.h

```

<h2 align="center">Authors 👩 👦</h2> <br>

- Ana María Román Valencia | [Github](https://github.com/anamariaroman) | [Twiter](https://twitter.com/AnaMari77939013)
- Juan Pablo Gaviria Barrera | [Github](https://github.com/Juanpagab99) | [Twiter](https://twitter.com/JuanPab27132211)

<div dir="rtl">10/04/2021</div>
