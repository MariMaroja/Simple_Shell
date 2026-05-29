# Simple Shell in C

A simple command-line shell built in C to practice systems programming concepts, command handling, and terminal interaction.

This project simulates a basic shell environment capable of reading user input, executing commands, and handling built-in shell commands through an interactive terminal interface.

## Features

* Interactive shell prompt
* Command input handling
* Built-in commands:

  * `help`
  * `clear`
  * `exit`
* Execution of system commands
* Unknown command detection
* Basic command parsing
* Continuous shell loop

## How It Works

The shell waits for user input and interprets commands entered in the terminal.

Built-in commands are handled internally, while system commands are executed through the operating system.

### Example Session

```txt
myshell> help

Available commands:
help
clear
exit

myshell> whoami
DESKTOP-USER\Mariana

myshell> ipconfig
Windows IP Configuration

myshell> clear
```

### Built-in Commands

| Command | Description                 |
| ------- | --------------------------- |
| `help`  | Displays available commands |
| `clear` | Clears the terminal screen  |
| `exit`  | Exits the shell             |

## Technologies Used

* C
* Standard C Libraries:

  * `stdio.h`
  * `string.h`
  * `stdlib.h`

## Concepts Practiced

This project helped practice:

* Loops
* Conditional logic
* String manipulation
* Command parsing
* Terminal interaction
* System command execution
* Input handling in C
* Basic systems programming concepts

## Project Structure

```txt
simple-shell/
│── main.c
│── README.md
```

## Installation

Clone the repository:

```bash
git clone https://github.com/yourusername/simple-shell.git
```

Go to the project folder:

```bash
cd simple-shell
```

Compile the project:

```bash
gcc main.c -o simple_shell
```

Run the shell:

### Windows

```bash
simple_shell.exe
```

### Linux / macOS

```bash
./simple_shell
```

## Example Usage

```txt
myshell> help

Available commands:
help
clear
exit

myshell> dir

myshell> hostname

myshell> whoami

myshell> exit
```

## Future Improvements

* Command history
* `cd` command support
* Better argument parsing
* Custom shell prompt
* Support for additional built-in commands
* Improved terminal formatting
* Modularized code structure

## What I Learned

Through this project, I practiced how command-line interfaces work internally, how shells interpret user input, and how to manage commands using C.

I also improved my understanding of strings, loops, terminal interaction, and basic systems programming logic.

## License

This project is open for learning and portfolio purposes.
