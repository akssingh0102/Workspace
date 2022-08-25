from bs4 import BeautifulSoup

soup = BeautifulSoup('नमस्ते<Dsad')

print(soup)
print(soup.text)