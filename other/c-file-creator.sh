#!/bin/bash
while [ 1 ]; do
	read -p "enter file name: ft_" FILE_NAME
	
	if [ -z "$FILE_NAME" ]; then
	    exit 1
	fi
	
	FT_FILE_NAME="ft_$FILE_NAME"

	FILE_CONTENT="int	$FT_FILE_NAME(char c)\n{\n\n}"
	FILE_PATH="$(pwd)/$FT_FILE_NAME.c"
	touch "$FILE_PATH"
	echo -e $FILE_CONTENT > $FILE_PATH
done