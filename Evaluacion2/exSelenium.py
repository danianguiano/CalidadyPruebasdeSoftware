from selenium import webdriver
from selenium.webdriver.common.by import By
driver = webdriver.Firefox()


driver.get("http://localhost:4000")
driver.get("http://localhost:4000/admin/")

user = driver.find_element_by_id("input-username")
passw = driver.find_element_by_id("input-password")
user.send_keys("admin")
passw.send_keys("admin")

#Agregar 2 Productos
driver.find_element_by_css_selector('button.btn.btn-primary').click()
driver.find_element(By.XPATH,'//*[@id="modal-security"]/div/div/div[1]/button').click()
driver.find_element(By.XPATH,'//*[@id="menu-catalog"]/a').click()
driver.find_element(By.XPATH,'//*[@id="collapse1"]/li[2]/a').click()
driver.find_element(By.XPATH,'//*[@id="collapse1-1"]/li[1]').click()
driver.find_element(By.XPATH,'//*[@id="content"]/div[1]/div/div/a').click()

#Agregar producto 1
driver.find_element(By.XPATH,'//*[@id="input-name1"]').send_keys("product1")
driver.find_element(By.XPATH,'//*[@id="input-meta-title1"]').send_keys("product1")
driver.find_element(By.XPATH,'//*[@id="form-product"]/ul/li[2]/a').click()
driver.find_element(By.XPATH,'//*[@id="input-model"]').send_keys("ProductModel1")
driver.find_element(By.XPATH,'//*[@id="input-price"]').send_keys("1000")

driver.find_element(By.XPATH,'//*[@id="content"]/div[1]/div/div/button').click()
driver.find_element(By.XPATH,'//*[@id="content"]/div[1]/div/div/a').click()

#Agregar producto 2
driver.find_element(By.XPATH,'//*[@id="input-name1"]').send_keys("product2")
driver.find_element(By.XPATH,'//*[@id="input-meta-title1"]').send_keys("product2")
driver.find_element(By.XPATH,'//*[@id="form-product"]/ul/li[2]/a').click()
driver.find_element(By.XPATH,'//*[@id="input-model"]').send_keys("ProductModel2")
driver.find_element(By.XPATH,'//*[@id="input-price"]').send_keys("2000")
driver.find_element(By.XPATH,'//*[@id="content"]/div[1]/div/div/button').click()

driver.get("http://localhost:4000")

#Buscar Producto 1
driver.find_element(By.XPATH,'//*[@id="search"]/input').send_keys("product1")
driver.find_element(By.XPATH,'//*[@id="search"]/div/button').click()

#Agregar al Carrito
driver.find_element(By.XPATH,'//*[@id="content"]/div[3]/div[1]/div/div[2]/div[2]/button[1]').click()

driver.find_element(By.XPATH,'//*[@id="search"]/input').clear()

#Buscar Producto 2
driver.find_element(By.XPATH,'//*[@id="search"]/input').send_keys("product2")
driver.find_element(By.XPATH,'//*[@id="search"]/div/button').click()

#Agregar al Carrito
driver.find_element(By.XPATH,'//*[@id="content"]/div[3]/div[1]/div/div[2]/div[2]/button[1]').click()


