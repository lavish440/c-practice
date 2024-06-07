#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <exercise_number> <question_number>"
    exit 1
fi

EXERCISE=$1
QUESTION=$2

git add exercise_"$EXERCISE"/question_"$QUESTION".c

echo "Enter the question description: "
DESC=""

while true; do
	read -r LINE
	if [[ -z "$LINE" ]]; then
		break
	fi

	DESC="$DESC$LINE"
done


git commit -m "[Exercise $EXERCISE] Solved Exercise $EXERCISE, Question $QUESTION" -m "$DESC"

echo "Successfully committed Exercise $EXERCISE, Question $QUESTION."
