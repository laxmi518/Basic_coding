import System.Environment
call x y = do print x 

repeatNTimes 0 _ _ = return ()
repeatNTimes n  tot action =
 do

    action
    repeatNTimes (n-1) action

isDivisible int_val max_val = [x | x <- [1..max_val], x `mod` int_val == 0]    


main = do
    args <- getArgs
    let first_divisor = args !! 0
    let second_divisor = args !! 1
    let upper_bound = args !! 2

    let x = read first_divisor :: Integer
    let y = read second_divisor :: Integer
    let z = read upper_bound :: Integer


    --print args
    --putStrLn first_divisor
    --putStrLn second_divisor
    --putStrLn upper_bound
    isDivisible  x z
    --repeatNTimes z  z (call x y)




