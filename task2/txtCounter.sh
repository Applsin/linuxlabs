#!/bin/bash
cat $(ls ~/ | grep "\.txt") > /tmp/count.txt
echo "Files"
ls ~/ |grep "\.txt"
echo "Num of strings"
cat /tmp/count.txt | wc -l /tmp/count.txt
echo "Num of bytes"
du /tmp/count.txt | cut -f1
rm /tmp/count.txt
