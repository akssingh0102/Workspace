import pandas as pd

AVENGERS_LINK = 'https://en.wikipedia.org/wiki/List_of_Marvel_Cinematic_Universe_films'
PYTHON_DATA_LINK = 'https://www.thepythoncode.com/article/convert-html-tables-into-csv-files-in-python'

avengers = pd.read_html(AVENGERS_LINK)
# python_data = pd.read_html(PYTHON_DATA_LINK)

print('Length of the list : ',len(avengers))
print('--------------')
print(avengers[2])

# print(python_data[0])