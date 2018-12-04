#BIlateral_blur.py
import cv2
import sys

#Reading the image from the command line
image = cv2.imread(sys.argv[1],1)
#image = cv2.imread("input.jpg",1)

#gaussain kernel size 5X5
blur = cv2.blur(image,(5,5))

cv2.namedWindow("Blur_image",cv2.WINDOW_NORMAL)
cv2.imshow("Blur_image",blur)
cv2.waitKey(0)