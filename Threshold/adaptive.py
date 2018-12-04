import cv2 
import numpy as np
import sys

image = cv2	.imread(sys.argv[1],0)

th2 = cv2.adaptiveThreshold(image,255,cv2.ADAPTIVE_THRESH_MEAN_C,\
            cv2.THRESH_BINARY_INV,17,12)
th3 = cv2.adaptiveThreshold(image,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,\
            cv2.THRESH_BINARY_INV,17,12)

cv2.namedWindow("th2",cv2.WINDOW_NORMAL)
cv2.imshow("th2",th2)
cv2.namedWindow("th3",cv2.WINDOW_NORMAL)
cv2.imshow("th3",th3)
cv2.waitKey(0)