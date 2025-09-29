#include <stdio.h>
int main() {
    char*red = "\033[1;31m";
    char*reset = "\033[0m";
   printf("Selamat Pagi, %sMUHAMMAD FADHIL LESMANA%s \nSelamat Siang, %sMUHAMMAD FADHIL LESMANA%s\nSelamat Malam, %sMUHAMMAD FADHIL LESMANA%s", red, reset, red, reset, red, reset);
    return 0;
}

