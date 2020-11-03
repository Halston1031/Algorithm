# Hello
<h2 id="Getting Started"><a href= "#Getting Started">Getting Started</a></h2>

CS50 IDE is a web-based “integrated development environment” that allows you to program “in the cloud,” without installing any software locally. Indeed, CS50 IDE provides you with your very own “workspace” (i.e., storage space) in which you can save your own files and folders (aka directories).

<h2 id="Logging In"><a href= "#Logging In">Logging In</a></h2>

Head to ide.cs50.io and click “Sign in with GitHub” to access your CS50 IDE. Once your IDE loads, you should see that (by default) it’s divided into three parts. Toward the top of CS50 IDE is your “text editor”, where you’ll write all of your programs. Toward the bottom of is a “terminal window” (light blue, by default), a command-line interface (CLI) that allows you to explore your workspace’s files and directories, compile code, run programs, and even install new software. And on the left is your “file browser”, which shows you all of the files and folders currently in your IDE.

Start by clicking inside your terminal window. You should find that its “prompt” resembles the below.
```c
~/ $
```
Click inside of that terminal window and then type
```c
mkdir ~/pset1/
```
followed by Enter in order to make a directory (i.e., folder) called `pset1` in your home directory. Take care not to overlook the space between `mkdir` and `~/pset1` or any other character for that matter! Keep in mind that `~` denotes your home directory and `~/pset1` denotes a directory called `pset1` within `~`.

Here on out, to execute (i.e., run) a command means to type it into a terminal window and then hit Enter. Commands are “case-sensitive,” so be sure not to type in uppercase when you mean lowercase or vice versa.

Now execute
```c
cd ~/pset1/
```
to move yourself into (i.e., open) that directory. Your prompt should now resemble the below.
```c
~/pset1/ $
```
If not, retrace your steps and see if you can determine where you went wrong.

Now execute
```c
mkdir ~/pset1/hello
```
to create a new directory called hello inside of your pset1 directory. Then execute
```c
cd ~/pset1/hello
to move yourself into that directory.
```
Shall we have you write your first program? From the File menu, click New File, and save it (as via the Save option in the File menu) as `hello.c` inside of your `~/pset1/hello` directory. Proceed to write your first program by typing precisely these lines into the file:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
Notice how CS50 IDE adds “syntax highlighting” (i.e., color) as you type, though CS50 IDE’s choice of colors might differ from this problem set’s. Those colors aren’t actually saved inside of the file itself; they’re just added by CS50 IDE to make certain syntax stand out. Had you not saved the file as `hello.c` from the start, CS50 IDE wouldn’t know (per the filename’s extension) that you’re writing C code, in which case those colors would be absent.

<h2 id="Listing Files"><a href= "#Listing Files">Listing Files</a></h2>

Next, in your terminal window, immediately to the right of the prompt (~/pset1/hello/ $), execute
```c
ls
```
You should see just `hello.c`? That’s because you’ve just listed the files in your `hello` folder. In particular, you executed (i.e., ran) a command called `ls`, which is shorthand for “list.” (It’s such a frequently used command that its authors called it just ls to save keystrokes.) Make sense?

<h2 id="Compiling Programs"><a href= "#Compiling Programs">Compiling Programs</a></h2>

Now, before we can execute the `hello.c` program, recall that we must compile it with a compiler (e.g., `clang`), translating it from source code into machine code (i.e., zeroes and ones). Execute the command below to do just that:
```c
clang hello.c
```
And then execute this one again:
```c
ls
```
This time, you should see not only `hello.c` but a.out listed as well? (You can see the same graphically if you click that folder icon again.) That’s because `clang` has translated the source code in `hello.c` into machine code in `a.out`, which happens to stand for “assembler output,” but more on that another time.

Now run the program by executing the below.
```c
./a.out
```
Hello, world, indeed!

<h2 id="Naming Programs"><a href= "#Naming Programs">Naming Programs</a></h2>

Now, `a.out` isn’t the most user-friendly name for a program. Let’s compile `hello.c` again, this time saving the machine code in a file called, more aptly, `hello`. Execute the below.

clang -o hello hello.c
Take care not to overlook any of those spaces therein! Then execute this one again:
```c
ls
```
You should now see not only `hello.c` (and `a.out` from before) but also `hello` listed as well? That’s because `-o` is a command-line argument, sometimes known as a flag or a switch, that tells `clang` to output (hence the `o`) a file called `hello`. Execute the below to try out the newly named program.
```c
./hello
```
Hello there again!

<h2 id="Making Things Easier"><a href= "#Making Things Easier">Making Things Easier</a></h2>

Recall that we can automate the process of executing `clang`, letting `make` figure out how to do so for us, thereby saving us some keystrokes. Execute the below to compile this program one last time.
```c
make hello
```
You should see that `make` executes `clang` with even more command-line arguments for you? More on those, too, another time!

Now execute the program itself one last time by executing the below.
```c
./hello
```
Phew!

<h2 id="Getting User Input"><a href= "#Getting User Input">Getting User Input</a></h2>

Suffice it to say, no matter how you compile or execute this program, it only ever prints `hello, world.` Let’s personalize it a bit, just as we did in class.

Modify this program in such a way that it first prompts the user for their name and then prints `hello, so-and-so`, where `so-and-so` is their actual name.

As before, be sure to compile your program with:
```c
make hello
```
And be sure to execute your program, testing it a few times with different inputs, with:
```c
./hello
```
