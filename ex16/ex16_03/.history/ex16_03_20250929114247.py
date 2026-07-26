import cv2 as cv
import numpy as np

def main():
    img_src = cv.imread(cv.samples.findFile("leaves.jpg"))
    if img_src is None:
        print("Could not find the image!")
        exit(0)
    img_gray = cv.cvtColor(img_src, cv.COLOR_BGR2GRAY)
    img_crop = img_gray[150:550, 700:1200]

    img_edge = cv.Canny(img_crop, 100, 200)
        
    cv.imshow("Original Image", img_src[150:550, 700:1200])
    cv.imshow("Canny Image", img_edge)
    cv.waitKey(0)
    cv.destroyAllWindows()  

if __name__ == "__main__":
    main()