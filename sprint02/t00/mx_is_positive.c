#include "mx_printstr.c"

void mx_is_positive(int i) {
    if (i > 0) {
        mx_printchar("positive\n");
    } else if (i < 0) {
        mx_printchar("negative\n");
    } else {
        mx_printchar("zero\n");
    }
    
}
