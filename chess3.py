import cv2
import numpy as np

font = cv2.FONT_HERSHEY_SCRIPT_SIMPLEX

character = []
for k in range(0, 8):
    character.append(('H' + str(k + 1)))
    character.append(('G' + str(k + 1)))
    character.append(('F' + str(k + 1)))
    character.append(('E' + str(k + 1)))
    character.append(('D' + str(k + 1)))
    character.append(('C' + str(k + 1)))
    character.append(('B' + str(k + 1)))
    character.append(('A' + str(k + 1)))


def gray(image):
    imggray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    return imggray


def threshold(image):
    grayimg = gray(image)
    # _, thresholdimg = cv2.threshold(grayimg, 150, 200, cv2.THRESH_BINARY)
    adaptive = cv2.adaptiveThreshold(grayimg, 200, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 69, 1)
    return adaptive


def imgshow(image):
    cv2.imshow('image', cv2.resize(image, (640, 480)))
    cv2.waitKey(0)
    cv2.destroyAllWindows()


def canny(image):
    cannyimg = cv2.Canny(image, 100, 200, None, 3)
    return cannyimg


def contours(image):
    image = threshold(image)
    _, contoursimg, _ = cv2.findContours(image, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)
    c = max(contoursimg, key=cv2.contourArea)

    # draw = cv2.drawContours(img, c, -1, (255), 2)

    x, y, w, h = cv2.boundingRect(c)

    cv2.rectangle(image, (x, y), (x + w, y + h), (0, 255, 0), 2)

    return x, y, w, h


def masked(image, x1, y1, x2, y2):
    height, width, depth = image.shape
    circle_img = np.zeros((height, width), np.uint8)
    pts = np.array([[x1], [y1], [x2], [y2]], np.int32)
    # cv2.rectangle(circle_img, (x[0], y[1]), ( w[0],h[0]), 280, -1)
    cv2.polylines(circle_img, [pts], True, (0, 255, 255), 1)

    cv2.fillPoly(circle_img, [pts], 255)
    masked_data = cv2.bitwise_and(image, image, mask=circle_img)

    return masked_data


# def hough_lines(image):
#     image = masked(image)
#     canny = cv2.Canny(image, 100, 200, None, 3)
#     bgr = cv2.cvtColor(canny, cv2.COLOR_GRAY2BGR)
#     lines = cv2.HoughLines(canny, 1, np.pi / 90, 110, None, 0, 0)
#
#     if lines is not None:
#         for i in range(0, len(lines)):
#             rho = lines[i][0][0]
#             theta = lines[i][0][1]
#
#             a = math.cos(theta)
#             b = math.sin(theta)
#             x0 = a * rho
#             y0 = b * rho
#
#             pt1 = (int(x0 + 1000 * (-b)), int(y0 + 1000 * a))
#             pt2 = (int(x0 - 1000 * (-b)), int(y0 - 1000 * a))
#             hough = cv2.line(image, pt1, pt2, (0, 0, 255), 3, cv2.LINE_AA)
#
#     return hough


# def video():
#     cap = cv2.VideoCapture(0)
#     while True:
#         _, frame = cap.read()
#         img = points(frame)
#         cv2.imshow('frame', img)
#
#         if cv2.waitKey(1) & 0xFF == ord('q'):
#             break
#     return frame


# def chessboard(image):
#     criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 30, 0.001)
#
#     grey = gray(image)
#
#     ret, chess = cv2.findChessboardCorners(grey, (7, 7), None, cv2.ADAPTIVE_THRESH_GAUSSIAN_C)
#     draw = cv2.drawChessboardCorners(img, (7, 7), chess, ret)
#
#     if ret == True:
#         corners = cv2.cornerSubPix(grey, chess, (10, 10), (-1, -1), criteria)
#
#     cv2.imshow('deneme', image)
#     cv2.waitKey(0)
#     return image


