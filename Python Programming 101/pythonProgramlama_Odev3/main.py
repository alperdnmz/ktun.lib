class Personel:
    def __init__(self, adi, departmani, calisma_yili, maas):
        self.adi = adi
        self.departmani = departmani
        self.calisma_yili = calisma_yili
        self.maas = maas

class Firma:
    def __init__(self):
        self.personel_listesi = []

    def personel_ekle(self, personel):
        self.personel_listesi.append(personel)

    def personel_listele(self):
        for personel in self.personel_listesi:
            print("Adı:", personel.adi)
            print("Departmanı:", personel.departmani)
            print("Çalışma Yılı:", personel.calisma_yili)
            print("Maaşı:", personel.maas)
            print("--------------------")

    def maas_zammi(self, personel, zam_orani):
        personel.maas += personel.maas * (zam_orani / 100)

    def personel_cikart(self, personel):
        self.personel_listesi.remove(personel)

# Test
if __name__ == "__main__":
    # Personel oluşturma
    personel1 = Personel("Ahmet", "İnsan Kaynakları", 5, 5000)
    personel2 = Personel("Mehmet", "Finans", 3, 4500)
    personel3 = Personel("Ayşe", "Pazarlama", 2, 4000)
    personel4 = Personel("Kubilay", "Bilişim Teknolojileri", 4, 6400)

    # Firma oluşturma
    firma = Firma()

    # Personel ekleme
    firma.personel_ekle(personel1)
    firma.personel_ekle(personel2)
    firma.personel_ekle(personel3)

    # Personel listeleme
    print("Firma Çalışanları:")
    firma.personel_listele()

    # Maaş zamı yapma
    firma.maas_zammi(personel1, 10) # Ahmet'in maaşına %10 zam yap
    print("\nMaaş Güncellendi:\n")
    firma.personel_listele()

    # Personel çıkartma
    firma.personel_cikart(personel3) # Ayşe'yi işten çıkart
    print("\nÇalışanlar Güncellendi:\n")
    firma.personel_listele()
