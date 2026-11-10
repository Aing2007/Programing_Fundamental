# สร้างไฟล์ data/students.dat (little-endian)  รัน: python3 tools/gen_data.py
import struct
students = [
    (6401, "Somchai Jaidee",   (78.0, 85.5, 90.0)),
    (6402, "Malee Srisuk",     (55.0, 62.5, 48.0)),
    (6403, "Preecha Wongsa",   (92.0, 88.0, 95.5)),
    (6404, "Nattaya Boonmee",  (45.0, 38.5, 50.0)),
    (6405, "Anan Kittisak",    (70.5, 66.0, 74.0)),
    (6406, "Supaporn Chai",    (81.0, 79.5, 84.0)),
    (6407, "Kritsada Pong",    (60.0, 58.5, 63.0)),
    (6408, "Wipada Meesuk",    (88.5, 91.0, 79.0)),
    (6409, "Thanakorn Dee",    (35.0, 42.0, 30.5)),
    (6410, "Rattana Suwan",    (73.0, 77.5, 69.0)),
]
with open("data/students.dat", "wb") as f:
    f.write(b"STD1")
    f.write(struct.pack("<I", len(students)))
    for sid, name, sc in students:
        f.write(struct.pack("<i32s3f", sid, name.encode(), *sc))
