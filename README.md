# MacroPad

## TR:


### 🚀 Öne Çıkan Özellikler:

Discord Global Mute: Herhangi bir uygulamadayken tek tuşla mikrofonu aç/kapat (CTRL+SHIFT+M).

Desktop Return: Tek tuşla masaüstüne dön (Win+D).

Medya Kontrollerı: Ses artırma ve azaltma desteği.

Hızlı Bağlantı: NimBLE kütüphanesi ile düşük RAM kullanımı ve anında bağlantı.


### 🛠️ Donanım Yapılandırması:

Kart: ESP32-WROOM-32.

Pinler: 5, 16, 17, 18 (Butonlar) | 12, 13 (LED'ler).

Koruma: LED'lerde koruyucu dirençler ve butonlarda INPUT_PULLUP kullanılmıştır.


### 📦 Kurulum Notları:

1- PlatformIO kullanıyorsan platformio.ini dosyasını kontrol et.

2- NimBLE-Arduino ve ESP32-BLE-Keyboard kütüphanelerini kur.


## EN:

### 🚀 Key Features:

Discord Global Mute: Mute/unmute your microphone from any application (CTRL+SHIFT+M).

Desktop Return: Minimize all windows instantly (Win+D).

Media Controls: Volume up and volume down support.

Ultra-Fast Performance: Uses the NimBLE library for lower RAM usage and instant connectivity.


### 🛠️ Hardware Setup:

Board: ESP32-WROOM-32.

Pins: 5, 16, 17, 18 for buttons | 12, 13 for status LEDs.

Protection: Includes protective resistors for LEDs and uses INPUT_PULLUP for secure button handling.


### 📦 Installation:

1- Check the platformio.ini file for configuration.

2- Install NimBLE-Arduino and ESP32-BLE-Keyboard libraries.
