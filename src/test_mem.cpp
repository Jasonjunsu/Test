#include <iostream>
#include <cstdlib>
#include <cstring>
int main() {
    char dest[1000];
    char* src = (char*)malloc(100);
    memset(src, 0, 100);
    memcpy(dest, src, 100);
    return 0;
}