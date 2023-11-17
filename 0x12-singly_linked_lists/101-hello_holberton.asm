#include <stdio.h>
int main()
{
    const char *myString = "Hello, Holberton";

    // Inline assembly to print a string
    asm volatile (
        "movl $4, %%eax\n"    // System call number for sys_write
        "movl $1, %%ebx\n"    // File descriptor for standard output
        "movl %0, %%ecx\n"    // Pointer to the string
        "movl $14, %%edx\n"   // Length of the string
        "int $0x80\n"         // Make the system call
        :
        : "r"(myString)       // Input: the string
        : "eax", "ebx", "ecx", "edx" // Clobbered registers
    );

    return 0;
}

