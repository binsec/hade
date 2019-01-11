#!/bin/bash

####################################################################
# This script runs klee for every goals and programs of the paper  #
#             Comment lines that you do not want to run            #
# Please note that it will take a lot of time to run every program #
#          and it might be wise to select only a few lines         #
####################################################################

set -e
cd klee

# Comment all following lines to prevent running Path Exploration bench 
# If you want to prevent only a few obfuscations, comment corresping lines 
# F1 ( resp. F2, F3 & F4 ) corresponds to obfuscations For (k=1) 
# ( resp. k=2, k=3 & k=4 )
# S10 ( resp. S13 ) corresponds to Split (k=10) ( resp. k=13 )

echo "Running Path Exploration For (k=1)..."; ./run_pathExploration.sh F1 
echo "Running Path Exploration For (k=2)..."; ./run_pathExploration.sh F2
echo "Running Path Exploration For (k=3)..."; ./run_pathExploration.sh F3
echo "Running Path Exploration For (k=4)..."; ./run_pathExploration.sh F4
echo "Running Path Exploration Split (k=10)..."; ./run_pathExploration.sh S10
echo "Running Path Exploration Split (k=13)..."; ./run_pathExploration.sh S13

# Comment all following lines to prevent running Secret Finding bench 
# If you want to prevent only a few obfuscations, comment corresping lines 
# F1 ( resp. F2, F3 & F4 ) corresponds to obfuscations For (k=1) 
# ( resp. k=2, k=3 & k=4 )
# S10 ( resp. S13 ) corresponds to Split (k=10) ( resp. k=13 )

echo "Running Secret Finding For (k=1)" 
./run_secretFinding.sh F1 NURS; ./run_secretFinding.sh F1 DFS; ./run_secretFinding.sh F1 BFS
echo "Running Secret Finding For (k=2)";
./run_secretFinding.sh F2 NURS; ./run_secretFinding.sh F2 DFS; ./run_secretFinding.sh F2 BFS; 
echo "Running Secret Finding For (k=3)";
./run_secretFinding.sh F3 NURS; ./run_secretFinding.sh F3 DFS; ./run_secretFinding.sh F3 BFS; 
echo "Running Secret Finding For (k=4)";
./run_secretFinding.sh F4 NURS; ./run_secretFinding.sh F4 DFS; ./run_secretFinding.sh F4 BFS; 
echo "Running Secret Finding Split (k=10)";
./run_secretFinding.sh S10 NURS; ./run_secretFinding.sh S10 DFS; ./run_secretFinding.sh S10 BFS; 
echo "Running Secret Finding Split (k=13)";
./run_secretFinding.sh S13 NURS; ./run_secretFinding.sh S13 DFS; ./run_secretFinding.sh S13 BFS; 

# Comment all following lines to prevent running real World bench 
# If you want to prevent only a few obfuscations, comment corresping lines 
# F1 ( resp. F2, F3 ) corresponds to obfuscations For (k=1) ( resp. k=2, k=3 )

echo "Running Real World For (k=1)"; ./run_realWorld.sh F1
echo "Running Real World For (k=2)"; ./run_realWorld.sh F2
echo "Running Real World For (k=3)"; ./run_realWorld.sh F3

# Comment the following lines if you dont want to remove directories that klee
# generated during benchamrk
# By default, the directory is cleaned as it creates lots of files
echo -n "Cleaning files..."
rm -r */klee* && echo " Done."

echo "Benchmark done."
