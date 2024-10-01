#Import os lib
import os

#import requests
import requests

#comands for cleaning console output
#os.system('clear')

#Define the function
def getData():
    print('::: SOLAR SYSTEM INFO :::')
    url = 'https://api.le-systeme-solaire.net/rest/bodies/?filter%5B%5D=isComet'

    try:
        #request body to API server
        response = requests.get(url)
        response.raise_for_status()

        #Convert the response to JSON   
        data = response.json()
        
        #print the data
        print(data)

        #check if the request was successful
        print('Request successful!')

    except requests.exceptions.RequestException as e:
        print(f'Error: {e}')
        return
    
    getData()