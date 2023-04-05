import qrcode
import PIL
# create qr object
qr = qrcode.QRCode(version=1, box_size=10, border=5)

# add data
data = "https://www.capitalist.rw"
qr.add_data(data)
qr.make(fit=True)

# create image
img = qr.make_image(fill_color="black", back_color="white")

# save image
img.save("capitalist_qr_code.png")
