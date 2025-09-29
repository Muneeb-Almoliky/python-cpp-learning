from PIL import Image

# Load the image
img = Image.open("C:/Users/pc/Desktop/MY photo1.jpg")

# Convert the image to grayscale
img = img.convert("L")

# Get the pixel values as a list of tuples
pixels = list(img.getdata())

# Convert each pixel value to binary and concatenate them into a string
binary_str = ''.join(['{0:08b}'.format(pixel) for pixel in pixels])

# Save the binary data to a text file
with open("image_data.txt", "w") as f:
    f.write(binary_str)
