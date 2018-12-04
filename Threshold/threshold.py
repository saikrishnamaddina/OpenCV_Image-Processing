import cv2 as cv
import numpy as np

image = cv.imread('gradient.png',0)
ret,thresh1 = cv.threshold(image,127,255,cv.THRESH_BINARY)
ret,thresh2 = cv.threshold(image,127,255,cv.THRESH_BINARY_INV)
ret,thresh3 = cv.threshold(image,127,255,cv.THRESH_TRUNC)
ret,thresh4 = cv.threshold(image,127,255,cv.THRESH_TOZERO)
ret,thresh5 = cv.threshold(image,127,255,cv.THRESH_TOZERO_INV)


cv2.namedWindow("thresh1",cv2.WINDOW_NORMAL)
cv2.imshow("thresh1",thresh1)
cv2.namedWindow("thresh2",cv2.WINDOW_NORMAL)
cv2.imshow("thresh2",thresh2)
cv2.namedWindow("thresh3",cv2.WINDOW_NORMAL)
cv2.imshow("thresh3",thresh3)
cv2.namedWindow("thresh4",cv2.WINDOW_NORMAL)
cv2.imshow("thresh4",thresh4)
cv2.waitKey(0)