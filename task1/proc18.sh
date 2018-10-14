#!/bin/bash
LOGIN='whoami'
echo "Proc of $LOGIN"
ps -u $NAME | wc -l
echo "Proc of root"
ps -u "root" | wc -l

