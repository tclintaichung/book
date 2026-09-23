my_map = { "book": 10, "milk": 5 }
print(my_map["book"]) 
print(my_map["milk"])
my_map["hello"] = lambda: print("Hello from my_map!")
my_map["hello"]()
my_new_map = dict()
my_new_map["book"] = 10
my_new_map["milk"] = 5  
print(my_new_map["book"])
print(my_new_map["milk"])
my_new_map["hello"] = lambda: print("Hello from my_new_map!")
my_new_map["hello"]()