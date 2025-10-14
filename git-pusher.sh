#!/bin/bash

# Check if a commit message was provided
if [ -z "$1" ]; then
  echo "Usage: $0 \"commit message\""
  exit 1
fi

COMMIT_MESSAGE="$1"

#copy from 42 project
rm -rf /home/mmoras/Documents/42-projects-git/projects
cp -r /home/mmoras/Documents/projects /home/mmoras/Documents/42-projects-git

#Personal repo
git -C /home/mmoras/Documents/42-projects-git add --a
git -C /home/mmoras/Documents/42-projects-git commit -m "$COMMIT_MESSAGE"
git -C /home/mmoras/Documents/42-projects-git push
#vogosphere repo
git -C /home/mmoras/Documents/projects add --a
git -C /home/mmoras/Documents/projects commit -m "$COMMIT_MESSAGE"
git -C /home/mmoras/Documents/projects push