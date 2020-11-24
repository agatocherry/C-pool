#!/bin/sh

ifconfig |  grep 'ether' | sed 's/ether//' | tr -d ' ' | tr -d '\t'