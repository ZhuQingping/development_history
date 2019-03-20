#!/bin/sh

echo "Parameter num: $#"

cur_num=1
for para in $@
do
	echo "The ${cur_num} parameter is: ${para}"
	cur_num=`expr ${cur_num} + 1`
done
