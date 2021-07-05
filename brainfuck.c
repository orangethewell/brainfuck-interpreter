#include <stdio.h>
#include <stdlib.h>

void msg_error(const char *msg) {
    fprintf(stderr, "interpretador: %s\n", msg);
}

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

int main(int argc, char *argv[]) {
    const char *file_name = argv[1];
    FILE *file_pointer = fopen(file_name, "r");  
    the_file_was_passed(argc);
    the_file_exist(file_pointer);
}