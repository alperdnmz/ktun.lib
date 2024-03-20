from to_lower import to_lower
from is_alpha import is_alpha

def frequency_analysis(text):
    letter_dict = {}
    total_letters = 0

    for char in text:
        if is_alpha(char):
            char = to_lower(char)
            letter_dict[char] = letter_dict.get(char, 0) + 1
            total_letters += 1

    frequency = {char: count / total_letters for char, count in letter_dict.items()}
    return letter_dict, frequency, total_letters
