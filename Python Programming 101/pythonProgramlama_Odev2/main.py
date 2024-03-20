from is_alpha import is_alpha
from to_lower import to_lower
from frequency_analysis import frequency_analysis
from ufak_bilgi import ufak_bilgi

def print_frequency(letter_dict, frequency):
    print("Harf Frekansları:")
    for char, freq in sorted(frequency.items()):
        print(f"{char}: {letter_dict[char]} kere, {freq:.2%}")

if __name__ == "__main__":
    text = input("Lütfen metni girin: ")
    letter_dict, frequency, total_letters = frequency_analysis(text)

    print(f"Toplam Harf Sayısı: {total_letters}")
    print_frequency(letter_dict, frequency)
    ufak_bilgi()
