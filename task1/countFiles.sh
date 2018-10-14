#!/bin/bash
path=/home/Applsin
echo "regular files:"
ls $path | wc -l
echo "hidden files:"
ls -a $path | ls -a ~ | grep ^"\." |wc -l 
