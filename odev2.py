def is_alpha(character):
    return 'a' <= character <= 'z' or 'A' <= character <= 'Z'

def to_lower(character):
    if 'a' <= character <= 'z':
        return chr(ord(character) - 32)
    else:
        return character
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

def print_frequency(letter_dict, frequency):
    """
    Harf frekanslarını yazdıran fonksiyon.
    """
    print("Harf Frekansları:")
    for char, freq in sorted(frequency.items()):
        print(f"{char}: {letter_dict[char]} kere, {freq:.2%}")

def ufak_bilgi():
    print("Geliştirici: Alper DÖNMEZ")
    print("Öğrenci Numarası: 211220044")
    print("Dünyaya Not: Türk mühendislerinin alnında cumhuriyetin istikbalini aydınlatan ışık parıldar. - Mustafa Kemal ATATÜRK.")

def main(text):
    letter_dict, frequency, total_letters = frequency_analysis(text)

    print(f"Toplam Harf Sayısı: {total_letters}")
    print_frequency(letter_dict, frequency)
    ufak_bilgi()

if __name__ == "__main__":
    text = input("Lütfen metni girin: ")
    main(text)