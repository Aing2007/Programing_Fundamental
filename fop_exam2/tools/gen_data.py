# สร้างไฟล์ data/students.dat   รัน: python3 tools/gen_data.py
# 1 record = int(4) + char[20] + float(4) + float(4) = 32 ไบต์
import struct

students = [
    (1001, "Somchai",   32.0, 45.0),
    (1002, "Malee",     20.0, 22.0),
    (1003, "Preecha",   38.0, 55.5),
    (1004, "Nattaya",   15.0, 20.0),
    (1005, "Anan",      28.0, 30.5),
    (1006, "Supaporn",  35.0, 41.0),
    (1007, "Kritsada",  25.0, 24.0),
    (1008, "Wipada",    30.0, 52.5),
]

with open("data/students.dat", "wb") as f:
    for sid, name, mid, fin in students:
        f.write(struct.pack("<i20sff", sid, name.encode(), mid, fin))
