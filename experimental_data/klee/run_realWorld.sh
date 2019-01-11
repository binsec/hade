#!/bin/bash

# Script running klee on real-world programs #

#set -e

if [ -z $1 ]
then
    echo "Nothing to bench"
    exit 0
fi

cd realWorld 

# Real World For (k=1)
if [ $1 = "F1" ]
then
    echo -ne "For (k=1)...  0/6"
    klee --no-output --max-time=3600 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_aes.bc --sym-args 1 3 16 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  1/6"
    klee --no-output --max-time=3600 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_des.bc --sym-args 1 2 16 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  2/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_city.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  3/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_fast.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  4/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_spooky.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  5/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_md5.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  6/6... Done."
    
# Real World For (k=2)
elif [ $1 = "F2" ]
then
    echo -ne "For (k=1)...  0/6"
    klee --no-output --max-time=3600 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_aes.bc --sym-args 1 3 16 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  1/6"
    klee --no-output --max-time=3600 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_des.bc --sym-args 1 2 16 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  2/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_city.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  3/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_fast.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  4/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_spooky.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  5/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_md5.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  6/6... Done."
    
# Real World For (k=3)
elif [ $1 = "F3" ]
then
    echo -ne "For (k=1)...  0/6"
    klee --no-output --max-time=3600 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_aes.bc --sym-args 1 3 16 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  1/6"
    klee --no-output --max-time=3600 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_des.bc --sym-args 1 2 16 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  2/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_city.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  3/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_fast.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  4/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_spooky.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  5/6"
    klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime For1_md5.bc --sym-args 5 > /dev/null 2>&1
    echo -ne "\rFor (k=1)...  6/6... Done."
    
fi




