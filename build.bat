@echo off
cls
python D:\boot\main.py 5 compile ./src ./build arduino:avr:uno D:\K\Coding\Arduino-Lcd_Controller\src&&python D:\boot\main.py 5 upload ./build COM3 arduino:avr:uno
