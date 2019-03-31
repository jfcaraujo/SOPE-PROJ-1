#pragma once

struct hash_flags {
    int md5;
    int sha1;
    int sha256;
};

struct argFlags {
    int dir_full_search;
    int hash_calc;
    struct hash_flags hash_flags;
    int logfile;
    int outfile;
    char logfile_name[255];
    char outfile_name[255]; //255 is, normally, the max file name lenght on UNIX
    char path[255];
};