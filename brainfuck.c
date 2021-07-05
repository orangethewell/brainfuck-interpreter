#include <stdio.h>
#include <stdlib.h>
#include "input_verification_functions.h"

int main(int argc, char *argv[]) {
    const char *file_name = argv[1];
    FILE *file_pointer = fopen(file_name, "r");  
    the_file_was_passed(argc);
    the_file_exist(file_pointer);
}