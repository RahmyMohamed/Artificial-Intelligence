import cv2 #import opencv lib
import imutils # import imutils lib

img= cv2.imread("image1.png") #raed image

sizeimg=imutils.resize(img,width=500,height=700) #resize image

cv2.imwrite("500px.png",sizeimg) #write image

cv2.destroyAllWindows() #close comand
