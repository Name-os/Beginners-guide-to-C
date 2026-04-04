// 3, Format codes

// Format codes allow us to print variables to the terminal


#include <stdio.h>

int main() {

    // here are some variables to print
    int number = 10; 
    long longer_number = 100;
    float decimal = 10.1;
    double longer_decimal = 10.11;
    char character = 'a';


    // to print a variable we need to tell C what data type of variable we are printing
    // printf("some random sting %i", variab;e) //the %i tells C what datatype of variable goes there
    //                                          //the variable is put after the string with a comma in between
    // we can also put it in the middle of the sting
    // printf("i like %i cats", variable)


    printf("printing a interger: %i\n", number);           //%i is for int.       i stands for interger
    printf("printing a interger: %li\n", longer_number);   //%li is for long.     li stands for long interger
    printf("printing a float: %f\n", decimal);             //%f is for float.     f is for float
    printf("printing a interger: %lf\n", longer_decimal);  //%lf is for double.   lf stands for long decimal 
    printf("printing a character: %c\n", character);       //%c is for character. c stands for character

    return 0;
}