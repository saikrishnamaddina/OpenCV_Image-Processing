#morphology
import cv2
import sys
import numpy as np

image = cv2	.imread(sys.argv[1],0) # change image name as you need or give sys.argv[1] to read from command line

kernel = np.ones((5,5),np.uint8)

erosion = cv2.erode(img,kernel,iterations = 1)

dilation = cv2.dilate(img,kernel,iterations = 1)

opening = cv2.morphologyEx(img, cv2.MORPH_OPEN, kernel)

closing = cv2.morphologyEx(img, cv2.MORPH_CLOSE, kernel)

gradient = cv2.morphologyEx(img, cv2.MORPH_GRADIENT, kernel)

tophat = cv2.morphologyEx(img, cv2.MORPH_TOPHAT, kernel)

blackhat = cv2.morphologyEx(img, cv2.MORPH_BLACKHAT, kernel)

cv2.namedWindow("erosion",cv2.WINDOW_NORMAL)
cv2.imshow("erosion",erosion)
cv2.namedWindow("dilation",cv2.WINDOW_NORMAL)
cv2.imshow("dilation",dilation)
cv2.namedWindow("opening",cv2.WINDOW_NORMAL)
cv2.imshow("opening",opening)
cv2.namedWindow("closing",cv2.WINDOW_NORMAL)
cv2.imshow("closing",closing)
cv2.namedWindow("gradient",cv2.WINDOW_NORMAL)
cv2.imshow("gradient",gradient)
cv2.namedWindow("tophat",cv2.WINDOW_NORMAL)
cv2.imshow("tophat",tophat)
cv2.namedWindow("blackhat",cv2.WINDOW_NORMAL)
cv2.imshow("blackhat",blackhat)
cv2.waitKey(0)