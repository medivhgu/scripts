#!/usr/bin/python2

import numpy as np
import cv2
import time
import sys

def read_camera(camera_id):
    videoCapture = cv2.VideoCapture(camera_id)
    videoCapture.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
    videoCapture.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)

    success, frame = videoCapture.read()
    while success:
        success, frame = videoCapture.read()

        cv2.imshow("read_camera", frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    print("Maybe there is no camera in your computer!")


if __name__ == '__main__':
    camera_id = 0;
    if (len(sys.argv) >= 2):
        camera_id = int(sys.argv[1])
    read_camera(camera_id)
