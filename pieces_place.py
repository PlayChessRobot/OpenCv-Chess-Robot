import random
import time
import keyboard
import arduino_python
import chess3
import sfish
import stockfish
from Chessnut import Game
from face_classification.src.video_emotion_color_demo import *

# capturing video through webcam
cap = cv2.VideoCapture("http://192.168.1.1:8080/video")

character = []
for c in range(0, 8):
    character.append(('a' + str(c + 1)))
    character.append(('b' + str(c + 1)))
    character.append(('c' + str(c + 1)))
    character.append(('d' + str(c + 1)))
    character.append(('e' + str(c + 1)))
    character.append(('f' + str(c + 1)))
    character.append(('g' + str(c + 1)))
    character.append(('h' + str(c + 1)))


def key_press(key):
    if key.name == 'a':
        pos_list = sfish.ret_pos()
        pos_list.pop()
        pos_list.pop()
        print(pos_list)


def white_rook_detect(location_list, white_find_rook):
    for i in range(0, len(location_list)):
        if str.find(location_list[i], 'e1') != -1:
            white_find_rook = white_find_rook + 1
        if location_list[i] == 'e1g1' and white_find_rook == 1:
            arduino_python.push(
                '-redL-' + '-e1-' + '-fully-' + '-g1_down-' + '-empty-' + '-h1-' + '-fully-' + '-f1_down-' + '-empty-')
            # print(location_list[i])
            white_find_rook = 1
            rook_control = 1
            return white_find_rook, rook_control
        elif location_list[i] == 'e1c1' and white_find_rook == 1:
            arduino_python.push(
                '-redL-' + '-e1-' + '-fully-' + '-c1_down-' + '-empty-' + '-a1-' + '-fully-' + '-d1_down-' + '-empty-')
            # print('e1c1')
            white_find_rook = 1
            rook_control = 1
            return white_find_rook, rook_control
    rook_control = 0
    return white_find_rook, rook_control


def black_rook_detect(location_list, black_find_rook):
    for i in range(0, len(location_list)):
        if str.find(location_list[i], 'e8') != -1:
            black_find_rook = black_find_rook + 1
        if location_list[i] == 'e8g8' and black_find_rook == 1:
            arduino_python.push(
                '-redL-' + '-e8-' + '-fully-' + '-g8_down-' + '-empty-' + '-h8-' + '-fully-' + '-f8_down-' + '-empty-')
            # print(location_list[i])
            black_find_rook = 1
            rook_control = 1
            return black_find_rook, rook_control
        elif location_list[i] == 'e8c8' and black_find_rook == 1:
            arduino_python.push(
                '-redL-' + '-e8-' + '-fully-' + '-c8_down-' + '-empty-' + '-a8-' + '-fully-' + '-d8_down-' + '-empty-')
            # print('e8c8')
            black_find_rook = 1
            rook_control = 1
            return black_find_rook, rook_control
    rook_control = 0
    return black_find_rook, rook_control


def control(listxy, place, pieces):
    for i in range(0, 71):

        if i == 8 or i == 17 or i == 26 or i == 35 or i == 44 or i == 53 or i == 62 or i == 71:
            pass
        else:

            for j in range(0, len(pieces)):
                if (listxy[i][0] >= pieces[j][0] >= listxy[i + 10][0] and listxy[i][1] >= pieces[j][
                    1] >=
                        listxy[i + 10][1] or listxy[i + 1][0] >= pieces[j][0] >= listxy[i + 9][0] and
                        listxy[i + 1][1] <= pieces[j][1] <=
                        listxy[i + 9][1]):
                    if 0 <= i < 8:
                        place[i] = 1
                    elif 8 < i < 17:
                        place[i - 1] = 1
                    elif 17 < i < 26:
                        place[i - 2] = 1
                    elif 26 < i < 35:
                        place[i - 3] = 1
                    elif 35 < i < 44:
                        place[i - 4] = 1
                    elif 44 < i < 53:
                        place[i - 5] = 1
                    elif 53 < i < 62:
                        place[i - 6] = 1
                    elif 62 < i < 71:
                        place[i - 7] = 1


