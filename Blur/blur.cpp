#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc,char **argv)
{
	Mat img = imread(argv[1],1);
	Mat blur_image;
	blur(img,blur_image,Size(50,50));

	imshow("blur_image",blur_image);
	waitKey(0);

}
