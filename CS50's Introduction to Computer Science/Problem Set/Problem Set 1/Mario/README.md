# Mario

<h2 id="World 1-1"><a href= "#World 1-1">World 1-1</a></h2>
Toward the end of World 1-1 in Nintendo’s Super Mario Brothers, Mario must ascend right-aligned - pyramid of blocks.

Let’s recreate that pyramid in C, albeit in text, using hashes (`#`) for bricks. Each hash is a bit taller than it is wide, so the pyramid itself is also be taller than it is wide.

The program we’ll write will be called `mario`. And let’s allow the user to decide just how tall the pyramid should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs `8` when prompted:
```c
$ ./mario
Height: 8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```
If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:
```c
$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   #
  ##
 ###
####
```

<h2 id="Building the Opposite"><a href= "#Building the Opposite">Building the Opposite</a></h2>

Now that your program is (hopefully!) accepting input as prescribed, it’s time for another step.

It turns out it’s a bit easier to build a left-aligned pyramid than right.
```c
#
##
###
####
#####
######
#######
########
```
So let’s build a left-aligned pyramid first and then, once that’s working, right-align it instead!

Modify `mario.c` at right such that it no longer simply prints the user’s input but instead prints a left-aligned pyramid of that height.
> **Hint**
> - Keep in mind that a hash is just a character like any other, so you can print it with `printf`.
> - Just as Scratch has a Repeat block, so does C have a `for` loop, via which you can iterate some number times. Perhaps on each iteration, i, you could print that many hashes?
> - You can actually “nest” loops, iterating with one variable (e.g., `i`) in the “outer” loop and another (e.g., `j`) in the “inner” loop. For instance, here’s how you might print a square of height and width `n`, below. Of course, it’s not a square that you want to print!
```c
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("#");
    }
    printf("\n");
}
```

<h2 id="Right-Aligning with Dots"><a href= "#Right-Aligning with Dots">Right-Aligning with Dots</a></h2>

Let’s now right-align that pyramid by pushing its hashes to the right by prefixing them with dots (i.e., periods), a la the below.

Let’s now right-align that pyramid by pushing its hashes to the right by prefixing them with dots (i.e., periods), a la the below.

```c
.......#
......##
.....###
....####
...#####
..######
.#######
########
```
Modify `mario.c` in such a way that it does exactly that!

<h2 id="Removing the Dots"><a href= "#Removing the Dots">Removing the Dots</a></h2>

All that remains now is a finishing flourish! Modify mario.c in such a way that it prints spaces instead of those dots!

