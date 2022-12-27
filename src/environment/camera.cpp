
#include "camera.h"

Point3D Camera::getScreenCenter() {
    return position + screenDistance * reference.i ;
}

Point3D Camera::getTopLeftCorner() {
    return getScreenCenter() + (ScreenHeight / 2) * reference.j - (screenWidth / 2) * reference.k ;
}

Point3D Camera::getTopRightCorner() {
    return getScreenCenter() + (ScreenHeight / 2) * reference.j + (screenWidth / 2) * reference.k ;
}

Point3D Camera::getBottomLeftCorner() {
    return getScreenCenter() - (ScreenHeight / 2) * reference.j - (screenWidth / 2) * reference.k ;
}

Point3D Camera::getBottomRightCorner() {
    return getScreenCenter() - (ScreenHeight / 2) * reference.j + (screenWidth / 2) * reference.k ;
}
