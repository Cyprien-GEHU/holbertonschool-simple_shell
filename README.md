
# Simple Shell Project 🚀

## 1. Description 📜

This project involves creating a simplified version of a Unix shell. A shell is a command-line interface that allows users to interact with the operating system by executing commands.

The primary goal of this project is to learn fundamental operating system concepts such as:
- Process management.
- Input/output handling.
- System calls.
- Implementing basic shell features.
## ## 2. Features 🛠️

Our shell supports the following features:
- Displaying a prompt (e.g., `$ `) where users can type commands.
- Execution of built-in commands like `exit` and `env`.
- Handling file paths to locate executables (using the `PATH` environment variable).
- Passing arguments to commands.
- Error handling for scenarios such as command not found or permission denied.
- Running commands in child processes.

## ## 3. Compilation ⬇️
To compile this project, use the following command:


`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o hsh`

Compiler options explained:

`-Wall`: Enables all warnings.

`-Wextra`: Enables additional warnings.

`-Werror`: Treats warnings as errors.

`-pedantic`: Enforces strict C compliance.

`-std=gnu89`: Specifies the GNU89 standard for compatibility.
## Demo

Insert gif or link to demo


## 4. Usage 🖥️
Running the Shell:

After compiling, you can run the shell using:

```bash
  ./hsh
```
The shell will display a prompt ($) where you can type commands.

Example:

```bash
$ ls -l
total 64
-rw-r--r-- 1 user user 1024 Jan 12 12:00 file.c
$ pwd
/home/user/project
$ exit
```



## 5. Built-In Commands 📋

`exit`

* Description: Exits the shell.

* Usage: exit [status]
If no status is provided, the shell exits with the last executed 
command's status.

`env`
* Description: Prints the current environment variables.
* Usage: `env`
## 6. Man Page 📖
## 7. Files Included 📂

* main.h: Header file containing all function prototypes and macros.

* shell.c: The main shell program.

* builtins.c: Contains built-in command implementations.

* helpers.c: Utility functions for string manipulation and error handling.

* path.c: Functions to handle the PATH environment variable.

* man_1_simple_shell: Man page for the shell.
## 8. Example Session 💻
```bash
$ ./hsh
$ echo "Hello, World!"
Hello, World!
$ env
HOME=/home/user
PATH=/usr/local/bin:/usr/bin:/bin
$ ls
file.c  shell.c  README.md
$ exit
```
## 9. Requirements 📝
* Environment: Ubuntu 20.04 LTS
* Compiler: gcc with the flags -Wall -Wextra -Werror -pedantic -std=gnu89
* Code Style: Betty style.
* Limitations:No global variables allowed.
Maximum of 5 functions per file.

## 10. Authors ✒️
[@Cyprien-GEHU](https://www.github.com/@Cyprien-GEHU) & [@Iyed13tns](https://www.github.com/Iyed13tns)
