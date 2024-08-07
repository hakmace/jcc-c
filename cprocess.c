#include <stdio.h>
#include <stdlib.h>
#include <compiler.h>
struct compile_process *compile_process_create(const char *filename, const char *filename_out, int flags)
{

    // Open the input file for reading, return null if empty
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        return NULL;
    }

    FILE *out_file = NULL;
    // Open the output file for writing, return null if empty
    if (filename_out)
    {
        out_file = fopen(filename_out, "w");
        if (!out_file)
        {
            return NULL;
        }
    }

    struct compile_process* process = calloc(1, sizeof(struct compile_process));
}