CS 2401 Spring 2026
# Using A Terminal Debugger 

This activity is intended to help you get familiar with a terminal debugger and some basic commands that you can use. Debuggers of this kind are not meant to help you find syntax errors (the compiler does that for you), they are meant to help you find logic (runtime) errors. This is by no means an exhaustive list of the commands/features of this debugger (you can find more reference materials online).  

If you are using Linux or WSL on Windows, make sure that you have GDB installed. You can check this in a terminal by running:  
```which gdb```  
If you see a path ending in ```gdb```, then you are good to go. If you do not, run these commands:  
```
sudo apt update
sudo apt-get update
sudo apt-get install gdb
```  

If you are using MacOS, then you will use a different debugger. Apple's terminal debugger is called ```lldb```. It will already be installed and accessible via the terminal. Most (or all) of the commands in this activity have been aliased by lldb so they should work. However, I have also linked a gdb to lldb translation table on Canvas for any commands that do not work for you.  

***  

Start by doing the following:  
1. Compile the main program and run it  
    ```
    g++ -Wall main.cc
    ./a.out
    ```  
2. When prompted, enter 4, 5, 6, -12.  
3. The average of 4, 5, and 6 should be 5, however, that is not the answer the program is giving. Let's use the debugger to figure out why (even if you have already spotted a few of the issues).  

***  

To use the terminal based debugger, you must add a new compiler flag ```-g```. This flag tells the compiler to add debugging symbols to your executable that will allow you to do things like set breakpoints in the code and see the value of variables that are currently in scope.  

Compile the program again, but do not run it:  
```g++ -Wall -g main.cc```  

Now you want to start the executable in the debugger. To do this, you run the command:  
```gdb ./a.out``` for Linux and WSL or  
```lldb ./a.out``` for MacOS  

This should open the debugger program and show a new prompt. It is now waiting for you to enter commands.  

Begin by setting a breakpoint. This tells the program to pause executing when it reaches the line or function that you specify so that you can walk through the program one line at a time. For our purposes, you want to pause as soon as possible (when the main function starts). To do this you use the ```break``` or ```b``` command:  
```b main```  

You can also set breakpoint at any other function by changing ```main``` to the name of the other function OR at any line in any file by entering something like:  
```b main.cc:15```  
To set a breakpoint in the file main.cc at line 15.  

Once you have set all breakpoints that you want, you can start the program with the ```run``` or ```r``` command:  
```r```  

What you should see now on the screen is a line of code from your program. This line of code has not yet executed, but it is the next line of code that the computer wants to run.  
* If you want to execute that line, use the ```next``` or ```n``` command.  
* If the line has a function call (say you are calling a member function on an object of a class that you wrote), using the ```n``` command will skip over all the details of that function's execution. If you instead want to see the execution of that function line-by-line, you should use the ```step``` or ```s``` command to switch the context into that function.  

***  

In order to figure out what is going wrong, you are most likely going to need to pay attention to the values of your variables to see what you have stored and how it is changing as the program executes. To do this, you can use the ```print``` or ```p``` command. For the example program I gave you, the variables we have are ```sum```, ```n```, and ```count```. If you want to see the value of one specific variable you can run:  
```p sum``` - list the specific variable's name  
If you want to see the values of all variables defined in the current context, you can run:  
```info locals```  

Using these commands, walk through the main line-by-line inspecting the values of the variables until you find the issues. Once you have identified where the logic has gone wrong, you can exit the debugger using the ```quit``` or ```q``` command. Now, fix the main program.  

You must recompile the main and run it again to see if you get the correct result. If you still are getting the wrong answer, run the debugger again to identify the remaining issues.  

***  

Here is a summary of the basic commands:  
* break - where to pause execution  
    * ```break main``` - when main begins  
    * ```break MyClass:my_func``` - when my_func begins  
    * ```break myfile.cc:129``` - line number 129 in myfile.cc  
* ```run``` - start executing the program  
* ```n``` - run the next line (whatever line is showing on the screen)  
* ```s``` - step into a function call  
* ```p var_name``` - "peek" at the value of the variable whose name I gave  
* ```info locals``` - show the value of all variables that are currently defined  
* ```continue``` or ```c``` - resume normal program execution until you hit the next breakpoint  
* ```where``` - show where a program is stopped or stuck (this will be particularly useful when your program crashes)  
* ```q``` - end the gdb session  