def view():
    keyboard.on_press(key_press)

    arduino_python.connection()
    chessgame = Game()

    coordinate, listxy = chess3.points()

    # _,  = chess3.poinxts()
    # cap = cv2.VideoCapture(2)
    diff = []
    diff1 = []
    old_place = np.zeros((64,), dtype=np.int)
    place = np.zeros((64,), dtype=np.int)
    place1 = np.zeros((64,), dtype=np.int)
    aligment = 0
    legal_move = 0
    white_check = 0
    black_check = 0
    emotion_time = time.time()
    timer_a = time.time()
    change = 0
    # count = 0
    black_start = 0
    white_start = 0
    started = 0
    robot_time = time.time()
    robot = 0
    rook = 0
    white_find_rook = 0
    black_find_rook = 0
    rook_control = 0
    stock_fish = stockfish.Stockfish()
    contempt_value = 0
    contempt_factor = {
        'Contempt': contempt_value
    }
    while True:

        # Yuz tanima ve contempt factor degeri ayarlama
        face_emotions = emotions()

        if time.time() - emotion_time > 10:
            emotion_time = time.time()
            if face_emotions == "sad":
                contempt_value = random.randrange(0, 20)
                contempt_factor.update(Contempt=contempt_value)
                stock_fish.__init__(param=contempt_factor)
            elif face_emotions == "fear":
                contempt_value = random.randrange(20, 40)
                contempt_factor.update(Contempt=contempt_value)
                stock_fish.__init__(param=contempt_factor)
            elif face_emotions == "neutral":
                contempt_value = random.randrange(40, 60)
                contempt_factor.update(Contempt=contempt_value)
                stock_fish.__init__(param=contempt_factor)
            elif face_emotions == "angry":
                contempt_value = random.randrange(60, 80)
                contempt_factor.update(Contempt=contempt_value)
                stock_fish.__init__(param=contempt_factor)
            elif face_emotions == "happy":
                contempt_value = random.randrange(80, 100)
                contempt_factor.update(Contempt=contempt_value)
                stock_fish.__init__(param=contempt_factor)
            else:
                contempt_value = random.randrange(0, 100)
                contempt_factor.update(Contempt=contempt_value)
                stock_fish.__init__(param=contempt_factor)
            # print(face_emotions)
        _, img = cap.read()
        img = cv2.resize(img, (640, 400))

        masked = chess3.masked(img, coordinate[0], coordinate[1], coordinate[2], coordinate[3])
        red_pieces, blue_pieces, img1 = pieces_detect(masked)
        cv2.imshow("Pieces Place", img1)

        # Beyaz tas sayaci
        if white_start == 0:
            control(listxy, place, blue_pieces)

            check = 0
            for i in range(0, len(place)):
                if place[i] == 1:
                    check = check + 1
                    old_place[i] = place[i]
                    place[i] = 0

            if check == 16:
                black_start = 2
                white_start = 1
                print("Beyazlarsiniz")
            print(check)
        # Siyah tas sayaci
        if black_start == 0:
            control(listxy, place, red_pieces)

            check = 0

            for i in range(0, len(place)):
                if place[i] == 1:
                    check = check + 1
                    old_place[i] = place[i]
                    place[i] = 0
            # print(check)
            if check == 16:
                black_start = 1
                white_start = 2
                print("Siyahlarsiniz")
            print(check)
        # Siyah Tas Islemleri
        if black_start == 1:

            if white_check == 0:
                control(listxy, place, blue_pieces)

                check = 0

                for i in range(0, len(place)):
                    if place[i] == 1:
                        check = check + 1
                        old_place[i] = place[i]
                        place[i] = 0
                if check == 16:
                    white_check = 1

            if (started == 0) and white_check == 1:
                robot = 2
                robot_time = time.time()
                best_move, poslist = sfish.black_start_game()
                chessgame.apply_move(best_move)

                if old_place[character.index(best_move[2:], 0)] == 1:
                    arduino_python.push('-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                    arduino_python.push('-redL-')
                    robot_time = robot_time + 30
                else:
                    arduino_python.push('-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                    robot_time = robot_time + 30
                    arduino_python.push('-redL-')

                started = 1
            if robot == 2 and time.time() - robot_time > 0:
                robot_time = time.time()
                print("lutfen oynayin 1")

                arduino_python.push('-greenL-')

                robot = 0

            if (change == 0) and white_check == 1 and robot == 0:

                for i in range(0, 64):
                    place[i] = 0

                if aligment == 0:

                    control(listxy, place, red_pieces)
                    for i in range(0, 64):
                        old_place[i] = place[i]
                    aligment = 1

                control(listxy, place, red_pieces)

                for i in range(0, len(place)):

                    if place[i] != old_place[i]:
                        robot = 1
                        print("10 saniye icinde oyna")
                        arduino_python.push('-tenSec-')
                        timer_a = time.time()
                        change = 1
                        break
                    elif old_place.any() == place.any():
                        change = 0
                        robot = 0

            if time.time() - timer_a > 10 and change == 1 and started == 1 and robot == 1:
                robot = 0
                arduino_python.push('-greenL-')

                for i in range(0, 64):
                    place1[i] = 0

                control(listxy, place1, red_pieces)

                timer_a = time.time()
                # if (count == 0):
                #     for i in range(0, len(place1)):
                #         old_place[i] = place1[i]
                #         count = 1
                # count = 1
                # if count == 1:
                for i in range(0, len(place1)):
                    if place1[i] != old_place[i]:
                        diff.append(i)

                        if len(diff) == 2:

                            if old_place[i] == 0:
                                diff1.append(diff[0])
                                diff1.append(diff[1])

                            elif old_place[i] == 1:
                                diff1.append(diff[1])
                                diff1.append(diff[0])
                        elif len(diff) == 4 and rook == 0:

                            if old_place[i] == 0:
                                diff1.append(diff[0])
                                diff1.append(diff[1])

                            elif old_place[i] == 1:
                                diff1.append(diff[1])
                                diff1.append(diff[0])

                        old_place[i] = place1[i]

                if len(diff1) == 2:
                    robot = 3
                    robot_time = time.time()
                    legal_move = chessgame.apply_move(character[diff1[0]] + character[diff1[1]])
                    if legal_move == 0:
                        sfish.position(character[diff1[0]] + character[diff1[1]])
                        best_move, poslist = sfish.black_start_game()
                        chessgame.apply_move(best_move)

                        if white_find_rook == 0:
                            white_find_rook, rook_control = white_rook_detect(poslist, white_find_rook)
                            if rook_control == 1:
                                robot_time = robot_time + 60
                        try:
                            if old_place[character.index(best_move[2:], 0)] == 1 and rook_control == 0:

                                arduino_python.push(
                                    '-redL-' + '-' + best_move[2:] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:] + '_down-' + 'empty-')

                                robot_time = robot_time + 60

                            elif old_place[character.index(best_move[2:], 0)] == 0 and rook_control == 0:
                                arduino_python.push(
                                    '-redL-' + '-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                                robot_time = robot_time + 30
                        except ValueError:
                            if len(best_move) == 3:
                                arduino_python.push('-redL-' + '-' + best_move[0:1] + str(
                                    int(best_move[1:2]) - 1) + '-fully-' + best_move[
                                                                           0:2] + '_down-' + '-empty-')
                                robot_time = robot_time + 30
                            else:
                                arduino_python.push(
                                    '-redL-' + '-' + best_move[2:4] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:4] + '_down-' + 'empty-')
                                robot_time = robot_time + 60
                    elif legal_move == 1:
                        print("Yanlis Hamle Oynadiniz")
                        arduino_python.push('-illegal_move-')

                    diff1.clear()
                    rook_control = 0

                elif len(diff1) == 4 and character[diff1[0]] + character[diff1[1]] == 'e8f8' and rook == 0:
                    for i in range(0, 64):
                        place1[i] = 0

                    character[diff1[0]] = 'e8'
                    character[diff1[1]] = 'g8'
                    robot = 3
                    robot_time = time.time()
                    legal_move = chessgame.apply_move(character[diff1[0]] + character[diff1[1]])
                    if legal_move == 0:
                        sfish.position(character[diff1[0]] + character[diff1[1]])
                        best_move, poslist = sfish.black_start_game()
                        chessgame.apply_move(best_move)

                        character[diff1[0]] = 'e8'
                        character[diff1[1]] = 'f8'
                        if white_find_rook == 0:
                            white_find_rook, rook_control = white_rook_detect(poslist, white_find_rook)
                            if rook_control == 1:
                                robot_time = robot_time + 60
                        try:
                            if old_place[character.index(best_move[2:], 0)] == 1 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:] + '_down-' + 'empty-')
                                robot_time = robot_time + 60

                            elif old_place[character.index(best_move[2:], 0)] == 0 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                                robot_time = robot_time + 30
                        except ValueError:
                            if len(best_move) == 3:
                                arduino_python.push('-' + '-redL-' + best_move[0:1] + str(
                                    int(best_move[1:2]) - 1) + '-fully-' + best_move[
                                                                           0:2] + '_down-' + '-empty-')
                                robot_time = robot_time + 30
                            else:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:4] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:4] + '_down-' + 'empty-')
                                robot_time = robot_time + 60
                            robot_time = robot_time + 30
                    elif legal_move == 1:
                        arduino_python.push('-illegal_move-')
                        print("Yanlis Hamle Oynadiniz")

                    diff1.clear()
                    rook_control = 0
                    rook = 1

                elif len(diff1) == 4 and character[diff1[0]] + character[diff1[1]] == 'a8c8' and rook == 0:
                    for i in range(0, 64):
                        place1[i] = 0

                    character[diff1[0]] = 'e8'
                    character[diff1[1]] = 'c8'
                    robot = 3
                    robot_time = time.time()
                    legal_move = chessgame.apply_move(character[diff1[0]] + character[diff1[1]])
                    if legal_move == 0:
                        sfish.position(character[diff1[0]] + character[diff1[1]])
                        best_move, poslist = sfish.black_start_game()
                        chessgame.apply_move(best_move)
                        character[diff1[0]] = 'a8'
                        character[diff1[1]] = 'c8'
                        if white_find_rook == 0:
                            white_find_rook, rook_control = white_rook_detect(poslist, white_find_rook)
                            if rook_control == 1:
                                robot_time = robot_time + 60
                        try:
                            if old_place[character.index(best_move[2:], 0)] == 1 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:] + '_down-' + 'empty-')
                                robot_time = robot_time + 60

                            elif old_place[character.index(best_move[2:], 0)] == 0 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                                robot_time = robot_time + 30
                        except ValueError:
                            if len(best_move) == 3:
                                arduino_python.push('-' + '-redL-' + best_move[0:1] + str(
                                    int(best_move[1:2]) - 1) + '-fully-' + best_move[
                                                                           0:2] + '_down-' + '-empty-')
                                robot_time = robot_time + 30
                            else:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:4] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:4] + '_down-' + 'empty-')
                                robot_time = robot_time + 60
                    elif legal_move == 1:
                        arduino_python.push('-illegal_move-')
                        print("Yanlis Hamle Oynadiniz")
                    diff1.clear()
                    rook_control = 0
                    rook = 1

                # elif len(diff1) == 1:
                #     robot = 3
                change = 0
                diff.clear()
                diff1.clear()

            if robot == 3 and time.time() - robot_time > 0:
                print(time.time() - robot_time)
                robot_time = time.time()
                for i in range(0, 64):
                    place1[i] = 0
                control(listxy, place1, red_pieces)

                for i in range(0, len(place1)):
                    old_place[i] = place1[i]
                print("lutfen oynayin 2")
                if legal_move == 0:
                    arduino_python.push('-greenL-')
                elif legal_move == 1:
                    arduino_python.push('-illegal_move-')
                robot = 0
        # Beyaz Tas islemleri
        elif white_start == 1:

            if black_check == 0:
                control(listxy, place, red_pieces)

                check = 0

                for i in range(0, len(place)):
                    if place[i] == 1:
                        check = check + 1
                        old_place[i] = place[i]
                        place[i] = 0
                if check == 16:
                    black_check = 1

            if change == 0 and robot == 0 and black_check == 1:

                for i in range(0, 64):
                    place[i] = 0

                if aligment == 0:

                    control(listxy, place, blue_pieces)
                    for i in range(0, 64):
                        old_place[i] = place[i]
                    aligment = 1
                control(listxy, place, blue_pieces)

                for i in range(0, len(place)):

                    if place[i] != old_place[i]:
                        robot = 1
                        print("10 saniye icinde oyna")
                        arduino_python.push('-tenSec-')
                        timer_a = time.time()
                        change = 1

                        break
                    elif old_place.any() == place.any():
                        change = 0
                        robot = 0

            if time.time() - timer_a > 10 and change == 1 and robot == 1:
                arduino_python.push('-greenL-')
                robot = 0
                for i in range(0, 64):
                    place1[i] = 0

                control(listxy, place1, blue_pieces)

                timer_a = time.time()
                # if count == 2:
                #     for i in range(0, len(place1)):
                #         old_place[i] = place1[i]
                #         count = 1
                # count = 1
                # if count == 1:

                for i in range(0, len(place1)):

                    if place1[i] != old_place[i]:
                        diff.append(i)

                        if len(diff) == 2:

                            if old_place[i] == 0:
                                diff1.append(diff[0])
                                diff1.append(diff[1])

                            elif old_place[i] == 1:
                                diff1.append(diff[1])
                                diff1.append(diff[0])

                        elif len(diff) == 4 and rook == 0:

                            if old_place[i] == 0:
                                diff1.append(diff[0])
                                diff1.append(diff[1])

                            elif old_place[i] == 1:
                                diff1.append(diff[1])
                                diff1.append(diff[0])

                        old_place[i] = place1[i]

                if len(diff1) == 2:
                    robot = 3
                    robot_time = time.time()
                    legal_move = chessgame.apply_move(character[diff1[0]] + character[diff1[1]])
                    if legal_move == 0:
                        sfish.position(character[diff1[0]] + character[diff1[1]])
                        best_move, poslist = sfish.white_start_game()
                        chessgame.apply_move(best_move)
                        if black_find_rook == 0:
                            black_find_rook, rook_control = black_rook_detect(poslist, white_find_rook)
                            if rook_control == 1:
                                robot_time = robot_time + 60
                        try:
                            if old_place[character.index(best_move[2:], 0)] == 1 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:] + '_down-' + 'empty-')
                                print("geliyor")
                                robot_time = robot_time + 60

                            elif old_place[character.index(best_move[2:], 0)] == 0 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                                robot_time = robot_time + 30
                        except ValueError:
                            if len(best_move) == 3:
                                arduino_python.push('-' + '-redL-' + best_move[0:1] + str(
                                    int(best_move[1:2]) - 1) + '-fully-' + best_move[
                                                                           0:2] + '_down-' + '-empty-')
                                robot_time = robot_time + 30
                            else:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:4] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:4] + '_down-' + 'empty-')
                                robot_time = robot_time + 60
                    elif legal_move == 1:
                        arduino_python.push('-illegal_move-')
                        print("Yanlis Hamle Oynadiniz")
                    rook_control = 0
                    diff1.clear()

                elif len(diff1) == 4 and character[diff1[0]] + character[diff1[1]] == 'e1f1' and rook == 0:
                    for i in range(0, 64):
                        place1[i] = 0

                    character[diff1[0]] = 'e1'
                    character[diff1[1]] = 'g1'
                    robot = 3
                    robot_time = time.time()
                    legal_move = chessgame.apply_move(character[diff1[0]] + character[diff1[1]])
                    if legal_move == 0:
                        sfish.position(character[diff1[0]] + character[diff1[1]])
                        best_move, poslist = sfish.white_start_game()
                        chessgame.apply_move(best_move)
                        character[diff1[0]] = 'e1'
                        character[diff1[1]] = 'f1'
                        if black_find_rook == 0:
                            black_find_rook, rook_control = black_rook_detect(poslist, white_find_rook)
                            if rook_control == 1:
                                robot_time = robot_time + 60
                        try:
                            if old_place[character.index(best_move[2:], 0)] == 1 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:] + '_down-' + 'empty-')
                                robot_time = robot_time + 60

                            elif old_place[character.index(best_move[2:], 0)] == 0 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                                robot_time = robot_time + 30
                        except ValueError:
                            if len(best_move) == 3:
                                arduino_python.push('-' + '-redL-' + best_move[0:1] + str(
                                    int(best_move[1:2]) - 1) + '-fully-' + best_move[
                                                                           0:2] + '_down-' + '-empty-')
                                robot_time = robot_time + 30
                            else:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:4] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:4] + '_down-' + 'empty-')
                                robot_time = robot_time + 60
                    elif legal_move == 1:
                        arduino_python.push('-illegal_move-')
                        print("Yanlis Hamle Oynadiniz")
                    rook_control = 0
                    diff1.clear()
                    print("girdi")
                    rook = 1

                elif len(diff1) == 4 and character[diff1[0]] + character[diff1[1]] == 'a1c1' and rook == 0:
                    for i in range(0, 64):
                        place1[i] = 0

                    character[diff1[0]] = 'e1'
                    character[diff1[1]] = 'c1'
                    robot = 3
                    robot_time = time.time()
                    legal_move = chessgame.apply_move(character[diff1[0]] + character[diff1[1]])
                    if legal_move == 0:
                        sfish.position(character[diff1[0]] + character[diff1[1]])
                        best_move, poslist = sfish.white_start_game()
                        chessgame.apply_move(best_move)
                        character[diff1[0]] = 'a1'
                        character[diff1[1]] = 'c1'
                        if black_find_rook == 0:
                            black_find_rook, rook_control = black_rook_detect(poslist, black_find_rook)
                            if rook_control == 1:
                                robot_time = robot_time + 60
                        try:
                            if old_place[character.index(best_move[2:], 0)] == 1 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:] + '_down-' + 'empty-')
                                robot_time = robot_time + 60

                            elif old_place[character.index(best_move[2:], 0)] == 0 and rook_control == 0:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[:2] + '-fully-' + best_move[2:] + '_down-' + "empty-")
                                robot_time = robot_time + 30
                        except ValueError:
                            if len(best_move) == 3:
                                arduino_python.push('-' + '-redL-' + best_move[0:1] + str(
                                    int(best_move[1:2]) - 1) + '-fully-' + best_move[
                                                                           0:2] + '_down-' + '-empty-')
                                robot_time = robot_time + 30
                            else:
                                arduino_python.push(
                                    '-' + '-redL-' + best_move[2:4] + '-fully-' + 'out-' + 'empty-' +
                                    best_move[:2] + '-fully-' + best_move[2:4] + '_down-' + 'empty-')
                                robot_time = robot_time + 60

                    elif legal_move == 1:
                        arduino_python.push('-illegal_move-')
                        print("Yanlis Hamle Oynadiniz.")

                    rook_control = 0
                    diff1.clear()
                    rook = 1

                change = 0
                diff.clear()
                diff1.clear()
            if robot == 3 and time.time() - robot_time > 0 and black_start == 1:
                robot_time = time.time()
                for i in range(0, 64):
                    place1[i] = 0
                control(listxy, place1, red_pieces)

                for i in range(0, len(place1)):
                    old_place[i] = place1[i]
                print("lutfen oynayin 3")
                if legal_move == 0:
                    arduino_python.push('-greenL-')
                elif legal_move == 1:
                    arduino_python.push('-illegal_move-')
                robot = 0
            elif robot == 3 and time.time() - robot_time > 0 and white_start == 1:
                robot_time = time.time()
                for i in range(0, 64):
                    place1[i] = 0
                control(listxy, place1, blue_pieces)

                for i in range(0, len(place1)):
                    old_place[i] = place1[i]
                print("lutfen oynayin 4")
                if legal_move == 0:
                    arduino_python.push('-greenL-')
                elif legal_move == 1:
                    arduino_python.push('-illegal_move-')
                robot = 0

        # print(blue_pieces)
        if cv2.waitKey(10) & 0xFF == ord('q'):
            cap.release()
            cv2.destroyAllWindows()
            break


