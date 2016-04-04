## tutorial setup git version control

If you would like to use git version control to work on your project with your partner or by yourself. Here is a brief tutorial to set up github.

First, you need to have a github account.
Don't forget request a discount using UCR email.  https://education.github.com/
so as you can use private repository. 

Of course, you can use the gitbucket as well which comes with private repository.

After you create a repository of xv6, there are serveral modifications to enable git push. 

1. create a repository 'xv6' on github website, then ssh sledge server and git clone the address of your xv6 reposityory. 
2. in the xv6, you need to remove the .gitignore file
```$ rm .gitignore```

3. open config file ```$ vim .git/config``` , in the file,  you need to  change ```url = https://github.com/guilleiguaran/xv6.git```
line to 
```
url = https://<your_github_account>:<your_password>@github.com/<your_github_account>/xv6.git
```

For example:

```
url = https://jinsongwei:password@github.com/jinsongwei/xv6.git
```
 
Now, you are able to use ```git push origin master ```. 
