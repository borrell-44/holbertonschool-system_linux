# Project: 0x00. C - ls


0. Create a program that lists the content of the current directory.

    Usage : hls

1. Your program should now take one or more file or directory names as parameters.

Usage : hls [FILE]...

Errors must be printed the same way than ls does:

    In stderr
    Starting by <program>: (<program> being argv[0])
    No such file or directory, Permission denied, etc…
    Don’t forget the exit value

2. Implement the -1 option.

Usage : hls [-1] [FILE]...

For the rest of the project, an option will be identified by a command-line argument starting with the character - (like ls).

3. Implement the -a option.

Usage : hls [-a1] [FILE]...

4. Implement the -A option.

Usage : hls [-A] [FILE]...

5. Implement the -l option.

Usage : hls [-l] [FILE]...

