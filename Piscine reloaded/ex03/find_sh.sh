find . -type f -name "*.sh" -exec basename "{}" \; | rev | cut -b 4- | rev
