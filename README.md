# Simple Shell

The shell is the Linux command line interpreter. It provides an interface 
between the user and the kernel and executes programs called commands. For 
example, if a user enters ls then the shell executes the ls command. The shell
can also execute other programs such as applications, scripts, and user 
programs.

## Examples

<code>$ echo "Hello"
Hello
$<code>

<code>$ /bin/ls -l /tmp
total 12
drwx------ 3 root root 4096 Apr 13 14:30 snap.lxd
drwx------ 3 root root 4096 Apr 13 14:30 systemd-private-850550fdd9934755b3b0d71413098465-systemd-logind.service-nkVZ8g
drwx------ 3 root root 4096 Apr 13 14:30 systemd-private-850550fdd9934755b3b0d71413098465-systemd-resolved.service-tGxafj
$
<code>
## General

>Who designed and implemented the original Unix operating system

Kenneth Lane Thompson (born February 4, 1943) is an American pioneer of computer science. Thompson worked at Bell Labs for most of his career where he designed and implemented the original Unix operating system.

>Who wrote the first version of the UNIX shell

The Thompson shell was the first Unix shell, introduced in the first version of Unix in 1971, and was written by Ken Thompson.

>Who invented the B programming language (the direct predecessor to the C programming language)

Kenneth Lane Thompson He also invented the B programming language, the direct predecessor to the C programming language, and was one of the creators and early developers of the Plan 9 operating system. Since 2006, Thompson has worked at Google, where he co-developed the Go programming language.

>Who is Ken Thompson

Thompson was born in New Orleans, Louisiana. When asked how he learned to program, Thompson stated, "I was always fascinated with logic and even in grade school I'd work on arithmetic problems in binary, stuff like that. Just because I was fascinated." DEC PDP-7, as used for initial work on Unix Thompson received a Bachelor of Science in 1965 and a master's degree in 1966, both in electrical engineering and computer science, from the University of California, Berkeley, where his master's thesis advisor was Elwyn Berlekamp.

>How does a shell work

A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts. Users typically interact with a Unix shell using a terminal emulator; however, direct operation via serial hardware connections or Secure Shell are common for server systems. All Unix shells provide filename wildcarding, piping, here documents, command substitution, variables and control structures for condition-testing and iteration.

>What is a pid and a ppid

In Linux, an executable stored on disk is called a program, and a program loaded into memory and running is called a process. When a process is started, it is given a unique number called process ID (PID) that identifies that process to the system.

In addition to a unique process ID, each process is assigned a parent process ID (PPID) that tells which process started it. The PPID is the PID of the process parent.

>How to manipulate the environment of the current process.

Printenv = Print the values of the specified environment VARIABLE(s). If no VARIABLE is specified, print name and value pairs for them all. Environ = The variable environ points to an array of pointers to strings called the "environment". The last pointer in this array has the value NULL. (This variable must be declared in the user program, but is declared in the header file <unistd.h> in case the header files came from libc4 or libc5, and in case they came from glibc and _GNU_SOURCE was defined.) This array of strings is made available to the process by the exec(3) call that started the process. By convention the strings in environ have the form "name=value". What is the difference between a function and a system call

>How to create processes.

Fork = create a child process. fork() creates a new process by duplicating the calling process. The new process, referred to as the child, is an exact duplicate of the calling process, referred to as the parent, except for the following points:

   *  The child has its own unique process ID, and this PID does not match the ID of any existing process group (setpgid(2)).

   *  The child's parent process ID is the same as the parent's process ID.

   *  The child does not inherit its parent's memory locks (mlock(2), mlockall(2)).

   *  Process resource utilizations (getrusage(2)) and CPU time counters (times(2)) are reset to zero in the child.

   *  The child's set of pending signals is initially empty (sigpending(2)).

   *  The child does not inherit semaphore adjustments from its parent (semop(2)).

   *  The child does not inherit record locks from its parent (fcntl(2)).

   *  The child does not inherit timers from its parent (setitimer(2), alarm(2), timer_create(2)).

What are the three prototypes of main
    * int main(void)
    * int main(int ac, char **av)
    * int main(int ac, char **av, char **env)

