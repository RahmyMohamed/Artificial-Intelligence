import cv2

img=cv2.imread("image1.png")
cv2.imwrite("sampleimage.jpg" ,img)
cv2.destroyAllWindows()
