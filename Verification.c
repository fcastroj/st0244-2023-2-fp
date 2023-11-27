/*#include <stdlib.h>
#include <stddef.h>

unsigned int nondet_uint (void);
#define SATABS_MAX_BUF_LEN (65535)

char *getenv(const char *name){
    char* buffer;
    size_t buf_size = nondet_uint ();
    assume (buf_size > 1 && buf_size <= SATABS_MAX_BUF_LEN+1);
    buffer = (char*)malloc (buf_size * sizeof(char));
    buffer[buf_size-1]=0;
return buffer;

}*/
int N, x;

int main() {
    int i = N;
    while (0 <= x && x < N) {
        i = i - 1;
        x = x + 1;
    }
    __CPROVER_assert(0 <= i, "postcondition");
}