class Coffee:
    def __init__(self, name, roast, price):
        self.name = name
        self.roast = roast
        self.price = price
    def get_name(self):
        return self.name
    def get_roast(self):
        return self.roast
    def get_price(self):
        return self.price
    def set_name(self, name):
        self.name = name
    def set_roast(self, roast):
        self.roast = roast
    def set_price(self, price):
        self.price = price