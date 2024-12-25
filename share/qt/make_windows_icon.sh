#!/bin/bash
# create multiresolution windows icon
#mainnet
ICON_SRC=../../src/qt/res/icons/solidreserve.png
ICON_DST=../../src/qt/res/icons/solidreserve.ico
convert ${ICON_SRC} -resize 16x16 solidreserve-16.png
convert ${ICON_SRC} -resize 32x32 solidreserve-32.png
convert ${ICON_SRC} -resize 48x48 solidreserve-48.png
convert solidreserve-16.png solidreserve-32.png solidreserve-48.png ${ICON_DST}
#testnet
ICON_SRC=../../src/qt/res/icons/solidreserve_testnet.png
ICON_DST=../../src/qt/res/icons/solidreserve_testnet.ico
convert ${ICON_SRC} -resize 16x16 solidreserve-16.png
convert ${ICON_SRC} -resize 32x32 solidreserve-32.png
convert ${ICON_SRC} -resize 48x48 solidreserve-48.png
convert solidreserve-16.png solidreserve-32.png solidreserve-48.png ${ICON_DST}
rm solidreserve-16.png solidreserve-32.png solidreserve-48.png
