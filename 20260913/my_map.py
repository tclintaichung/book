my_map = { "book": 10, "milk": 5 }
print(my_map["book"]) 
print(my_map["milk"])
my_map["hello"] = lambda: print("Hello from my_map!")
my_map["hello"]()