def pieces_detect(img):
    img = img
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

    red_pieces = []
    blue_pieces = []
    green_pieces = []

    # red_lower = np.array([0, 150, 20], np.uint8)  # golge degerler
    # red_upper = np.array([20, 255, 255], np.uint8)
    red_lower = np.array([150, 50, 50], np.uint8)
    red_upper = np.array([180, 255, 255], np.uint8)
    # #
    # blue_lower = np.array([100, 115, 115],  np.uint8) # Telefon Goruntusu
    # blue_upper = np.array([130, 230, 225], np.uint8)
    #
    blue_lower = np.array([100, 150, 150], np.uint8)  # Telefon Goruntusu
    blue_upper = np.array([130, 255, 255], np.uint8)

    # red_lower = np.array([160, 90, 90], np.uint8)
    # red_upper = np.array([180, 255, 255], np.uint8)

    # red_lower = np.array([150, 83, 83], np.uint8) ## Telefon Goruntusu
    # red_upper = np.array([180, 230, 230], np.uint8)

    # blue_lower = np.array([100, 130, 130], np.uint8)
    # blue_upper = np.array([130, 210, 210], np.uint8)

    green_lower = np.array([40, 90, 70], np.uint8)
    green_upper = np.array([80, 150, 150], np.uint8)

    red = cv2.inRange(hsv, red_lower, red_upper)
    blue = cv2.inRange(hsv, blue_lower, blue_upper)
    green = cv2.inRange(hsv, green_lower, green_upper)

    kernal = np.ones((2, 2), "uint8")

    red = cv2.dilate(red, kernal)
    # res = cv2.bitwise_and(img, img, mask=red)

    blue = cv2.dilate(blue, kernal)
    # res1 = cv2.bitwise_and(img, img, mask=blue)

    (contours, hierarchy) = cv2.findContours(red, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    for pic, contour in enumerate(contours):
        area = cv2.contourArea(contour)
        if area > 30:
            x, y, w, h = cv2.boundingRect(contour)
            img = cv2.rectangle(img, (x, y), (x + w, y + h), (0, 0, 255), 1)
            red_pieces.append(((2 * x + w) / 2, (2 * y + h) / 2))
            # cv2.putText(img, "RED color", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 0, 255))

    # Tracking the Blue Color

    (contours, hierarchy) = cv2.findContours(blue, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    for pic, contour in enumerate(contours):
        area = cv2.contourArea(contour)
        if area > 10:
            x, y, w, h = cv2.boundingRect(contour)
            img = cv2.rectangle(img, (x, y), (x + w, y + h), (255, 0, 0), 1)
            blue_pieces.append(((2 * x + w) / 2, (2 * y + h) / 2))
            # cv2.putText(img, "Blue color", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 0, 0))

    (contours, hierarchy) = cv2.findContours(green, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    for pic, contour in enumerate(contours):
        area = cv2.contourArea(contour)
        if area > 15:
            x, y, w, h = cv2.boundingRect(contour)
            img = cv2.rectangle(img, (x, y), (x + w, y + h), (0, 255, 0), 1)
            green_pieces.append(((2 * x + w) / 2, (2 * y + h) / 2))
            # cv2.putText(img, "Blue color", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 0, 0))
    return red_pieces, blue_pieces, img


# emotion_recognition()
view()
