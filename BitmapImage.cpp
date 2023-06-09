#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(1), depth(0){
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if ((fileExt == "jpg")||(fileExt == "png")||(fileExt == "bmp")){
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
bool save(std::string name){
    return true;
}
