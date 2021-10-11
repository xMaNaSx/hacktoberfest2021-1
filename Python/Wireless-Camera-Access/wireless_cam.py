import numpy as np
import cv2
import requests


# in url put "your url"/shot.jpg from IP Webcam
url = r"http://192.168.0.104:8080/shot.jpg"
while True:
    online_vid = requests.get(url)
    online_vid_arr = np.array(bytearray(online_vid.content), dtype=np.uint8)
    online_img = cv2.imdecode(online_vid_arr, -1)

    img = online_img
    cv2.imshow('image_window', img)

    if cv2.waitKey(1) & 0xFF == 27:
        break

cv2.destroyAllWindows()
