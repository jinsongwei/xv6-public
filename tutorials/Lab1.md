## Lab 1

[Lab 1 assignment link] [LAL]

#### Tips:

##### int wait(int*)

For the Part int wait(int*) syscall, you shold use `argptr()` instead of `argint()` to get argument of wait() in the file `sysproc.c`. 
If you are not a good c programmer, you will find it difficult to implement this part. 
Please look up carefully the explanation of how to use "argptr(int n,char** p,int size)", 
or find other syscall such as fileread() to learn how it calls argptr(int,char**,size).

`n` is the nth argument of syscall. 

`p` is the address of pointer in your syscall's argument (usually is a pointer). 

`size` is the number of bytes when you pass the pointer (such as the type of data your pointer point to is int, means 4 bytes -- size = 4. if type is char means 1 byte -- size = 1  )

In your test file, you have to make sure the `status` you are passing must be updated after calling `wait(&status)`.




[LAL]: <http://www.cs.ucr.edu/~nael/cs153/labs/lab1.html>
