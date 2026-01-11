# ESP8266 Bluetooth 4 Channel Relay Control

Project ini adalah sistem kontrol relay 4 channel menggunakan ESP8266 dan Bluetooth.  
Lampu atau perangkat listrik dapat dinyalakan dan dimatikan melalui aplikasi Android (APK Bluetooth) tanpa menggunakan WiFi.

---

## Komponen yang Digunakan
- ESP8266 (NodeMCU / Wemos D1 Mini / sejenis)
- Modul Bluetooth (HC-05 / HC-06)
- Relay Module 4 Channel
- Smartphone Android (APK Bluetooth Controller)
- Kabel jumper
- Power supply

---

## Cara Kerja Sistem
1. Smartphone mengirim data string melalui Bluetooth
2. ESP8266 menerima data lewat Serial
3. ESP8266 mencocokkan data dengan perintah
4. Relay akan ON atau OFF sesuai perintah dari aplikasi

---

## Format Data dari Aplikasi
Contoh format data yang dikirim oleh APK:

| Relay | ON | OFF |
|------|----|-----|
| Relay 1 | A00101A2 | A00100A1 |
| Relay 2 | A00201A3 | A00200A2 |
| Relay 3 | A00301A4 | A00300A3 |
| Relay 4 | A00401A5 | A00400A4 |

---

## Wiring (Contoh)

### Bluetooth ke ESP8266
- VCC ke 3.3V
- GND ke GND
- TX ke RX ESP8266
- RX ke TX ESP8266 (gunakan resistor divider)

### Relay ke ESP8266
- IN1 ke D1
- IN2 ke D2
- IN3 ke D5
- IN4 ke D6
- VCC ke 5V
- GND ke GND

Catatan: Relay bersifat aktif LOW (LOW = ON, HIGH = OFF)

---

## Source Code
File bisa di download dengan nama main.ino
