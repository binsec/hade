#!/bin/bash

# Script running klee on every 46 programs from Banescu et al. dataset #

#set -e

if [ -z $1 ]
then
    echo "Nothing to bench"
    exit 0
fi

cd pathExploration

# Path Exploration For (k=1)
if [ $1 = "F1" ]
then
    echo -ne "For (k=1)...  0/46"
    compt=0
    for file in For1_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=1)...  ${compt}/46"
        else
            echo -ne "\rFor (k=1)... ${compt}/46"
        fi
    done
    
    echo "... Done."
    
# Path Exploration For (k=2)
elif [ $1 = "F2" ]
then
    echo -ne "For (k=2)...  0/46"
    compt=0
    for file in For2_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=2)...  ${compt}/46"
        else
            echo -ne "\rFor (k=2)... ${compt}/46"
        fi
    done
    
    echo "... Done."

# Path Exploration For (k=3)
elif [ $1 = "F3" ]
then
    echo -ne "For (k=3)...  0/46"
    compt=0
    for file in For3_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=3)...  ${compt}/46"
        else
            echo -ne "\rFor (k=3)... ${compt}/46"
        fi
    done
    
    echo "... Done."

# Path Exploration For (k=4)
elif [ $1 = "F4" ]
then
    echo -ne "For (k=4)...  0/46"
    compt=0
    for file in For4_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=4)...  ${compt}/46"
        else
            echo -ne "\rFor (k=4)... ${compt}/46"
        fi
    done
    
    echo "... Done."

# Path Exploration Split (k=10)
elif [ $1 = "S10" ]
then
    echo -ne "Split (k=10)...  0/46"
    compt=0
    for file in Split10_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=10)...  ${compt}/46"
        else
            echo -ne "\rSplit (k=10)... ${compt}/46"
        fi
    done
    
    echo "... Done."

# Path Exploration Split (k=13)
elif [ $1 = "Split13" ]
then
    echo -ne "Split (k=13)...  0/46"
    compt=0
    for file in Split13_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=13)...  ${compt}/46"
        else
            echo -ne "\rSplit (k=13)... ${compt}/46"
        fi
    done
    
    echo "... Done."
fi


