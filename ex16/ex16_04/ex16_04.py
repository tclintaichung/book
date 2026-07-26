import cv2 as cv
import numpy as np

def main():
    img_src = cv.imread(cv.samples.findFile("myShapes.jpg"))
    if img_src is None:
        print("Could not find the image!")
        exit(0)
    img_gray = cv.cvtColor(img_src, cv.COLOR_BGR2GRAY)
    ret, img_binary = cv.threshold(img_gray, 20, 255, cv.THRESH_BINARY)
    
    contours, _ = cv.findContours(img_binary, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE) 
    for index, contour in enumerate(contours):
        area = cv.contourArea(contour)
        print(f'Area of shape {index}: {area}')
    cv.imshow("Original Image", img_src)
    cv.imshow("Binary Image", img_binary)
    cv.waitKey(0)
    cv.destroyAllWindows()  

if __name__ == "__main__":
    main()