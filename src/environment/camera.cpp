
#include "camera.h"
/**
 * Computes the center of the screen
 * @return the center of the screen
 */
Point3D Camera::getScreenCenter() {
    return position + screenDistance * reference.i ;
}

/**
 * Computes the top left corner of the screen
 * @return the top left corner of the screen
 */
Point3D Camera::getTopLeftCorner() {
    return getScreenCenter() + (screenHeight / 2) * reference.j - (screenWidth / 2) * reference.k ;
}

/**
 * Computes the top right corner of the screen
 * @return the top right corner of the screen
 */
Point3D Camera::getTopRightCorner() {
    return getScreenCenter() + (screenHeight / 2) * reference.j + (screenWidth / 2) * reference.k ;
}

/**
 * Computes the bottom left corner of the screen
 * @return the bottom left corner of the screen
 */
Point3D Camera::getBottomLeftCorner() {
    return getScreenCenter() - (screenHeight / 2) * reference.j - (screenWidth / 2) * reference.k ;
}

/**
 * Computes the bottom right corner of the screen
 * @return the bottom right corner of the screen
 */
Point3D Camera::getBottomRightCorner() {
    return getScreenCenter() - (screenHeight / 2) * reference.j + (screenWidth / 2) * reference.k ;
}
