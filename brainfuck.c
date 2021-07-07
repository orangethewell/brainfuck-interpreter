#include <stdio.h>
#include <stdlib.h>

#include "warning_functions.h"
#include "input_verification_functions.h"
#include "main_interpreter_loop.h"

int main(int argc, char *argv[]) {
    const char *file_name = argv[1];

    FILE *file_pointer = fopen(file_name, "r");
    the_file_was_passed(argc);
    the_file_exist(file_pointer);
    main_interpreter_loop(file_pointer);
    
    return 0;
}