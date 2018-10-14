#!/bin/bash
date >> /tmp/run.log
echo "Hello,World" 
1>>stdout
cat /tmp/run.log |wc -l &>> stderr
