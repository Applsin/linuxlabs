#!/bin/bash
cat "$2" | grep "$1" | sort | head -"$3" | nl
