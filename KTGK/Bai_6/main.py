class SoHoc:
    def __init__(self, number1=0, number2=0):
        self.number1 = number1
        self.number2 = number2
    
    def nhap_thong_tin(self):
        self.number1 = int(input("Enter number1: "))
        self.number2 = int(input("Enter number2: "))
    
    def in_thong_tin(self):
        print("Number1:", self.number1)
        print("Number2:", self.number2)
    
    def cong(self):
        return self.number1 + self.number2
    
    def tru(self):
        return self.number1 - self.number2
    
    def nhan(self):
        return self.number1 * self.number2
    
    def chia(self):
        if self.number2 != 0:
            return self.number1 / self.number2
        else:
            return "Division by zero error"

# Example usage
sohoc = SoHoc(6, 3)
sohoc.nhap_thong_tin()
sohoc.in_thong_tin()
print("Sum:", sohoc.cong())
print("Difference:", sohoc.tru())
print("Product:", sohoc.nhan())
print("Quotient:", sohoc.chia())
