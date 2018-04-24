from selenium import webdriver
driver = webdriver.Firefox()
driver.get("http:/nitrowriters.com/form/form.html")

txt = driver.find_element_by_id("my_text_field")
txt.send_keys("sobre escribe esto")

from selenium.webdriver.common.by import By
txt = driver.find_element(By.ID, "my_text_field")
txt.send_keys("Este es un primer ejemplo")

descriptions = driver.find_elements(By.CLASS_NAME,"description")
for desc in descriptions:
	print(desc.text)

txt_area = driver.find_element(By.TAG_NAME,"textarea")
txt_area.send_keys("Este es el texto del text area")

link= driver.find_element(By.LINK_TEXT, "Go to SitePoint")
print(link.text)


inputs =driver.find_elements(By.TAG_NAME, "input")
for input in inputs:
	if input.get_attribute("type") == "text":
		input.send_keys("el mismo texto en todos lados")

def printAll(name,x):
	print("\nStart "+name+":")
	for i in x:
		print(i.text)
		
options = driver.find_elements(By.CSS_SELECTOR,"* option")
printAll("Options",options)

grouping = driver.find_elements(By.CSS_SELECTOR,"label")
printAll("Grouping",grouping)

desc = driver.find_elements(By.CSS_SELECTOR,"form div")
printAll("Desc",desc)

child = driver.find_elements(By.CSS_SELECTOR,"form > div")
printAll("Child",child)

adj = driver.find_elements(By.CSS_SELECTOR,"h2 + p")
printAll("Adj",adj)

genSib = driver.find_elements(By.CSS_SELECTOR,"label ~ .choice")
printAll("GenSib",genSib)

classS = driver.find_elements(By.CSS_SELECTOR,".description")
printAll("Class selector",classS)

ids = driver.find_elements(By.CSS_SELECTOR,"#my_description")
printAll("Id selector",ids)

pseudoC = driver.find_elements(By.CSS_SELECTOR,":link")
printAll("Pseudo class",pseudoC)

