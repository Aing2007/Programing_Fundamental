# Final_Practice — Programming Fundamental 1 (ภาษา C)

แบบฝึกหัดเตรียมสอบปลายภาค (เขียนโค้ดบนกระดาษ) 5 หัวข้อ รวม 43 ข้อ

| โฟลเดอร์ | จำนวนข้อ |
|---|---|
| 01_Array | 9 |
| 02_Function | 8 |
| 03_Pointer | 9 |
| 04_Structure | 8 |
| 05_Textfile | 9 (+ ไฟล์ข้อมูล .txt) |

ชื่อไฟล์บอกระดับ: `easy` ง่าย, `medium` ปานกลาง, `hard` ยาก, `applied` ประยุกต์

## วิธีฝึกที่แนะนำ
1. อ่านโจทย์ในคอมเมนต์ต้นไฟล์ แล้ว **เขียนคำตอบลงกระดาษก่อน** โดยไม่เปิดตัวอย่าง
2. พิมพ์ตามที่เขียนในกระดาษลงไฟล์ .c โดยไม่แก้ไข แล้ว compile ดูว่าผิด syntax ตรงไหน
3. ทดสอบด้วย test case ในไฟล์ แล้วจดจุดที่พลาดไว้ทบทวน

## Compile / Run
```
cd 01_Array
gcc Q01_easy_sum_avg_max_min.c -o q01
./q01          (Windows: q01.exe)
```
ข้อที่ใช้ math.h บน Linux/macOS ให้เติม `-lm`
หัวข้อ 05_Textfile ต้อง run จากภายในโฟลเดอร์ 05_Textfile เพื่อให้เปิดไฟล์ .txt เจอ

ไฟล์ทั้งหมดเป็น UTF-8 หากภาษาไทยเพี้ยนใน VS Code ให้เลือก Reopen with Encoding > UTF-8
