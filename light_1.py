import time
import board
import neopixel
# Set up the NeoPixels
pixels = neopixel.NeoPixel(board.NEOPIXEL, 10, brightness=0.3)

while True:
    pixels.fill((255, 0, 0)) # Red
    time.sleep(1)
    pixels.fill((0, 255, 0)) # Green
    time.sleep(1)
    