#!/bin/sh
set -eu

mkdir -p workdir/libs
test -d workdir/unikraft || ln -sfn ../../repos/unikraft workdir/unikraft
test -d workdir/libs/musl || ln -sfn ../../../repos/libs/musl workdir/libs/musl
test -d workdir/libs/lwip || ln -sfn ../../../repos/libs/lwip workdir/libs/lwip
