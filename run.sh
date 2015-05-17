#!/usr/bin/env sh

temp_fname="./.temp.out"
file_path=$(printf "./src/c/p%04d.c" $1)

# compile & run.
gcc -std=c99 -Wall -o $temp_fname $file_path;
$temp_fname;

# remove temp file.
rm $temp_fname;


