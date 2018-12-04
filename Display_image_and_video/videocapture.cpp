#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc,char **argv)
{

//	VideoCapture video(0); //o for webcam
//	VideoCapture video(1); //1 for USB camera device.
	VideoCapture video(argv[1]); //Input from the command line (Any stored videos or IP camera address.)
	if(!video.isOpened())
		cout<<"Error ,vodeo can't be loaded"<<endl;

	double fps=video.get(CV_CAP_PROP_FPS);
	cout<<"FPS"<<fps<<endl;
	Mat img; 

	for(;;)
	{
		//Mat img(640,480, CV_8UC1, Scalar(70));  creating the empty model image
		
		bool success=video.read(img);
		if(!success)
			break;

		imshow("video",img);
		if(waitKey(3)==27)

			break;
	}




}
