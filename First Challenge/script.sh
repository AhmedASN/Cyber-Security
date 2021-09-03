#!/usr/bin/expect -f
set timeout -1
set partUrl [lindex $argv 0]
spawn ./launch.sh
expect "What is your name?\r"
send -- "$partUrl\n"
expect elf