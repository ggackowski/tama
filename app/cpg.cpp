#include <iostream>
#include <fstream>
#include <cstring>
#include <sys/stat.h>
#include <sys/types.h>
/*
int main(int argc, char ** argv) {
    if (!strcmp(argv[1], "g") && !strcmp(argv[2], "c")) {
        std::string className(argv[3]);
        mkdir(className.c_str(), 0777);
        std::fstream file;
        //file.open()
    }
}

cpg g c 