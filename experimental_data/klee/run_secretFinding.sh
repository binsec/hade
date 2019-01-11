#!/bin/bash

# Script running klee on every 16 programs from Banescu et al. dataset #
# for Secret Finding goal                                              #

#set -e

if [ -z $1  -o -z "$2" ]
then
    echo "Nothing to bench"
    exit 0
fi

cd secretFinding

# Secret Finding For (k=1)
    # NURS
if [ $1 = "F1" -a $2 = "NURS" ]
then
    echo -ne "For (k=1)...  0/16"
    compt=0
    for file in For1_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=1)...  ${compt}/16"
        else
            echo -ne "\rFor (k=1)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # DFS
elif [ $1 = "F1" -a $2 = "DFS" ]
then
    echo -ne "For (k=1)...  0/16"
    compt=0
    for file in For1_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=dfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=1)...  ${compt}/16"
        else
            echo -ne "\rFor (k=1)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # BFS
elif [ $1 = "F1" -a $2 = "BFS" ]
then
    echo -ne "For (k=1)...  0/16"
    compt=0
    for file in For1_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=bfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=1)...  ${compt}/16"
        else
            echo -ne "\rFor (k=1)... ${compt}/16"
        fi
    done
    
    echo "... Done."
    
# Secret Finding For (k=2)
    # NURS
elif [ $1 = "F2" -a $2 = "NURS" ]
then
    echo -ne "For (k=2)...  0/16"
    compt=0
    for file in For2_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=2)...  ${compt}/16"
        else
            echo -ne "\rFor (k=2)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # DFS
elif [ $1 = "F2" -a $2 = "DFS" ]
then
    echo -ne "For (k=2)...  0/16"
    compt=0
    for file in For2_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=dfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=2)...  ${compt}/16"
        else
            echo -ne "\rFor (k=2)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # BFS
elif [ $1 = "F2" -a $2 = "BFS" ]
then
    echo -ne "For (k=2)...  0/16"
    compt=0
    for file in For2_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=bfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=2)...  ${compt}/16"
        else
            echo -ne "\rFor (k=2)... ${compt}/16"
        fi
    done
    
    echo "... Done."

# Secret Finding For (k=3)
    # NURS
elif [ $1 = "F3" -a $2 = "NURS" ]
then
    echo -ne "For (k=3)...  0/16"
    compt=0
    for file in For3_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=3)...  ${compt}/16"
        else
            echo -ne "\rFor (k=3)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # DFS
elif [ $1 = "F3" -a $2 = "DFS" ]
then
    echo -ne "For (k=3)...  0/16"
    compt=0
    for file in For3_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=dfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=3)...  ${compt}/16"
        else
            echo -ne "\rFor (k=3)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # BFS
elif [ $1 = "F3" -a $2 = "BFS" ]
then
    echo -ne "For (k=3)...  0/16"
    compt=0
    for file in For3_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=bfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=3)...  ${compt}/16"
        else
            echo -ne "\rFor (k=3)... ${compt}/16"
        fi
    done
    
    echo "... Done."

# Secret Finding For (k=4)
    # NURS
elif [ $1 = "F4" -a $2 = "NURS" ]
then
    echo -ne "For (k=4)...  0/16"
    compt=0
    for file in For4_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=4)...  ${compt}/16"
        else
            echo -ne "\rFor (k=4)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # DFS
elif [ $1 = "F4" -a $2 = "DFS" ]
then
    echo -ne "For (k=4)...  0/16"
    compt=0
    for file in For4_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=dfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=4)...  ${compt}/16"
        else
            echo -ne "\rFor (k=4)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # BFS
elif [ $1 = "F4" -a $2 = "BFS" ]
then
    echo -ne "For (k=4)...  0/16"
    compt=0
    for file in For4_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=bfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rFor (k=4)...  ${compt}/16"
        else
            echo -ne "\rFor (k=4)... ${compt}/16"
        fi
    done
    
    echo "... Done."

# Secret Finding Split (k=10)
    # NURS
elif [ $1 = "S10" -a $2 = "NURS" ]
then
    echo -ne "Split (k=10)...  0/16"
    compt=0
    for file in Split10_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=10)...  ${compt}/16"
        else
            echo -ne "\rSplit (k=10)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # DFS
elif [ $1 = "S10" -a $2 = "DFS" ]
then
    echo -ne "Split (k=10)...  0/16"
    compt=0
    for file in Split10_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=dfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=10)...  ${compt}/16"
        else
            echo -ne "\rSplit (k=10)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # BFS
elif [ $1 = "S10" -a $2 = "BFS" ]
then
    echo -ne "Split (k=10)...  0/16"
    compt=0
    for file in Split10_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=bfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=10)...  ${compt}/16"
        else
            echo -ne "\rSplit (k=10)... ${compt}/16"
        fi
    done
    
    echo "... Done."

# Secret Finding Split (k=13)
    # NURS
elif [ $1 = "Split13" -a $2 = "NURS" ]
then
    echo -ne "Split (k=13)...  0/16"
    compt=0
    for file in Split13_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=13)...  ${compt}/16"
        else
            echo -ne "\rSplit (k=13)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # DFS
elif [ $1 = "Split13" -a $2 = "DFS" ]
then
    echo -ne "Split (k=13)...  0/16"
    compt=0
    for file in Split13_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=dfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=13)...  ${compt}/16"
        else
            echo -ne "\rSplit (k=13)... ${compt}/16"
        fi
    done
    
    echo "... Done."

    # BFS 
elif [ $1 = "Split13" -a $2 = "BFS" ]
then
    echo -ne "Split (k=13)...  0/16"
    compt=0
    for file in Split13_*
    do
        klee --no-output --max-time=10800 --max-memory=10000 --libc=uclibc --allow-external-sym-calls --posix-runtime --exit-on-error-type=ReportError --search=bfs $file --sym-arg 16 > /dev/null 2>&1
        let compt++
        if [ $compt -lt 10 ]
        then
            echo -ne "\rSplit (k=13)...  ${compt}/16"
        else
            echo -ne "\rSplit (k=13)... ${compt}/16"
        fi
    done
    
    echo "... Done."
fi

