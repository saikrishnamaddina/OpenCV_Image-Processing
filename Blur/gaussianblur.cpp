#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc,char **argv)
{
	Mat img=imread("input.jpg",1);  //use yourinput image in first parameter of imread
	Mat blur_image;
	GaussianBlur(img,blur_image,Size(5,5),1);
	imshow("gaussianblur",blur_image);
	waitKey(0);

}


