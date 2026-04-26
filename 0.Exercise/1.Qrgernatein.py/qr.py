import qrcode

import qrcode

# Create the image
img = qrcode.make('upi://pay?pa=sushil.4u@ybl&pn=sushil_singh&cu=INR')

# Save it
img.save("kotak_qr.png")
print("QR Code generated successfully!")