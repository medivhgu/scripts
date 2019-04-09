#!/usr/bin/python2

import numpy as np
import cv2
import time
import sys

def read_image(image_path):
    img = cv2.imread(image_path)
    while type(img) != type(None):
        cv2.imshow("read_image", img)

        if cv2.waitKey(10) & 0xFF == ord('q'):
            break
        img = cv2.imread(image_path)
    return True


if __name__ == '__main__':
    image_path = "test.jpg"
    if (len(sys.argv) >= 2):
        image_path = int(sys.argv[1])
    read_image(image_path)
