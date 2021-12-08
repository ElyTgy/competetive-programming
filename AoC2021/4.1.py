numbers = [int(n) for n in input().split(",")]
boards = []
print(numbers)

_=input()

def get_input():
    exit=False
    while(not exit):
        board = []
        for i in range(6):
            line = input()
            if line == "exit":
                exit=True
            else:
                board += [int(c) for c in line.split(" ") if c != '']
        boards.append(board)

def has_won(board_arr, marked_char=-1):
    print(board_arr)
    for i in range(0, 25, 5):
        if board_arr[i]==marked_char and board_arr[i+1]==marked_char and board_arr[i+2]==marked_char and board_arr[i+3]==marked_char and board_arr[i+4]==marked_char:
            return True
    for i in range(5):
        if board_arr[i]==marked_char and board_arr[i+5]==marked_char and board_arr[i+10]==marked_char and board_arr[i+15]==-1 and board_arr[i+20]==marked_char:
            return True
    return False

def change_to_marked(board, num):
    for i in range(len(board)):
        if board[i] == num:
            board[i] = -1
    return board

def sum_unmarked(board):
    sum = 0
    for num in board:
        if num != -1:
            sum+=num
    return sum

get_input()
def main():
    for num in numbers:
        print(boards[0])
        print(boards[1])
        print(boards[2])
        for i, board in enumerate(boards):
            if num in board:
                board = change_to_marked(board, num)
                boards[i] = board
                if has_won(boards[i]):
                    return (sum_unmarked(boards[i])*num)

print(main())