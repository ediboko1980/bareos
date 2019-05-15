#!/bin/bash

set -u
set -e

BASEDIR=`dirname $0`

echo "DIR: $BASEDIR"

${BASEDIR}/generate-bareos-package-info.py --out=${BASEDIR}/../en/new_main_reference/source/include/autogenerated/ ${BASEDIR}/../en/new_main_reference/source/data/bareos-*-packages.json