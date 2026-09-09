class Grandfather:
    def grandfather(self):
        print("Grandfather class")

class Father(Grandfather):
    def father(self):
        print("Father class")

class Son(Father):
    def son(self):
        print("Son class")

s = Son()

s.grandfather()
s.father()
s.son()