# Lab2

### here is the link to get source code

https://github.com/jinsongwei/xv6_lab2.git

ssh into your sledge, type

```sh
$ git clone https://github.com/jinsongwei/xv6_lab2.git
```

### how to use thread library

First, you need to include ```"user.h"``` file.

##### How to call thread create , here is an example:

```
void *tid = thread_create(function, (void *)0);
```

##### How to write thead calling function. Here is an example

```
void function(void *arg_ptr)
```

### Note

I didn't implement passing-argument thread. Therefore, the thread_create always pass 0 argument of function. That means 
```void function(void *arg_ptr)``` has always 0 arguments and return nothing. In real life, like unix, pthread is more powerful.
For Lab2, I believe it is enough for you to implement concurrency problems using this thread library. 
For more details, you should check two test files which is ```test.c``` and ```test1.c```. 

