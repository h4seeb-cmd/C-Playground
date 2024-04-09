#include <stdio.h>
#include <stdlib.h>

int main(){
    // Typing name and age out in the "hardcoded" way and printing my story
    printf("------------------Before variables-----------------\n");
    printf("There was once a man named John\n");
    printf("He was 35\n");
    printf("He liked being named John, but he did not like being 35\n");

    // Now using variables in C to be able to easily change values

    // Initializing variables
    char name[] = "Spencer"; // make string as a "char" type but with brackets to indicate "list" of characters, or a string
    int age = 25; // integers defined ass always

    // Printing story
    printf("------------------Using variables-----------------\n");
    printf("There was once a man named %s\n", name); // %s used to tell C that we want to add something else to string, name string passed as parameter to this
    printf("He was %d\n", age); // %d used to tell c we want to add an INTEGER now

    // Changing age 
    age = 86;

    printf("He liked being named %s, but he did not like being %d\n", name, age); // printing last line using both %s and %d
    return 0;
}