#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

/* @ function main */
int main( int argc, char** argv )
{
    // Read an image
    cv::Mat image = cv::imread("irene.jpg", 1 );
    cv::Mat image_blur;
 
    // Gaussian blur
    GaussianBlur( image, image_blur, Size( 9, 9 ), 2.0, 2.0 );
 
    // creates window
    cv::namedWindow( "Image Original", 1 );
    cv::namedWindow( "Image Gaussian Blurred", 1 );
 
    // show stuff
    cv::imshow( "Image Original", image );
    cv::imshow( "Image Gaussian Blurred", image_blur );
 
    // Wait until user press some key
    cv::waitKey();
 
    return 0;
}


