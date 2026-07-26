import requests
          
dataset_id = "d_3d227e5d9fdec73f3bcadce671c333a6"
url = "https://data.gov.sg/api/action/datastore_search?resource_id="  + dataset_id
        
response = requests.get(url)
print(response.json())