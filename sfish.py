from stockfish import Stockfish
import os
# from Chessnut import Game

# you should install the stockfish engine in your operating system globally or specify path to binary file in class constructor
stockfish = Stockfish(os.getcwd() + '/stockfish-10-linux/src/stockfish')

# set position by FEN:
stockfish.set_fen_position("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1")

poslist = []
# chessgame = Game()
# print(chessgame)  # 'rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1'

# set position by moves:
def ret_pos():
    return poslist


def position(pos):
    poslist.append(pos)


def black_start_game():
    stockfish.set_position(poslist)
    best_move = stockfish.get_best_move()
    poslist.append(best_move)
    print(poslist)
    return best_move, poslist


def white_start_game():
    stockfish.set_position(poslist)
    best_move = stockfish.get_best_move()

    poslist.append(best_move)
    print(poslist)
    return best_move, poslist


# while True:
#     best_move = stockfish.get_best_move()
#     print(best_move)
#     chessgame.apply_move(best_move)
#
#     a = input("oyna")
#
#
#
#     __ = chessgame.apply_move(a)
#     print(__)
#     if __ == 1:
#         print("Yanlis hamle Oynadiniz")
#
#     else:
#         poslist.append(best_move)
#
#         poslist.append(a)
#         stockfish.set_position(poslist)
#
#
#     print(chessgame)
