import matplotlib.pyplot as plt
from matplotlib.ticker import MaxNLocator
import asyncio
from pyodide.http import pyfetch
import json
import io, base64
from js import document
output = document.getElementById("output")
plot = document.getElementById("plot")
def save_plot(plt):
  buf = io.BytesIO()
  plt.savefig(buf, format='png')
  buf.seek(0)
  b64 = base64.b64encode(buf.read()).decode('utf-8')
  return f'<img src="data:image/png;base64,{b64}">'    
async def main():
    dataset_id = "d_3d227e5d9fdec73f3bcadce671c333a6"
    url = "https://data.gov.sg/api/action/datastore_search?resource_id=" + dataset_id
    response = await pyfetch(url)
    response = await response.json()
    x_label = list(response['result']['records'][0].keys())
    population = list(response['result']['records'][0].values())
    fig, ax = plt.subplots()
    print(x_label)
    print(population)
    ax.plot(x_label[-22:-2], [int(x)/1000000 for x in population[-22:-2]])
    ax.set_xlabel('Year', fontsize=8)
    ax.set_ylabel('Population (in millions)')
    ax.set_title('Population by Year in Singapore', fontsize=10)
    ax.xaxis.set_major_locator(MaxNLocator(10))
    output.innerHTML = f"<h2>Highest Population: {max([int(x) for x in population[-22:-2]])}</h2>"
    img_html = save_plot(plt)
    plot.innerHTML = img_html  
asyncio.run(main())