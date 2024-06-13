import qrcode
import sys

if len(sys.argv) != 3:
  print("Error: usage is 'qr.py linkAddress Filename")
  sys.exit(1)  

image = qrcode.make(sys.argv[1])
image.save(f"{sys.argv[2]}.png", "PNG")
sys.exit(0)