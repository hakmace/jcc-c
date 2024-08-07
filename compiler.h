#ifndef JCCCOMPILER_H
#define JCCCOMPILER_H

struct compile_process {

    int flags;

};

int compile_file(const char* filename, const char* out_filename, int flags);

#endif
