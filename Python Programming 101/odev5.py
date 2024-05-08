import sys
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QLineEdit, QPushButton, QVBoxLayout, QMessageBox, QFileDialog
import sqlite3
import Levenshtein

class LoginWindow(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setWindowTitle('Giriş Ekranı')

        self.username_label = QLabel('Kullanıcı Adı:')
        self.username_input = QLineEdit()
        self.password_label = QLabel('Şifre:')
        self.password_input = QLineEdit()
        self.password_input.setEchoMode(QLineEdit.Password)
        self.login_button = QPushButton('Giriş Yap')
        self.register_button = QPushButton('Kayıt Ol')

        vbox = QVBoxLayout()
        vbox.addWidget(self.username_label)
        vbox.addWidget(self.username_input)
        vbox.addWidget(self.password_label)
        vbox.addWidget(self.password_input)
        vbox.addWidget(self.login_button)
        vbox.addWidget(self.register_button)

        self.setLayout(vbox)

        self.login_button.clicked.connect(self.login)
        self.register_button.clicked.connect(self.register)

    def login(self):
        username = self.username_input.text()
        password = self.password_input.text()

        # SQLite veritabanına bağlan
        conn = sqlite3.connect('users.db')
        c = conn.cursor()

        # Kullanıcı adı ve şifreyi kontrol et
        c.execute("SELECT * FROM users WHERE username=? AND password=?", (username, password))
        result = c.fetchone()

        if result:
            self.open_main_menu()
        else:
            QMessageBox.warning(self, 'Hata', 'Kullanıcı adı veya şifre yanlış!')

        conn.close()

    def register(self):
        username = self.username_input.text()
        password = self.password_input.text()

        conn = sqlite3.connect('users.db')
        c = conn.cursor()

        # Kullanıcı adının veritabanında olup olmadığını kontrol et
        c.execute("SELECT * FROM users WHERE username=?", (username,))
        result = c.fetchone()

        if result:
            QMessageBox.warning(self, 'Hata', 'Bu kullanıcı adı zaten var!')
        else:
            c.execute("INSERT INTO users (username, password) VALUES (?, ?)", (username, password))
            conn.commit()
            QMessageBox.information(self, 'Başarılı', 'Kayıt işlemi başarıyla tamamlandı!')

        conn.close()

    def open_main_menu(self):
        self.main_menu = MainMenu()
        self.main_menu.show()
        self.close()

class MainMenu(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setWindowTitle('Ana Menü')

        self.compare_button = QPushButton('Karşılaştır')
        self.operations_button = QPushButton('İşlemler')
        self.exit_button = QPushButton('Çıkış')

        vbox = QVBoxLayout()
        vbox.addWidget(self.compare_button)
        vbox.addWidget(self.operations_button)
        vbox.addWidget(self.exit_button)

        self.setLayout(vbox)

        self.compare_button.clicked.connect(self.open_comparison_menu)
        self.operations_button.clicked.connect(self.open_operations_menu)
        self.exit_button.clicked.connect(self.close)

    def open_comparison_menu(self):
        self.comparison_menu = ComparisonMenu()
        self.comparison_menu.show()

    def open_operations_menu(self):
        self.operations_menu = OperationsMenu()
        self.operations_menu.show()

class ComparisonMenu(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setWindowTitle('Karşılaştırma Menü')

        self.algorithm1_button = QPushButton('Metin X Algoritması (Jaccard)')
        self.algorithm2_button = QPushButton('Metin Y Algoritması (Levenshtein)')

        vbox = QVBoxLayout()
        vbox.addWidget(self.algorithm1_button)
        vbox.addWidget(self.algorithm2_button)

        self.setLayout(vbox)

        self.algorithm1_button.clicked.connect(self.open_algorithm_x_menu)
        self.algorithm2_button.clicked.connect(self.open_algorithm_y_menu)

    def open_algorithm_x_menu(self):
        self.algorithm_x_menu = AlgorithmMenu(algorithm_name='Jaccard')
        self.algorithm_x_menu.show()

    def open_algorithm_y_menu(self):
        self.algorithm_y_menu = AlgorithmMenu(algorithm_name='Levenshtein')
        self.algorithm_y_menu.show()

class AlgorithmMenu(QWidget):
    def __init__(self, algorithm_name):
        super().__init__()

        self.algorithm_name = algorithm_name
        self.init_ui()

    def init_ui(self):
        self.setWindowTitle(f'Metin {self.algorithm_name} Algoritması')

        self.file1_label = QLabel('Dosya 1:')
        self.file1_input = QLineEdit()
        self.file1_button = QPushButton('Dosya Seç')

        self.file2_label = QLabel('Dosya 2:')
        self.file2_input = QLineEdit()
        self.file2_button = QPushButton('Dosya Seç')

        self.compare_button = QPushButton('Karşılaştır')

        vbox = QVBoxLayout()
        vbox.addWidget(self.file1_label)
        vbox.addWidget(self.file1_input)
        vbox.addWidget(self.file1_button)
        vbox.addWidget(self.file2_label)
        vbox.addWidget(self.file2_input)
        vbox.addWidget(self.file2_button)
        vbox.addWidget(self.compare_button)

        self.setLayout(vbox)

        self.file1_button.clicked.connect(self.select_file1)
        self.file2_button.clicked.connect(self.select_file2)
        self.compare_button.clicked.connect(self.compare_files)

    def select_file1(self):
        file_path, _ = QFileDialog.getOpenFileName(self, 'Dosya Seç', '', 'Text Files (*.txt)')
        if file_path:
            self.file1_input.setText(file_path)

    def select_file2(self):
        file_path, _ = QFileDialog.getOpenFileName(self, 'Dosya Seç', '', 'Text Files (*.txt)')
        if file_path:
            self.file2_input.setText(file_path)

    def compare_files(self):
        file1_path = self.file1_input.text()
        file2_path = self.file2_input.text()

        if not file1_path or not file2_path:
            QMessageBox.warning(self, 'Hata', 'Lütfen iki dosya seçin!')
            return

        try:
            with open(file1_path, 'r', encoding='utf-8') as file1, open(file2_path, 'r', encoding='utf-8') as file2:
                text1 = file1.read()
                text2 = file2.read()

            if self.algorithm_name == 'Jaccard':
                # Jaccard benzerlik katsayısını hesapla
                words_text1 = set(text1.split())
                words_text2 = set(text2.split())

                intersection = len(words_text1.intersection(words_text2))
                union = len(words_text1.union(words_text2))
                similarity = intersection / union
            elif self.algorithm_name == 'Levenshtein':
                # Levenshtein Mesafesini hesapla
                similarity = Levenshtein.ratio(text1, text2)

            QMessageBox.information(self, 'Benzerlik Sonuçları',
                f'{self.algorithm_name} Benzerlik Katsayısı: {similarity}'
            )

        except Exception as e:
            QMessageBox.warning(self, 'Hata', f'Dosya okuma hatası: {e}')

class OperationsMenu(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setWindowTitle('İşlemler Menü')

        self.password_button = QPushButton('Şifre')

        vbox = QVBoxLayout()
        vbox.addWidget(self.password_button)

        self.setLayout(vbox)

        self.password_button.clicked.connect(self.open_password_menu)

    def open_password_menu(self):
        self.password_menu = PasswordMenu()
        self.password_menu.show()

class PasswordMenu(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setWindowTitle('Şifre Menü')

        self.change_button = QPushButton('Değiştir')

        vbox = QVBoxLayout()
        vbox.addWidget(self.change_button)

        self.setLayout(vbox)

        self.change_button.clicked.connect(self.change_password)

    def change_password(self):
        # Şifre değiştirme işlemleri yapılacak
        pass

if __name__ == '__main__':
    app = QApplication(sys.argv)

    # SQLite veritabanını oluştur
    conn = sqlite3.connect('users.db')
    c = conn.cursor()
    c.execute('''CREATE TABLE IF NOT EXISTS users (username TEXT, password TEXT)''')
    conn.commit()
    conn.close()

    login_window = LoginWindow()
    login_window.show()

    sys.exit(app.exec_())
