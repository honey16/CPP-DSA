/*
Insertion Sort (shifting not swapping)
            10 1 7 4 8 2 11

Round 1     1<10 left
i=1         shift 10 right to make empty space and left 1
            1 10 7 4 8 2 11

Round 2     7<10 left,  7>1 right
i=2         1 7 10 4 8 2 11

Round 3     4<10 left, 4<7 right, 4>1 right
i=3         move 7,10 to right
            1 4 7 10 8 2 11

Round 4     8<10 left, 8>7 right
i=4         1 4 7 8 10 2 11

Round 5     2<10 left,  .. 2>1 right
i=5         shift 4 7 8 10 right
            1 2 4 7 8 10 11

Round 6     11>10  right
i=6         1 2 4 7 8 10 11


*/
