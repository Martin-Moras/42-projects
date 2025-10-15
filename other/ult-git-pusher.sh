#!/bin/bash

# Predefined parent directory containing multiple git repos
OFFICIAL_REPO="/home/mmoras/Documents/projects"  # change this to your path
PERSONAL_REPO="/home/mmoras/Documents/42-projects-git"  # change this to your path

# List all first-level subdirectories that are git repos
repos=()
i=1
echo "Available git repositories in $OFFICIAL_REPO:"
for dir in "$OFFICIAL_REPO"/*/; do
    if [ -d "$dir/.git" ]; then
        echo "$i) $(basename "$dir")"
        repos+=("$dir")
        ((i++))
    fi
done

# Check if any repos found
if [ ${#repos[@]} -eq 0 ]; then
    echo "No git repositories found in $OFFICIAL_REPO."
    exit 1
fi

# Ask user to select a repository
read -p "Select a repository by number: " choice

# Validate input
if ! [[ "$choice" =~ ^[0-9]+$ ]] || [ "$choice" -lt 1 ] || [ "$choice" -gt ${#repos[@]} ]; then
    echo "Invalid selection."
    exit 1
fi

# Enter the selected repository
REPO_DIR="${repos[$((choice-1))]}"
cd "$REPO_DIR" || exit 1
echo "Selected repository: $(basename "$REPO_DIR")"

# Ask for commit message
read -p "Enter commit message: " COMMIT_MESSAGE
if [ -z "$COMMIT_MESSAGE" ]; then
    echo "Commit message cannot be empty."
    exit 1
fi

#Personal repo

echo "Updating personal repo"
#copy from 42 project
rm -rf $PERSONAL_REPO/projects
cp -ra /home/mmoras/Documents/projects $PERSONAL_REPO

echo -e "\nUploading Personal repo"
echo -e "-----------------------\n"

git -C $PERSONAL_REPO add --a
git -C $PERSONAL_REPO commit -m "$COMMIT_MESSAGE"
git -C $PERSONAL_REPO push

#Official repo
echo -e "\nUploading Official repo"
echo -e "-----------------------\n"

git -C $REPO_DIR add --a
git -C $REPO_DIR commit -m "$COMMIT_MESSAGE"
git -C $REPO_DIR push