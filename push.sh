#!/bin/bash

# Pull latest changes first
echo "🔄 Pulling latest changes..."
git pull --rebase origin main

# Stage all changes
echo "➕ Adding changes..."
git add .

# Commit with current date and time
echo "📝 Committing..."
git commit -m "Auto update: $(date)"

# Push to GitHub
echo "🚀 Pushing to GitHub..."
git push origin main
