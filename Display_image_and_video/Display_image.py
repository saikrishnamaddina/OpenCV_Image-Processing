import cv2
import sys

#Reading the image and image path will take from the command line
image = cv2.imread(sys.argv[1],1)

if image.any():
	print("Read the image successfully.............")
else:
	print("Error , Please provide the correct image")

#prints the size and channels information.............
print("Size of the image : ",image.shape)
cv2.namedWindow("Display_image",cv2.WINDOW_NORMAL)
cv2.imshow("Display_image",image)
cv2.waitKey(0)