#!/bin/bash

# Ask for user input for paths
echo "Enter the source directory to back up (e.g., /path/to/source):"
read SOURCE_DIR

echo "Enter the backup directory where the backup will be saved (e.g., /path/to/backup):"
read BACKUP_DIR

echo "Enter the log file path (e.g., /path/to/logfile.log):"
read LOG_FILE

echo "Enter the directory for cleanup (e.g., /path/to/cleanup):"
read CLEANUP_DIR

# Ask for the number of days for cleanup
echo "Enter the number of days to keep files (older files will be deleted, e.g., 30):"
read DAYS

# Current timestamp
TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")

# Function to create a backup
create_backup() {
    echo "Creating backup of $SOURCE_DIR..."
    tar -czf "$BACKUP_DIR/backup_$TIMESTAMP.tar.gz" -C "$SOURCE_DIR" .
    if [ $? -eq 0 ]; then
        echo "Backup created successfully at $BACKUP_DIR/backup_$TIMESTAMP.tar.gz" >> "$LOG_FILE"
    else
        echo "Backup failed!" >> "$LOG_FILE"
    fi
}

# Function to clean up old files
cleanup_old_files() {
    echo "Cleaning up files older than $DAYS days in $CLEANUP_DIR..."
    find "$CLEANUP_DIR" -type f -mtime +$DAYS -exec rm -f {} \;
    if [ $? -eq 0 ]; then
        echo "Old files cleaned up successfully in $CLEANUP_DIR" >> "$LOG_FILE"
    else
        echo "Cleanup failed!" >> "$LOG_FILE"
    fi
}

# Function to display log
display_log() {
    echo "Displaying log:"
    cat "$LOG_FILE"
}

# Main script execution
echo "Starting automation tasks..."

# Creating backup
create_backup

# Cleaning up old files
cleanup_old_files

# Displaying log
display_log

echo "Automation tasks completed."

exit 0
