
from flask import Flask, render_template, send_file
import matplotlib.pyplot as plt
import numpy as np

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/generate_image')
def generate_image():
    # Rastgele noktalar üretme
    num_points = 100
    x = np.random.randint(0, 1000, num_points)
    y = np.random.randint(0, 1000, num_points)

    # Grafik oluşturma
    plt.figure(figsize=(10, 10))
    plt.scatter(x, y, c=np.random.rand(num_points), cmap='viridis')
    plt.grid(True)
    plt.savefig('static/plot.png')
    plt.close()

    return send_file('static/plot.png', mimetype='image/png')

if __name__ == '__main__':
    app.run(debug=True)
