# Final_Practice_Mixed — Programming Fundamental 1 (ภาษา C)

แบบฝึกหัดเตรียมสอบปลายภาค (เขียนโค้ดบนกระดาษ) ฉบับ "หลายหัวข้อในข้อเดียว" รวม 34 ข้อ
ครอบคลุม Array, Function/Recursion, Pointer, Structure (ไม่มี Text file)

| โฟลเดอร์ | จำนวนข้อ | จุดเน้น (ทุกข้อผสมหัวข้ออื่นด้วย) |
|---|---|---|
| 01_Array_Mixed | 7 | อาร์เรย์ 1-2 มิติ + สตริง ผ่านฟังก์ชันและ pointer |
| 02_Function_Recursion_Mixed | 7 | ฟังก์ชัน / recursion + อาร์เรย์ + pointer |
| 03_Pointer_Mixed | 7 | pass by reference, pointer arithmetic, char pointer |
| 04_Structure_Mixed | 7 | struct, nested struct, array of struct, pointer to struct |
| 05_Integrated_All | 6 | รวมทุกหัวข้อในข้อเดียว (ระบบธนาคาร, ห้องสมุด, พหุนาม ฯลฯ) |

ชื่อไฟล์บอกระดับ: `easy` ง่าย, `medium` ปานกลาง, `hard` ยาก, `applied` ประยุกต์

## ข้อกำหนดที่ใช้ทุกข้อ (จำลองเงื่อนไขการตรวจ)
1. ห้ามใช้ global variable
2. ต้องใช้ function prototype ตามที่กำหนดในแต่ละข้อเท่านั้น ห้ามแก้
3. main ต้องเรียกใช้ทุกฟังก์ชันที่กำหนด
4. บางข้อมีข้อกำหนดเพิ่ม เช่น ห้าม string.h, ห้ามใช้ [ ], ต้องเป็น recursive — ดูในไฟล์

ในแต่ละไฟล์มี prototype และโครงฟังก์ชันว่าง ๆ เตรียมไว้แล้ว ให้เขียนเฉพาะเนื้อใน

## วิธีฝึกที่แนะนำ
1. อ่านโจทย์และ prototype แล้ว **เขียนทั้งโปรแกรมลงกระดาษก่อน**
2. พิมพ์ตามกระดาษลงไฟล์ .c โดยไม่แก้ แล้ว compile ดูว่าพลาด syntax ตรงไหน
3. ทดสอบด้วย test case ในไฟล์ แล้วจดจุดผิดไว้ทบทวนก่อนสอบ

## Compile / Run
```
gcc -Wall Q01_easy_array_stats.c -o q01
./q01          (Windows: q01.exe)
```
ข้อที่ include <math.h> บน Linux/macOS ให้เติม `-lm`
`-Wall` จะช่วยเตือนตัวแปรที่ประกาศแล้วไม่ใช้ และ warning อื่น ๆ ที่ควรแก้

ไฟล์ทั้งหมดเป็น UTF-8 หากภาษาไทยเพี้ยนใน VS Code ให้เลือก Reopen with Encoding > UTF-8
