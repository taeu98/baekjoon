king, queen, rook, bishop, knight, pawn = map(int, input().split())
print(f"{1-king}\n{1-queen}\n{2-rook}\n{2-bishop}\n{2-knight}\n{8-pawn}")
