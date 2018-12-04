#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc,char **argv)
{
	//Reading the image from the Disk.
	Mat img=imread(argv[1],1);  //command line input
	
	Mat blur_image;
	
	GaussianBlur(img,blur_image,Size(5,5),1);
	
	namedWindow("gaussianblur",WINDOW_NORMAL)
	imshow("gaussianblur",blur_image);
	waitKey(0);

}


