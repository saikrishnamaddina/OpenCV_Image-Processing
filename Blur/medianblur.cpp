#include<opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
 
int main( int argc, char** argv )
 {
 
     Mat src = imread( argv[1], 1 );
     Mat dst;
 
     //Apply median filter
     medianBlur ( src, dst, 11 );
     imshow("source", src);
     imshow("result", dst);  
 
     waitKey(0);
     return 0;
 }
