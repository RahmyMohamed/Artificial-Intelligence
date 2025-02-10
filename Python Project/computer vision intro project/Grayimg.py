import cv2

img= cv2.imread("image1.png")

grayimg=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

cv2.imwrite("Gray.png", grayimg)

cv2.destroyAllWindows()
