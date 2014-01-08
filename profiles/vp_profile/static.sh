#!/bin/bash

[[ -z "$1" ]] && echo "Enter a VP domain (example.com)!" && exit 1

rm -Rf $1

wget \
  --force-html \
  --force-directories \
  --html-extension \
  --page-requisites \
  --adjust-extension \
  --convert-links \
  --domains $1 \
  --mirror \
  -e robots=off \
  $1

cd $1

echo '<html><head><meta HTTP-EQUIV="REFRESH" content="0; url=et.html"></head></body>' > index.html
