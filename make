#! /usr/bin/env bash

domake() {
    for f in *; do
        dest="$dest/$f"
        if [ -d "$f" ]; then
            mkdir -p "$dest"
            cd "$f"
            domake
            cd ..
        else
            gcc "$f" -E | sed -n 's/^\s*#MERR\s\+/#/p' > "$dest"
        fi
        dest="${dest%/*}"
    done
}

dest="`pwd`/include/merr"

mkdir -p "$dest"
cd src/include/merr
domake
