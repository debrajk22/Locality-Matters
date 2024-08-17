# LocalityMatters
In this module, we verify that locality matters in classical comupters

## Description:
### creat_large_text_file.cpp
This file is used to generate large text files

### large_text_file8.txt
This is a large text file of size 8GB

### near.c
This file reads a continuous segment of 200000 entries from large_text_file8.txt

### far.c
This file reads 200000 discrete data entries from large_text_file8.txt that are located far away from each other

## Dependencies
Linux OS with C and C++ compiler

## Run the code
Run create_large_text_file.cpp to create the large text file\
This process may take upto 12 minutes time
```bash
g++ create_large_text_file.cpp -o create_large_text_file
./create_large_text_file
```

Compile the far.c and near.c

```bash
gcc far.c -o far
gcc near.c -o near
```
Clear all cache data

```bash
sudo sh -c 'echo 3 > /proc/sys/vm/drop_caches'
```

Run and display the time of execution of near.c\
It takes around 0.3s to execute

```bash
time ./near
```
Clear all cache data

```bash
sudo sh -c 'echo 3 > /proc/sys/vm/drop_caches'
```

Run and display the time of execution of far.c\
It takes around 21s to execute

```bash
time ./far
```