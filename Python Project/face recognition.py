Python 3.7.8 (tags/v3.7.8:4b47a5b6ba, Jun 28 2020, 08:53:46) [MSC v.1916 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> import urllib.request #to access url
import cv2 
import numpy as np
import imutils

url='http://192.168.8.153:8080/shot.jpg'
while True:
    imgPath = urllib.request.urlopen(url)
    imgNp = np.array(bytearray(imgPath.read()), dtype=np.uint8)
    frame = cv2.imdecode(imgNp, -1)
    
    frame = imutils.resize(frame, width=450)
    cv2.imshow("CameraFeed",frame)
    if ord('q') ==  cv2.waitKey(1):
        exit(0)