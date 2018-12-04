#videocapture.py
import cv2
import sys

#open the video into the capture object...........
#capture = cv2.videocapture(sys.argv[1]) #input from command line
capture = cv2.VideoCapture(0)
width = int(capture.get(3))
height = int(capture.get(4))

while(True):
	#Reading the continuous frames
	_,frame = capture.read()

	if frame.any():
		print("reading the frame from videos....")
	else:
		print("Error,while reading the frames from camera...........")

	cv2.namedWindow("video_frames",cv2.WINDOW_NORMAL)
	cv2.imshow("video_frames",frame)
	cv2.waitKey(2)
