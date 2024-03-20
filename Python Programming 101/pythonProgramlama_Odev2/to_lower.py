def to_lower(character):
    if 'a' <= character <= 'z':
        return chr(ord(character) - 32)
    else:
        return character
