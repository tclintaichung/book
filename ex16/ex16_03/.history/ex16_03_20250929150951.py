import cv2 as cv
import numpy as np
from matplotlib import pyplot as plt

def main():
    img_src = cv.imread(cv.samples.findFile("leaves.jpg"))
    roi = (700, 150, 500, 400)  # Region of Interest: x, y, width, height
    if img_src is None:
        print("Could not find the image!")
        exit(0)
    img_gray = cv.cvtColor(img_src, cv.COLOR_BGR2GRAY)
    img_crop = img_gray[roi[1]:roi[1]+roi[3], roi[0]:roi[0]+roi[2]]
    myHistogram(img_src[roi[1]:roi[1]+roi[3], roi[0]:roi[0]+roi[2]])
    img_edge = cv.Canny(img_crop, 50, 150)

    cv.imshow("Original Image", img_src[roi[1]:roi[1]+roi[3], roi[0]:roi[0]+roi[2]])
    cv.imshow("Canny Image", img_edge)
    cv.waitKey(0)
    cv.destroyAllWindows()  

def myHistogram(image):
    color = ('b','g','r')
    for i,col in enumerate(color):
        histr = cv.calcHist([image],[i],None,[256],[0,256])
        plt.plot(histr,color = col)
        plt.xlim([0,256])
    plt.show()

if __name__ == "__main__":
    main()