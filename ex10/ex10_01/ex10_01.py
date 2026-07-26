from pathlib import Path
import os
import importlib.util

cwd = Path.cwd()
lib = os.path.abspath(os.path.join(cwd, 'src/coffee.py'))
spec = importlib.util.spec_from_file_location("mod", lib)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)
Coffee = mod.Coffee
roast = ["light", "medium", "high", "French"]

class Latte (Coffee):
    def __init__(self, name, roast, price, foam):
        super().__init__(name, roast, price)
        self.foam = foam
    def get_foam(self):
        return self.foam
    def set_foam(self, foam):
        self.foam = foam
def main():
  coffee = Coffee("Organic Ethiopia", roast[0], 50)
  latte = Latte("Vanilla Latte", roast[1], 65, 2)
  print("-- Coffee List -- ")
  print("Coffee Name: " + coffee.get_name())  
  print("Coffee Roast: " + coffee.get_roast())
  print("Coffee Price per cup: $NT" + str(coffee.get_price()))
  print("Latte Name: " + latte.get_name())
  print("Latte Roast: " + latte.get_roast())
  print("Latte Price per cup: $NT" + str(latte.get_price()))
  print("Latte Milk Foam: " + str(latte.get_foam()) + " cm")

if __name__ == "__main__":
    main()