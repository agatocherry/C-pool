#!/bin/sh

find . -type f -name "*.sh" | rev | cut -d '/' -f1 | cut -c4- | rev