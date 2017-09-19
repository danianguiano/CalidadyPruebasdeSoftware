require 'watir'
browser = Watir::Browser.new :firefox

browser.goto 'http://blazedemo.com' 

#dar click a un botón de "Find Flight"
browser.button(:value => "Find Flights").click()

#dar click a un botón de "Find Flight"
browser.button(:value => "Choose This Flight").click()

#Name
browser.text_field(:id => "inputName").set("Daniela")
#Address
browser.text_field(:id => "address").set("Cedros")
#City
browser.text_field(:id => "city").set("Atizapan")
#State
browser.text_field(:id => "state").set("Mexico")
#ZipCode
browser.text_field(:id => "zipCode").set("hola")
#CreditCard number
browser.text_field(:id => "creditCardNumber").set("234567890")
#Name on Card
browser.text_field(:id => "nameOnCard").set("Rebeca")

browser.checkbox(:id => "rememberMe").set

browser.button(:value => "Purchase Flight").click()


