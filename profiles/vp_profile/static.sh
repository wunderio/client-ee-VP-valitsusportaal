#!/bin/bash

DOMAIN='vp-ra.devel.mekaia.com'
DOMAIN_PATH='/home/devel/vp-ra/static_views'

cd $DOMAIN_PATH

rm -Rf *

httrack $DOMAIN \
  -O $DOMAIN_PATH '+*.'$DOMAIN'/*' '-*=*' '-*.doc' '-*.xls' '-*.odt' '-*.zip' '-*.ods' '-*.pdf' '-*.rtf' \
  --mirror \
  --mirrorlinks \
  -v \
  -s0
