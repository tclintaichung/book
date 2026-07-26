from js import document
import matplotlib.pyplot as plt
import pandas as pd
from pyodide.http import pyfetch
import io, base64
output = document.getElementById("output")
plot = document.getElementById("plot")
url= "http://localhost:8000/data/"
def save_plot(plt):
  buf = io.BytesIO()
  plt.savefig(buf, format='png')
  buf.seek(0)
  b64 = base64.b64encode(buf.read()).decode('utf-8')
  return f'<img src="data:image/png;base64,{b64}">'
async def main():
  data = []
  x_date = []
  x_label = []
  babies = []
  for i in range(107, 114):
      x_label.append(str(i+1911))
      print(f"{url}{i}.csv")
      response = await pyfetch(f"{url}{i}.csv")
      data = await response.bytes() 
      buffer = io.BytesIO(data)
      data = pd.read_csv(buffer, encoding='utf-8')
      babies.append(data['嬰兒出生數'].sum())
      print(f"/{i}.csv: {data['嬰兒出生數'].sum()}")
  fig, ax = plt.subplots()
  babies_k = [b/1000 for b in babies]
  ax.plot(x_label, babies_k)
  ax.set_title('Babies born in Taiwan from 2018 - 2024', fontsize=14)
  ax.set_xlabel('Year', fontsize=12)
  ax.set_ylabel('No. of Babies Born (in thousands)', fontsize=12)
  output.innerHTML = f"<h2>Total babies born in 2024: {babies[-1]}</h2>"
  img_html = save_plot(plt)
  plot.innerHTML = img_html  
main()