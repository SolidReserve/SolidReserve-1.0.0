#!/bin/bash
# Copyright (c) 2013-2014 The Solidreserve Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

BUILDDIR="/home/ubuntu/SolidReserve-1.0.0"
EXEEXT=""

# These will turn into comments if they were disabled when configuring.
ENABLE_WALLET=1
ENABLE_UTILS=1
ENABLE_SOLIDRESERVED=1

REAL_SOLIDRESERVED="$BUILDDIR/src/solidreserved${EXEEXT}"
REAL_SOLIDRESERVECLI="$BUILDDIR/src/solidreserve-cli${EXEEXT}"

