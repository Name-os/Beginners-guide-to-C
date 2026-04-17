// 1, Hello world

// As tradition of coding, your first program should be output "Hello world" to the terminal
// So I want you to compile and run this file so see what it does
// It should say Hello world
// Please note for the rest of this when we are outputing something to the terminal we call it "print"


// this is the standard library, this has tools to code in C
// always add this to your program

#include <stdio.h>

// this is the main function which is run when the program is ran
int main() {

    // this is print format (don't worry about it for now) and prints to the terminal
    // \n means go to the next line, makes it look cleaner
    // make sure to add semi-colon, it tells the compiler "this line is done"
    printf("Hello world\n"); 
    
    // something for older computers but is not necessary
    return 0;
}