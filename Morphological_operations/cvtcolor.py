import cv2
import sys

image = cv2.imread(sys.argv[1],1)

gray_color = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

cv2.namedWindow("gray_color",cv2.WINDOW_NORMAL)
cv2.imshow("gray_color",gray_color)
cv2.waitKey(0)