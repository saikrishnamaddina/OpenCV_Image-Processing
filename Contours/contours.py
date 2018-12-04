#contours.py

import cv2
import sys


image = cv2.imread(sys.argv[1],0)

ret,thresh = cv2.threshold(image,127,255,0)

im1,contours,hierarchy = cv2.findContours(thresh,cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE)
im2,contours1,hierarchy1 = cv2.findContours(thresh,cv2.RETR_LIST,cv2.CHAIN_APPROX_SIMPLE)
im3,contours2,hierarchy2 = cv2.findContours(thresh,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)

cv2.drawContours(img_retree, contours, -1, (0,255,0), 1)
cv2.drawContours(img_list, contours1, -1, (0,255,0), 1)
cv2.drawContours(img_external, contours2, -1, (0,255,0), 1)

cv2.namedWindow("thresh",cv2.WINDOW_NORMAL)
cv2.imshow("thresh",thresh)
cv2.namedWindow("img_tree",cv2.WINDOW_NORMAL)
cv2.imshow("img_list",img_retree)
cv2.namedWindow("img_list",cv2.WINDOW_NORMAL)
cv2.imshow("img_list",img_list)
cv2.namedWindow("img_external",cv2.WINDOW_NORMAL)
cv2.imshow("img_external",img_external)
cv2.waitKey(0)