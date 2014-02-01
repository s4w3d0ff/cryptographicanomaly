#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/cryptographicanomaly.png
ICON_DST=../../src/qt/res/icons/cryptographicanomaly.ico
convert ${ICON_SRC} -resize 16x16 cryptographicanomaly-16.png
convert ${ICON_SRC} -resize 32x32 cryptographicanomaly-32.png
convert ${ICON_SRC} -resize 48x48 cryptographicanomaly-48.png
convert cryptographicanomaly-16.png cryptographicanomaly-32.png cryptographicanomaly-48.png ${ICON_DST}

