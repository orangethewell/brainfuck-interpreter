void main_interpreter_loop(char readfile, FILE *file_pointer, char buffer[], int pointer) {
    while ((readfile = fgetc(file_pointer)) != EOF) {
        switch (readfile) {
            case '+':
                buffer[pointer]++;
                break;
            
            case '-':
                buffer[pointer]--;
                break;
            
            case '>':
                pointer++;
                break;
            
            case '<':
                pointer--;
                break;
                
            case '.':
                printf("%c", buffer[pointer]);
                break;

            default:
                continue;
        }
    }
}