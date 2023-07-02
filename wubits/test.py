import random

# Mở file linkpost.txt và đọc các dòng, lưu vào list links
with open('wubits\\linkpost.txt', 'r') as f:
    links = f.readlines()

# Lấy ngẫu nhiên một đường dẫn từ list links
random_link = random.choice(links).rstrip()

print(random_link)
