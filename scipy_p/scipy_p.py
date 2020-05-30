# Ejemplode tratamiento de imagenes


import cv2

img = cv2.imread("Lenna.jpg")

edge_img = cv2.Canny(img,100,200)




cv2.imshow('Original Image', img) # imagen original

cv2.imshow("Detected Edges", edge_img) # imagen con los contornos





cv2.waitKey(0)