import cv2 as cv
import numpy as np

def main():
    img_src = cv.imread(cv.samples.findFile("myShapes.jpg"))
    if img_src is None:
        print("Could not find the image!")
        exit(0)
    img_gray = cv.cvtColor(img_src, cv.COLOR_BGR2GRAY)

    img_edge = cv.Canny(img_gray, 50, 150)
        
    cv.imshow("Original image", img_src)
    cv.imshow("Gray image", img_gray)
    cv.imshow("Edge image", img_edge)
    cv.waitKey(0)
    cv.destroyAllWindows()  

if __name__ == "__main__":
    main()