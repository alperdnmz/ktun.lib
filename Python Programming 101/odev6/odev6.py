import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.colors as mcolors
from openpyxl import Workbook

# Rastgele x ve y koordinatlarını üret
num_points = 1000
x = np.random.randint(0, 1001, num_points)
y = np.random.randint(0, 1001, num_points)

# Verileri bir DataFrame'e kaydet
df = pd.DataFrame({'x': x, 'y': y})

# Excel dosyasına yaz
excel_filename = 'koordinatlar.xlsx'
df.to_excel(excel_filename, index=False)

# Excel dosyasından oku
df = pd.read_excel(excel_filename)

# Grafik boyutları
grid_size = 100

# Grafik oluştur
plt.figure(figsize=(10, 10))
plt.scatter(df['x'], df['y'], c='blue', s=10, alpha=0.5)

# Izgaraları çiz
for i in range(0, 1001, grid_size):
    plt.axhline(y=i, color='grey', linestyle='--', linewidth=0.5)
    plt.axvline(x=i, color='grey', linestyle='--', linewidth=0.5)

# Her bir ızgaradaki noktaları farklı renklendirme
colors = list(mcolors.TABLEAU_COLORS.keys())
color_idx = 0

for i in range(0, 1000, grid_size):
    for j in range(0, 1000, grid_size):
        mask = (df['x'] >= i) & (df['x'] < i + grid_size) & (df['y'] >= j) & (df['y'] < j + grid_size)
        plt.scatter(df[mask]['x'], df[mask]['y'], c=colors[color_idx % len(colors)], s=10, alpha=0.5)
        color_idx += 1

# Grafiği göster
plt.xlabel('X Koordinatları')
plt.ylabel('Y Koordinatları')
plt.title('Rastgele Noktaların Görselleştirilmesi')
plt.grid(True)
plt.savefig('koordinatlar_grafik.jpeg')
plt.show()
