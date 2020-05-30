
# tratamiento de imagenes
# se hace paralelo con Mathematica y se comparan los resultados

import cv2
import numpy as np

print(np.sin(0.5))


# Cargamos la imagen
img = cv2.imread("C:\\Users\\Germán\\Source\\repos\\POO\\Imagenes\\Lenna.jpg")

# mostrar la imagen en una ventana
cv2.imshow('Imagen de Lenna', img)

# esperar hasta que se presiona una tecla
cv2.waitKey(0)

# cerramos ventana
cv2.destroyAllWindows()