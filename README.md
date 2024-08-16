# LocalityMatters
In this module, we verify that locality matters in classical comupters

## Description:
### creat_large_text_file.cpp
This file is used to generate large text files

### large_text_file8.txt
This is a large text file of size 8GB

### near.c
This file reads a continuous segment of 20000 entries from large_text_file8.txt

### far.c
This file reads 20000 discrete data entries from large_text_file8.txt that are located far away from each other

## How to run the code and check the time of execution
Please use linux OS for running the command\
Compile the far.c and near.c

```bash
gcc far.c -o far
gcc near.c -o near
```
Run and display the time of execution of each code

```bash
time ./far
time ./near
```