#include  <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int c,char **argv)
{

	VideoCapture cap("1.mp4");

	VideoWriter writer;

	writer.open(argv[1],CV_FOURCC('H','2','6','4'),10,Size(640,480),1);

	for(;;)
	{
		Mat frame;

		bool success=cap.read(frame);
		if(!success)
			break;
		writer.write(frame);
		imshow("video",frame);
		if(waitKey(30)==27)

			break;
	}
}
