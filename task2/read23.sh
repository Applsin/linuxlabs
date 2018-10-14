#!/bin/bash
cat ~/bash.txt | grep "000000" > /tmp/zeros
cat ~/bash.txt |grep -v "000000" > /tmp/nozeros
echo "first10 for zeros"
head -10 /tmp/zeros
echo "last10 for zeros"
tail -10 /tmp/zeros

echo "first10 for non-zeros"
head -10 /tmp/nozeros
echo "last10 for non-zeros"
tail -10 /tmp/nozeros


