#!/bin/bash

# Run qemu with whatever ELF kernel is provided.
qemu-system-aarch64 -machine raspi4b -s -S -nographic -kernel $1 -dtb $2
