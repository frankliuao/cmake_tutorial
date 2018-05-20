#!/bin/bash

if [ $# -ge 1 ]
then
  if [ $1 = "clean" ] 
  then
    echo "Cleaning cmake residuals and logs"
    if [ -e ./build/Makefile ]
    then
      cd ./build/; make clean; cd - 1>/dev/null
    fi
    rm -rf build/
    exit 0
  elif [ $1 = "make" ] 
  then
    :
  else
    echo "Command not found"
    exit 1
  fi
fi
echo "Doing a regular cmake setup for making"
if [ ! -d ./build/ ] 
then
  mkdir ./build/
fi
cd ./build/; cmake ..; make; cd - 1>/dev/null
