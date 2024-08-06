print('a')
import matplotlib.pyplot as plt
import numpy as np
x = np.linspace(-10, 10, 100)
y = (x**2) + 5*x + 4 * 1
plt.plot(x, y)
plt.xlabel('x')
plt.ylabel('y')
plt.title('Do thi ham so y = (x**2) + 5x + 4 * 1')
plt.show()

print('b')
import math
M = float(input("Nhap M: "))
a = 1; b = 5; c = 4 * M
delta = b**2 - 4 * a * c
if delta > 0:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print(f"Phuong trinh co 2 nghiem: \nx1 = {x1}\nx2 = {x2}")
elif delta == 0:
    x = -b / (2 * a)
    print(f"Phuong trinh co nghiem kep: \nx1 = x2 = {x}")
else:
    xt = -b / (2 * a)
    xa = math.sqrt(abs(delta)) / (2 * a)
    print(f"Phuong trinh co 2 nghiem ao: \nx1 = {xt}", end='')
    if xa < 0:
        print(f"{xa}i")
    else:
        print(f"+{xa}i")
    print(f"x2 = {xt}", end='')
    if xa > 0:
        print(f"-{xa}i")
    else:
        print(f"+{-xa}i")

print('c')
print('Để phương trình có 2 nghiệm phân biệt')
print('Δ > 0 \n<=> b**2 - 4*a*c > 0 \n<=> 25 - 16*M > 0')
print('16*M < 25 \n<=> M < 25/16 ~ 1.5625')

print('d')
# Nhận giá trị x từ người dùng
x = float(input("Nhập giá trị x: "))

# Tính giá trị của M để hàm số y(x) nằm trong khoảng từ -5 đến 5
M_min = (-5 - x**2 - 5*x) / 4
M_max = (5 - x**2 - 5*x) / 4

# In kết quả
print(f"Khoảng giá trị của M để -5 <= y(x) <= 5 là: [{M_min}, {M_max}]")

# Vẽ đồ thị
M_values = np.linspace(M_min - 1, M_max + 1, 400)
y_values = x**2 + 5*x + 4 * M_values

plt.figure(figsize=(10, 6))
plt.plot(M_values, y_values, label=f'y(x) = x^2 + 5x + 4M (x = {x})')

# Tô màu miền giá trị M tìm được
plt.fill_between(M_values, y_values, where=(M_values >= M_min) & (M_values <= M_max), color='yellow', alpha=0.3, label='Miền giá trị M thỏa mãn')

# Đường y = -5 và y = 5
plt.axhline(y=-5, color='r', linestyle='--', label='y = -5')
plt.axhline(y=5, color='b', linestyle='--', label='y = 5')

plt.xlabel('M')
plt.ylabel('y(x)')
plt.legend()
plt.title(f'Đồ thị hàm số y(x) với x = {x}')
plt.grid(True)
plt.show()