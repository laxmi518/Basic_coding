#!/usr/bin/python

import sys

def read_line():
    fp =open('input.txt')
    for line in fp:
        print(line)
        print (sys.getsizeof(line))
    fp.close()

def generate_chunk(fp,size =1024):
    while True:
        data = fp.read(size)
        if not data:
            break
        yield data

if __name__ == '__main__':

    with open("input.txt") as infile:
        for line in infile:
            print(line)
            print (sys.getsizeof(line))

    # fp=open("input.txt")
    # for line in generate_chunk(fp):
    #     print(line)
    #     print (sys.getsizeof(line))


