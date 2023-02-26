from bs4 import BeautifulSoup

text = 'dog &amp & cat'
soup = BeautifulSoup(text, 'html.parser')

print(soup)
print(soup.text.strip())