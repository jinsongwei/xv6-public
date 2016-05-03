# Lab2

### here is the link to get new version of xv6's source code

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

##### How to write thread calling function. Here is an example

```
void function(void *arg_ptr)
```

##### How to pass arguments as void pointer

Before you call ```thread_create```, you should declear arguments such as int, char or struct, and pass the void pointer. For example, 
```int arg``` and pass the address of integer ```thread_create(func, (void *)&arg)```. In the func, you can get the argument like this 
```int * num = (int *)arg_ptr;``` and then you can use that integeter by deferencing it. For details, you can look up ```test.c```.

### Note

There are three test cases -- test1.c, test2.c and test3.c. Please look up those files before you use thread library.

