#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <exercise_number> <question_number>"
    exit 1
fi

EXERCISE=$1
QUESTION=$2

nvim exercise_"$EXERCISE"/question_"$QUESTION".c

git add exercise_"$EXERCISE"/question_"$QUESTION".c

echo "Enter the question description: "
DESC=""

while true; do
	read -r LINE
	if [[ -z "$LINE" ]]; then
		break
	fi
	DESC="$DESC $LINE"
done

DESC="$(echo "$DESC" | fold -s -w 50)"

git commit -m "[Exercise $EXERCISE] Solved Exercise $EXERCISE, Question $QUESTION" -m "Question: $DESC"

echo -e "\033[38;2;0;255;0mSuccessfully committed Exercise \033[38;2;0;255;255m$EXERCISE\033[38;2;0;255;0m, Question \033[38;2;0;255;255m$QUESTION\033[0;00m.\033[0;00m"
