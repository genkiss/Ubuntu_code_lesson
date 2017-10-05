import qrcode
import qrcode.image.svg

# define a method to choose which factory metho to use
# possible values 'basic' 'fragment' 'path'
method="basic"

data="Some text that you want to store in the QRcode"

if method == 'basic':
    #Simple factory, just a set of rects.
    factory = qrcode.image.svg.SvgImage
elif method == 'fragment':
    #Fragment factory (also just a set of rects)
    factory = qrcode.image.svg.SvgFragmentImage
elif method == 'path':
    #Combined path factory, fixes whith space that may occur when zooming
    factory = qrcode.image.svg.SvgPathImage

#set data to qrcode
img = qrcode.make(data, image_factory = factory)

#save svg file somewhere
img.save("qrcode.svg")
