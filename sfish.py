from stockfish import Stockfish
import os
# you should install the stockfish engine in your operating system globally or specify path to binary file in class constructor
stockfish = Stockfish(os.getcwd()+'/stockfish-10-linux/src/stockfish')

# set position by FEN:
stockfish.set_fen_position("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 100")

poslist = []


# set position by moves:
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
    print(poslist)
    poslist.append(best_move)
    return best_move, poslist

#
# while True:
#
#
#     best_move = stockfish.get_best_move()
#     print(best_move)
#     a = input("oyna")
#
#
#     poslist.append(best_move)
#     poslist.append(a)
#     stockfish.set_position(poslist)
