import cv2 as cv
import numpy as np

def main():
    img_src = cv.imread(cv.samples.findFile("leaves.jpg"))
    roi = (700, 150, 500, 400)    
    if img_src is None:
        print("Could not find the image!")
        exit(0)
    img_gray = cv.cvtColor(img_src, cv.COLOR_BGR2GRAY)
    img_crop = img_gray[roi[1]:roi[1]+roi[3], roi[0]:roi[0]+roi[2]]

    img_edge = cv.Canny(img_crop, 50, 150)

    cv.imshow("Original Image", img_src[roi[1]:roi[1]+roi[3], roi[0]:roi[0]+roi[2]])
    cv.imshow("Canny Image", img_edge)
    cv.waitKey(0)
    cv.destroyAllWindows()  

if __name__ == "__main__":
    main()