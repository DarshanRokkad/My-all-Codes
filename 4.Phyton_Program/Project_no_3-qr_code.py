# Generating qr code 
import qrcode

data = f'''************************************************

        hi these is prjwal in ise branch 
        nmit 

************************************************'''

# the below is to make the qr code which have our data
qr = qrcode.make(data)
# The path where it should be saved 
path = "D:/Qr codes/prajwal.png"
qr.save(path)

# Syntax is 
# qrcode.make("DATA").save("PATH")