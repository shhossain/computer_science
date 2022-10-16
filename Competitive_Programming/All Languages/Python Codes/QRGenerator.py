import pyqrcode 
from pyqrcode import QRCode 
  
# String which represent the QR code 
s = "https://www.youtube.com/watch?v=dQw4w9WgXcQ"
  
# Generate QR code 
url = pyqrcode.create(s) 
  
# Create and save the png file
url.svg("generatedQR.svg", scale = 8) 