import csv
import matplotlib.pyplot as plt
import numpy as np

dsSV = [
    [1, 'SV001', 'Nguyen Van A', 7, 8],
    [2, 'SV002', 'Tran Thi B', 9, 8],
    [3, 'SV003', 'Le Van C', 4, 5],
    [4, 'SV004', 'Pham Thi D', 6, 7],
    [5, 'SV005', 'Hoang Van E', 8, 8],
    [6, 'SV006', 'Nguyen Thi F', 3, 4],
    [7, 'SV007', 'Tran Van G', 5, 6],
    [8, 'SV008', 'Le Thi H', 2, 3],
    [9, 'SV009', 'Pham Van I', 9, 7],
    [10, 'SV010', 'Hoang Thi J', 6, 6],
    [11, 'SV011', 'Nguyen Van K', 5, 8],
    [12, 'SV012', 'Tran Thi L', 7, 7],
    [13, 'SV013', 'Le Van M', 9, 9],
    [14, 'SV014', 'Pham Thi N', 4, 5],
    [15, 'SV015', 'Hoang Van O', 6, 7],
    [16, 'SV016', 'Nguyen Thi P', 8, 9],
    [17, 'SV017', 'Tran Van Q', 3, 4],
    [18, 'SV018', 'Le Thi R', 5, 6],
    [19, 'SV019', 'Pham Van S', 2, 3],
    [20, 'SV020', 'Hoang Thi T', 9, 8]
]

# a
with open('./Bai_2/diem_trung_binh.csv', mode='w', newline='') as file:
    writer = csv.writer(file)
    header = ['STT', 'MSSV', 'Ho Va Ten', 'Diem Mon 1', 'Diem Mon 2', 'Diem Trung Binh']
    writer.writerow(header)
    
    for sv in dsSV:
        diem_tb = (sv[3] + sv[4]) / 2
        sv.append(diem_tb)
        writer.writerow(sv)

# b
print("Sinh viên có xếp loại giỏi (>= 8.0):")
for sv in dsSV:
    if sv[5] >= 8.0:
        print(f"{sv[1]} - {sv[2]} - Điểm trung bình: {sv[5]}")

# c
print("\nSinh viên không PASS được học kỳ (TB < 5.0):")
for sv in dsSV:
    if sv[5] < 5.0:
        print(f"{sv[1]} - {sv[2]} - Điểm trung bình: {sv[5]}")

# d
dsDiemTB = [round(sv[5]) for sv in dsSV]
dsDiemTB.sort()
dsDiem = list(set(dsDiemTB))
dsDiem.sort()
dsTanSo = [dsDiemTB.count(diem) for diem in dsDiem]

plt.figure(figsize=(10, 6))
plt.bar(dsDiem, dsTanSo, color='blue', alpha=0.7)
plt.xlabel('Điểm trung bình (Làm tròn)')
plt.ylabel('Tần số')
plt.title('Phân bố điểm trung bình của 20 sinh viên')
plt.xticks(np.arange(min(dsDiemTB), max(dsDiemTB) + 1, 1))
plt.show()