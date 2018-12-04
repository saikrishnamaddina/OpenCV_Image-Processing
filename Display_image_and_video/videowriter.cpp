#include  <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int c,char **argv)
{

 	//Opening the video
	VideoCapture cap("1.mp4");

	VideoWriter writer;

   //Getting the width and height of video frames.
    int frame_width=   cap.get(CV_CAP_PROP_FRAME_WIDTH);
    int frame_height=   cap.get(CV_CAP_PROP_FRAME_HEIGHT);

    //Creating the recording file with codec information , FPS,width,height and name of the file.
	writer.open("example.avi",CV_FOURCC('M','J','P','G'),20,Size(frame_width,frame_height),1);

	for(;;)
	{
		Mat frame;

		//Reading the continuous frames from the videocapture
		bool success=cap.read(frame);
		if(!success)
			break;
		//Writing the each frame into the writer object that makes the continuous video
		writer.write(frame);
		imshow("video",frame);
		if(waitKey(30)==27)

			break;
	}
}
