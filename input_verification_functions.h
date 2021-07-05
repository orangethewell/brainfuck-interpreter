#include "warnings_functions.h"

void the_file_was_passed(const int parameters) {
    if (parameters < 2) {
        msg_error("passe um arquivo ao programa.");
        exit(EXIT_FAILURE);
    }
}

void the_file_exist(FILE *file_pointer) {
    if (file_pointer == NULL) {
        msg_error("o arquivo não existe.");
        exit(EXIT_FAILURE);
    }
}