def points():
    # cap = cv2.VideoCapture('http://192.168.1.1:8080/video')
    cap = cv2.VideoCapture(2)
    detectboard = 0
    listp = []
    listx = []
    listy = []
    listxy = []

    # draw = cv2.drawChessboardCorners(img, (7, 7), chess, ret)
    while True:

        _, image = cap.read()
        image = cv2.resize(image, (640, 400))
        grey = gray(image)

        criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 30, 0.001)

        ret, chess = cv2.findChessboardCorners(grey, (7, 7), None)

        if ret is True and detectboard == 0:
            detectboard = detectboard + 1

            corners = cv2.cornerSubPix(grey, chess, (10, 10), (-1, -1), criteria)
            for corner in corners:
                a = corner.ravel()
                listp.append(a)

            for i in range(0, len(listp)):
                listx.append(int(float(listp[i][0])))
                listy.append(int(float(listp[i][1])))

            listxy.append([listx[6] + (listx[6] - listx[12]), listy[6] - (listy[12] - listy[6])])
            listxy.append([listx[5] + (listx[5] - listx[11]), listy[5] - (listy[11] - listy[5])])
            listxy.append([listx[4] + (listx[4] - listx[10]), listy[4] - (listy[10] - listy[4])])
            listxy.append([listx[5] - (listx[13] - listx[5]), listy[5] - (listy[13] - listy[5])])
            listxy.append([listx[4] - (listx[12] - listx[4]), listy[4] - (listy[12] - listy[4])])
            listxy.append([listx[3] - (listx[11] - listx[3]), listy[3] - (listy[11] - listy[3])])
            listxy.append([listx[2] - (listx[10] - listx[2]), listy[2] - (listy[10] - listy[2])])
            listxy.append([listx[1] - (listx[9] - listx[1]), listy[1] - (listy[9] - listy[1])])
            listxy.append([listx[0] - (listx[8] - listx[0]), listy[0] - (listy[8] - listy[0])])

            listxy.append([listx[6] + (listx[6] - listx[5]), listy[6] + (listy[6] - listy[5])])
            listxy.append([listx[6], listy[6]])
            listxy.append([listx[5], listy[5]])
            listxy.append([listx[4], listy[4]])
            listxy.append([listx[3], listy[3]])
            listxy.append([listx[2], listy[2]])
            listxy.append([listx[1], listy[1]])
            listxy.append([listx[0], listy[0]])
            listxy.append([listx[0] - (listx[1] - listx[0]), listy[0] - (listy[1] - listy[0])])

            listxy.append([listx[13] + (listx[13] - listx[12]), listy[13] + (listy[13] - listy[12])])
            listxy.append([listx[13], listy[13]])
            listxy.append([listx[12], listy[12]])
            listxy.append([listx[11], listy[11]])
            listxy.append([listx[10], listy[10]])
            listxy.append([listx[9], listy[9]])
            listxy.append([listx[8], listy[8]])
            listxy.append([listx[7], listy[7]])
            listxy.append([listx[7] - (listx[8] - listx[7]), listy[7] - (listy[8] - listy[7])])

            listxy.append([listx[20] + (listx[20] - listx[19]), listy[20] + (listy[20] - listy[19])])
            listxy.append([listx[20], listy[20]])
            listxy.append([listx[19], listy[19]])
            listxy.append([listx[18], listy[18]])
            listxy.append([listx[17], listy[17]])
            listxy.append([listx[16], listy[16]])
            listxy.append([listx[15], listy[15]])
            listxy.append([listx[14], listy[14]])
            listxy.append([listx[14] - (listx[15] - listx[14]), listy[14] - (listy[15] - listy[14])])

            listxy.append([listx[27] + (listx[27] - listx[26]), listy[27] + (listy[27] - listy[26])])
            listxy.append([listx[27], listy[27]])
            listxy.append([listx[26], listy[26]])
            listxy.append([listx[25], listy[25]])
            listxy.append([listx[24], listy[24]])
            listxy.append([listx[23], listy[23]])
            listxy.append([listx[22], listy[22]])
            listxy.append([listx[21], listy[21]])
            listxy.append([listx[21] - (listx[22] - listx[21]), listy[21] - (listy[22] - listy[21])])

            listxy.append([listx[34] + (listx[34] - listx[33]), listy[34] + (listy[34] - listy[33])])
            listxy.append([listx[34], listy[34]])
            listxy.append([listx[33], listy[33]])
            listxy.append([listx[32], listy[32]])
            listxy.append([listx[31], listy[31]])
            listxy.append([listx[30], listy[30]])
            listxy.append([listx[29], listy[29]])
            listxy.append([listx[28], listy[28]])
            listxy.append([listx[28] - (listx[29] - listx[28]), listy[28] - (listy[29] - listy[28])])

            listxy.append([listx[41] + (listx[41] - listx[40]), listy[41] + (listy[41] - listy[40])])
            listxy.append([listx[41], listy[41]])
            listxy.append([listx[40], listy[40]])
            listxy.append([listx[39], listy[39]])
            listxy.append([listx[38], listy[38]])
            listxy.append([listx[37], listy[37]])
            listxy.append([listx[36], listy[36]])
            listxy.append([listx[35], listy[35]])
            listxy.append([listx[35] - (listx[36] - listx[35]), listy[35] - (listy[36] - listy[35])])

            listxy.append([listx[48] + (listx[48] - listx[47]), listy[48] + (listy[48] - listy[47])])
            listxy.append([listx[48], listy[48]])
            listxy.append([listx[47], listy[47]])
            listxy.append([listx[46], listy[46]])
            listxy.append([listx[45], listy[45]])
            listxy.append([listx[44], listy[44]])
            listxy.append([listx[43], listy[43]])
            listxy.append([listx[42], listy[42]])
            listxy.append([listx[42] - (listx[43] - listx[42]), listy[42] - (listy[43] - listy[42])])

            listxy.append([listx[48] + (listx[48] - listx[40]), listy[48] + (listy[48] - listy[40])])
            listxy.append([listx[47] + (listx[47] - listx[39]), listy[47] + (listy[47] - listy[39])])
            listxy.append([listx[46] + (listx[46] - listx[38]), listy[46] + (listy[46] - listy[38])])

            listxy.append([listx[47] - (listx[41] - listx[47]), listy[47] - (listy[41] - listy[47])])
            listxy.append([listx[46] - (listx[40] - listx[46]), listy[46] - (listy[40] - listy[46])])
            listxy.append([listx[45] - (listx[39] - listx[45]), listy[45] - (listy[39] - listy[45])])
            listxy.append([listx[44] - (listx[38] - listx[44]), listy[44] - (listy[38] - listy[44])])
            listxy.append([listx[43] - (listx[37] - listx[43]), listy[43] - (listy[37] - listy[43])])
            listxy.append([listx[42] - (listx[36] - listx[42]), listy[42] - (listy[36] - listy[42])])

            loc = listxy
            locmid = []

            for i in range(0, len(listxy) - 10):
                if i == 8 or i == 17 or i == 26 or i == 35 or i == 44 or i == 53 or i == 62 or i == 71:
                    pass
                else:
                    x1 = int(float((loc[i][0] + loc[i + 10][0]) / 2))
                    y1 = int(float((loc[i][1] + loc[i + 10][1]) / 2))
                    locmid.append([x1, y1])

            # temp1 = cv2.imread('/root/Desktop/pawn/bpawn.png',0)
            # temp2 = cv2.imread('/root/Desktop/pawn/bpawn2.png', 0)
            # temp3 = cv2.imread('/root/Desktop/pawn/wpawn.png', 0)
            # temp_gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
            #
            # w, h = temp1.shape[::-1]
            # w1, h1 = temp2.shape[::-1]
            # w2, h2 = temp3.shape[::-1]
            #
            # res = cv2.matchTemplate(temp_gray, temp1, cv2.TM_CCOEFF_NORMED)
            # res1 = cv2.matchTemplate(temp_gray, temp2, cv2.TM_CCOEFF_NORMED)
            # res2 = cv2.matchTemplate(temp_gray, temp3, cv2.TM_CCOEFF_NORMED)
            #
            # threshold = 0.80
            # threshold1 = 0.90
            # loc = np.where(res > threshold)
            # loc1 = np.where(res1 > threshold)
            # loc2 = np.where(res2 > threshold1)
            #
            #
            # for pt in zip(*loc[::-1]):
            #     cv2.rectangle(image, pt, (pt[0] + w, pt[1] + h), (255, 255, 0))
            #     cv2.putText(image, "bpawn", (pt[0],pt[1]), 1, 0.4, (0, 0, 255), 1)
            #
            # for pt in zip(*l[140oc1[::-1]):
            #     cv2.rectangle(image, pt, (pt[0] + w1, pt[1] + h1), (255, 255, 0))
            #     cv2.putText(image, "bpawn", (pt[0],pt[1]), 1, 0.4, (0, 0, 255), 1)
            # for pt in zip(*loc2[::-1]):
            #     cv2.rectangle(image, pt, (pt[0] + w2, pt[1] + h2), (255, 255, 0))
            #     cv2.putText(image, "wpawn", (pt[0],    pt[1]), 1, 0.4, (0, 0, 255), 1)
            # draw = cv2.drawChessboardCorners(image, (7, 7), chess, ret)
            for i in range(0, len(locmid)):
                cv2.putText(image, character[i], (locmid[i][0], locmid[i][1]), 1, 1, (0, 0, 255), 1)

        # for i in range(0, len(listxy)):
        #     cv2.circle(image, (listxy[i][0], listxy[i][1]), 3, (255, 0, 0), -1)
        coordinate = []

        if detectboard == 1:
            masked(image, listxy[80], listxy[72], listxy[0], listxy[8])
            # detect = piecesDetect.detect(masked_data, listxy, character)
            coordinate.append(listxy[80])
            coordinate.append(listxy[72])
            coordinate.append(listxy[0])
            coordinate.append(listxy[8])

            cap.release()

            cv2.destroyAllWindows()
            return coordinate, listxy

        else:
            # masked_data = masked(image, listxy[80], listxy[72], listxy[0], listxy[8])

            cv2.imshow('window', image)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

            # return masked_data+++++++++++++++++++

    cap.release()

    cv2.destroyAllWindows()


points()
