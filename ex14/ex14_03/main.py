import requests
from js import document
import matplotlib.pyplot as plt
import pandas as pd
from pyodide.http import pyfetch
import io, base64
from matplotlib.ticker import MaxNLocator
from matplotlib import font_manager as fm
import tempfile

output = document.getElementById("output")
plot = document.getElementById("plot")
url= "http://localhost:5000/data/"
def save_plot(plt):
  buf = io.BytesIO()
  plt.savefig(buf, format='png')
  buf.seek(0)
  b64 = base64.b64encode(buf.read()).decode('utf-8')
  return f'<img src="data:image/png;base64,{b64}">'
async def main():
  response = await pyfetch(f"{url}AQI.csv")
  data = await response.bytes()
  data = pd.read_csv(io.BytesIO(data), encoding='utf-8')
  response = requests.get("http://localhost:5000/data/mingliu.ttc")  
  with tempfile.NamedTemporaryFile(delete=False, suffix=".ttc") as tmp:
      tmp.write(response.content)
      font_path = tmp.name
  prop = fm.FontProperties(fname=font_path)
  data['民國年'] = data['民國年'].astype(str) 
  data['月'] = data['月'].astype(str) 
  data['日'] = data['日'].astype(str) 
  data['x_label'] = data['民國年'] + '-' + data['月'] + '-' + data['日']
  x_label = data.loc[ data.iloc[:, 1] == '中山國小']['x_label']
  aqi = data.loc[ data.iloc[:, 1] == '中山國小']['總懸浮微粒_μg/m3']
  fig, ax = plt.subplots()
  ax.plot(x_label, aqi)
  ax.set_title('台中市中山國小空氣品質指標', fontproperties=prop, fontsize=16)
  ax.set_xlabel('日期', fontproperties=prop, fontsize=12)
  ax.set_ylabel('總懸浮微粒_μg/m3', fontproperties=prop, fontsize=12)
  ax.xaxis.set_major_locator(MaxNLocator(5))
  output.innerHTML = f"<h2>Highest AQI: {max(aqi)}</h2>"
  img_html = save_plot(plt)
  plot.innerHTML = img_html  
main()