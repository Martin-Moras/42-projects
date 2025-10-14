#!/bin/bash

# Check if a commit message was provided
if [ -z "$1" ]; then
  echo "Usage: $0 \"commit message\""
  exit 1
fi

COMMIT_MESSAGE="$1"

#copy from 42 project
rm -r /home/mmoras/Documents/42-projects-git/projects
mkdir /home/mmoras/Documents/42-projects-git/projects
cp -r /home/mmoras/Documents/projects /home/mmoras/Documents/42-projects-git/projects


# Stage all changes
git add .

# Commit with the provided message
git commit -m "$COMMIT_MESSAGE"

# Push to the current branch
git push
