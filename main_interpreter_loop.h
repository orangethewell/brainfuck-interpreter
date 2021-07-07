void main_interpreter_loop(char readfile, FILE *file_pointer, char buffer[], int pointer) {
    while ((readfile = fgetc(file_pointer)) != EOF) {
        switch (readfile) {
            case '+':
                if (buffer[pointer] == 255)
                    buffer[pointer] = 0;
                else
                    buffer[pointer]++;
                break;
            
            case '-':
                if (buffer[pointer] == 0)
                    buffer[pointer] = 255;
                else
                    buffer[pointer]--;
                break;
            
            case '>':
                if (pointer == 255)
                    pointer = 0;
                else
                    pointer++;
                break;
            
            case '<':
                if (pointer == 0)
                    pointer = 255;
                else
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