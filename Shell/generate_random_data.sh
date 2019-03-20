#!/bin/sh

cat /etc/passwd | while read line
do
	echo $line | md5sum | md5sum | sed 's/\(.*\) -/\1/g' >> rand_data_1
done
