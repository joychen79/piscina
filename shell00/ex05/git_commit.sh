#!/bin/sh
git log -n5 --pretty=oneline | cut -d " " -f 1
