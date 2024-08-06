# CODTECH-Task2
Name: Pranali Magar. 
Company: CODTECH IT SOLUTIONS.
ID:CT08DS5826.
Domain: Cpp programming.
Duration:July to Sept 2024.
# Overview of this Project
This project is a simple command-line shell implemented in C++ for Windows systems. It allows users to execute basic shell commands, manage directories, and handle background processes. Here's an overview of its components and features:

1. Project Components
Header Files:
<iostream>: For standard input and output operations.
<string>: For using std::string class.
<vector>: For using std::vector to handle lists of arguments.
<sstream>: For parsing input strings into individual tokens.
<windows.h>: For Windows API functions.
<direct.h>: For directory-related functions like _chdir.
Functions:
parseCommand(): Parses user input into command arguments, detects background execution, and handles I/O redirection.
changeDirectory(): Changes the current working directory using the _chdir function.
executeCommand(): Constructs and executes shell commands using the system() function.
main(): The main loop of the shell, which interacts with the user, parses commands, and invokes appropriate functions.

2. Key Features
Command Parsing:
The parseCommand() function splits the user input into arguments and identifies if the command should be run in the background by checking for &.
Handles simple command-line parsing but does not support complex I/O redirection (< and >).
Changing Directories:
The changeDirectory() function allows users to change the current working directory with the cd command. It uses the _chdir() function from <direct.h> to modify the directory.
Command Execution:
The executeCommand() function constructs the command string and executes it using the system() function.
Supports background execution by appending & to the command, although Windows system() does not handle background tasks in the same way as Unix-based systems.
Main Loop:
Continuously prompts the user for input, processes the command, and executes it.
Recognizes the exit command to terminate the shell.

3. Usage
Compiling:
Compile the code using a C++ compiler. For example, using g++:
bash
Copy code
g++ MINISHELL.cpp -o myexe
Running:
Execute the compiled program:
bash
Copy code
myexe
Interaction:
The shell prompt mini-shell> is displayed.
Users can enter commands like dir, cd, and echo.
Background execution can be simulated with &, although its behavior is limited compared to Unix shells.

4. Limitations and Future Enhancements
Limitations:
No Advanced I/O Redirection: The shell does not handle input (<) and output (>) redirection directly.
Basic Background Execution: Background execution using & is simulated but does not fully support asynchronous processes.
Future Enhancements:
Support for I/O Redirection: Implement functionality to handle < and > for redirecting input and output.
Piping: Allow piping between commands (command1 | command2).
Enhanced Error Handling: Provide more robust error messages and handling.
Command History: Implement a feature to recall and repeat previously executed commands.
User Customization: Allow for more user customization of shell behavior and appearance.

Summary
This extended mini shell project provides a basic command-line interface for executing commands, changing directories, and handling simple background processes on Windows. It serves as a foundational example of how to build a command-line shell and can be extended with more advanced features to enhance its functionality.
Output of this Project:
![Screenshot 2024-08-06 143805](https://github.com/user-attachments/assets/d83492d9-7ed1-4349-b32e-583c91dfa134)


