# Info:
Office Hours: Thur: 1:00 - 3:00 pm.

Room: WCH 110.  

# xv6 tutorial


## resources
 * [class website] [CW]
 * [lab website] [LW]
 * [xv6 BOOK] [XB]   Important! Please Read!!!
 * [xv6 source code reference] [XS]
 * [Official xv6] [OX]
 * [GDB commands] [GC]
 * [Lab 0: PC booting] [LPC]
    1. [Intro x86, stack] [IS] -- nice video to introduce x86 architecture, assembly, and stack
    2. [quick learn x86 assembly instructions] [QLAI]
    3. Appendix A -- PC hardware  <xv6 book>
    4. Appendix B -- The boot loader <xv6 book>
 * Lab 0.5  syscalls & scheduler 
    1. implement a syscall int count(void) that counts number of syscall calls.
    2. implement FIFO scheduler.
    3. Read the book chapter 1.
    
 
---
## login sledge

open your terminal, type: 
```sh
$ ssh your_cs_account@sledge.cs.ucr.edu 
$ password:*
```

Example

```sh
$ ssh sjin010@sledge.cs.ucr.edu
```

---

## Tutorials

 * [set up git version control] [SUG]
 * [run xv6 & using gdb] [XV6T]   9 min 
 
In the tutorial, instead of typing gdb, you should type:
```sh
$ gdb q -iex "set auto-load safe-path /home/csgrads/sjin010/xv6-public/"
```

change the directory 

```
/home/csgrads/sjin010/xv6-public/
```

to your working directory.   Find your working path, type 
```
$pwd
```
in the terminal.

#### nice discussion of xv6
 
 * [xv6 syscalls] [SYSC]   ---  more detail tutorial. (eg: how to create a user file, how syscall works.).
 * [xv6 fork(), wait(), exec()] [FWE] --- play around with syscalls. 
 
---
## Tips 

#### How to exit xv6.
 open another terminal, find the process PID of running QEMU
```sh
$ ps aux | less | grep uname
```
uname is your cs account. eg: sjin010

Then kill that process

```sh
$ kill -9 PID
```

#### Best way to get xv6 source code
```sh
$ git clone https://github.com/guilleiguaran/xv6.git
```

---


 [LPC]: <http://www.cs.ucr.edu/~nael/cs153/labs/lab0.html>
[CW]: <http://www.cs.ucr.edu/~nael/cs153/>
[LW]: <http://www.cs.ucr.edu/~nael/cs153/labs/xv6.html>
[XB]: <https://pdos.csail.mit.edu/6.828/2014/xv6/book-rev8.pdf>
[XS]: <https://pdos.csail.mit.edu/6.828/2014/xv6/xv6-rev8.pdf>
[OX]: <https://pdos.csail.mit.edu/6.828/2014/xv6.html>
[GC]: <https://pdos.csail.mit.edu/6.828/2014/labguide.html>
[XV6T]: <https://www.youtube.com/watch?v=ktkAlbcoz7o> 
[SYSC]: <https://www.youtube.com/watch?v=vR6z2QGcoo8&feature=youtu.be>
[MDX]: <https://www.youtube.com/watch?v=2rAnCmXaOwo&ebc=ANyPxKpfkJea41eDHt0nTPlWIZnbD7ohhOUacMxlo09ixCvGQVdWiY7qguoMn951IXtTAcXi002enio4TN9TUx0iLC0STdhanw>
[SUG]: <https://github.com/jinsongwei/xv6-public/blob/master/tutorials/git_control.md>
[IS]: <https://www.youtube.com/watch?v=H4Z0S9ZbC0g&index=1&list=PL038BE01D3BAEFDB0>
[QLAI]: <https://en.m.wikibooks.org/wiki/X86_Assembly/Other_Instructions>
[FWE]: <https://www.youtube.com/watch?v=lp7tFNrO1K4&feature=youtu.be>
